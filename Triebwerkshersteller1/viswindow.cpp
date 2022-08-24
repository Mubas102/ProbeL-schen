#include "viswindow.h"                                         //Präprozessoranweisung
#include "mainwindow.h"
#include "ui_viswindow.h"                                      //Präprozessoranweisung

VisWindow::VisWindow(const double aequivalente_Co2, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VisWindow)
{
    ui->setupUi(this);

    //Erstellung von Balken
    QBarSet *set0 = new QBarSet("Berechneter CO2-Ausstoß");
    QBarSet *set1 = new QBarSet("Durchschnittsbürger");
    QBarSet *set2 = new QBarSet("Durchschnittsbürger Flugreisen");


    //Hinzufügen von Werten zu den Balken
    *set0 << aequivalente_Co2 << aequivalente_Co2;
    *set1 << 11.07 << 0;
    *set2 << 0 << 0.49;

    //Verbinden der Werte und Balken
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    //Erstellung eines neuen Diagramms
    QChart *chart = new QChart();

    //Verbinden der Balken mit dem Diagramm
    chart->addSeries(series);

    //Festlegen eines Titels für das Diagramm
    chart->setTitle("Treibhausgasbilanz in Tonnen CO2-Äquivalenten");

    chart->setAnimationOptions(QChart::AllAnimations);

    //Festlegen der Kategorien
    QStringList categories;
    categories << "Flugreisen CO2-Ausstoß" << "Gesamt CO2-Ausstoß";

    //Hinzufügen der Kategorien zu den Achsen
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();

    //Hinzufügen der Kategorien und Serie zum Diagramm
    chart->setAxisX(axis, series);

    //Legende zum Diagramm hinzufügen
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QPalette pal = qApp->palette();

    //Ändern der Farbe vom Fenster und vom Text
    pal.setColor(QPalette::Window, QRgb(0xffffff));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));

    qApp->setPalette(pal);

    //Hinzufügen des Diagramms zum Fenster
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setParent(ui->horizontalFrame);

    QString strAequivalente = QString::number(aequivalente_Co2, 'f', 3);
    setStrAequivalente(strAequivalente);
    ui->OutputAusstossPpLine->setText(strAequivalente + " [to]");

    setAequivalente(aequivalente_Co2);
}

//Destruktor des neuen Fensters
VisWindow::~VisWindow()
{
    delete ui;
}

void VisWindow::setStrAequivalente(QString strAequivalente)
{
    this->strAequivalente = strAequivalente;
}

void VisWindow::setAequivalente(double aequivalente_Co2)
{
    this->aequivalente_Co2 = aequivalente_Co2;
}
