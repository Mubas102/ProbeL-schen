#include "mainwindow.h"                     //Präprozessoranweisung
#include "ui_mainwindow.h"                  //Präprozessoranweisung
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Methode zum Konvertieren von QString in double und Abspeicherung der Strecke in Variable
void MainWindow::on_FlugstreckeEingabe_textChanged(const QString &arg1)
{
    QString flugstrecke = arg1;
    bool flagStrecke;
    double strecke = flugstrecke.toDouble(&flagStrecke);
    setStrecke(strecke);
}

//Methode zum Konvertieren von QString in int und Abspeicherung der Anzahl in Variable
void MainWindow::on_AnzahlEingabe_textChanged(const QString &arg1)
{
    QString anzahlPassagiere = arg1;
    bool flagAnzahl;
    int anzahl = anzahlPassagiere.toInt(&flagAnzahl);
    setAnzahl(anzahl);
}

//Methode zum Konvertieren von QString in double und Abspeicherung vom sfc-Wert für CO2-Berechnung in Variable
void MainWindow::on_sfcEingabe_textChanged(const QString &arg1)
{
    QString sfc = arg1;
    bool flagSfc;
    double sfcWert = sfc.toDouble(&flagSfc);
    setSfc(sfcWert);
}

//Methode zum Konvertieren von QString in double und Abspeicherung von sfc-Wert für Impulsberechnung in Variable
void MainWindow::on_InputSfcLine_textChanged(const QString &arg1)
{
    QString sfcImpuls = arg1;
    bool flagSfcImpuls;
    double dbl_sfcImpuls = sfcImpuls.toDouble(&flagSfcImpuls);
    setSfcImpuls(dbl_sfcImpuls);
}

//Methode zum Setzen der Strecke
void MainWindow::setStrecke(double strecke)
{
    this->strecke = strecke;
}

//Methode zum Aufruf der Strecke
double MainWindow::getStrecke()
{
    return this->strecke;
}

//Methode zum Setzen der Anzahl
void MainWindow::setAnzahl(int anzahl)
{
    this->anzahl = anzahl;
}

//Methode zum Aufruf der Anzahl
int MainWindow::getAnzahl()
{
    return this->anzahl;
}

//Methode zum Setzen des sfc-Wertes
void MainWindow::setSfc(double sfcWert)
{
    this->sfcWert = sfcWert;
}

//Methode zum Aufruf des sfc-Wertes
double MainWindow::getSfc()
{
    return this->sfcWert;
}

//Methode zum Setzen der CO2-Aequivalente
void MainWindow::setAequivalente(double aequivalente_Co2)
{
    this->aequivalente_Co2 = aequivalente_Co2;
}

//Methode zum Aufruf der CO2-Aequivalente
double MainWindow::getAequivalente()
{
    return this->aequivalente_Co2;
}

void MainWindow::setSfcImpuls(double dbl_sfcImpuls)
{
    this->dbl_sfcImpuls = dbl_sfcImpuls;
}

void MainWindow::setStrImpuls(QString strImpuls)
{
    this->strImpuls = strImpuls;
}

//Funktion zur Berechnung des CO2-Fussabdrucks
double MainWindow::berechneFussabdruck(double strecke, int anzahl, double sfcWert)
{
    //Unterscheidung in Kurzstrecke(<=1500km) und Langstrecke(>1500km)
    if(strecke <= 1500 && strecke > 0){
        double aequivalente_Co2 = (((sfcWert*3.116*50*(((0.0011235955)*(strecke-2*48.42))+0.233))*0.001)/anzahl);
        //sfc ist der spezielle Kraftstoffverbrauch in kg pro h
        //3,116 ist die CO2-Menge in kg pro kg verbrauchtes Kerosin
        //50kN ist der durschnittliche Schub im Cruise Flug bei Kurzstreckenflugzeugen
        //1h/890km=0.0011235955 ist der Umrechnnungsfaktor der Strecke in die benötigte Zeit für die Strecke
        //2*48,42km entspricht der benötigten Strecke für Start und Landung
        //0,233h ist die Zeit als Verhältnis für Start und Landung zusammen
        //Multiplikation mit 0.001 liefert Ergebnis in tonnen
        //Division durch Anzahl um auf C02-Ausstoß pro Person zu kommen
        setAequivalente(aequivalente_Co2);
        qDebug() << "Kurzstrecke" << aequivalente_Co2;
    }
    else{
        double aequivalente_Co2 = (((sfcWert*3.116*75*(((0.0011235955)*(strecke-2*208))+0.833))*0.001)/anzahl);
        //75kN ist der durchschnittliche Schub bei Langstreckenflügen
        //2*208km entspricht der benötigten Strecke für Start und Landung
        //0,833h ist die Zeit als Verhältnis für Start und Landung zusammen
        //Multiplikation mit 0.001 liefert Ergebnis in tonnen
        //Division durch Anzahl um auf C02-Ausstoß pro Person zu kommen
        setAequivalente(aequivalente_Co2);
        qDebug() << "Langstrecke" << aequivalente_Co2;
    }
   return aequivalente_Co2;
}

//Funktion zur Berechnung des spezifischen Impulses
QString MainWindow::berechneImpuls(double dbl_sfcImpuls)
{
    double impuls = (1/(9.81*(dbl_sfcImpuls/(60*60*1000))));
    //9,81 ist die Erdbeschleunigung
    //60*60*1000 wird benutzt um von kg/kN*h in kg/N*s umzurechnen
    QString strImpuls = QString::number(impuls, 'f', 3);
    setStrImpuls(strImpuls);
    return strImpuls;
}

//Funktion "Berechnen"-Knopf im Fußabdruck-Tab
void MainWindow::on_pushButton_clicked()
{
    MainWindow::berechneFussabdruck(strecke, anzahl, sfcWert);      //Funktion zur Berechnung vom Fußabdruck aufrufen
    visWindow = new VisWindow(aequivalente_Co2, nullptr);
    visWindow->setWindowModality(Qt::ApplicationModal);             //Hauptfenster ermöglicht erst Eingabe, wenn visWindow geschlossen wird
    visWindow->show();                                              //öffne Visualisierungsfenster
}

//Funktion "Berechnen"-Knopf im Impuls-Tab
void MainWindow::on_BerechnenButton_clicked()
{
    MainWindow::berechneImpuls(dbl_sfcImpuls);
    ui->OutputImpLabel->setText(strImpuls + " [s]");                 //Ausgabe vom Impuls im Output Fenster
}
