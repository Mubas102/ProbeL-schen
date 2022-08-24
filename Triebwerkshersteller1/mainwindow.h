#ifndef MAINWINDOW_H                                //Präprozessoranweisung
#define MAINWINDOW_H                                //Präprozessoranweisung

//Einbinden der Fensterbibliothek und des zweiten Fensters
#include <QMainWindow>
#include <QDebug>
#include "viswindow.h"
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//Klassendefinition
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double berechneFussabdruck(double, int, double);
    QString berechneImpuls(double);
    void setStrecke(double);
    double getStrecke();
    void setAnzahl(int);
    int getAnzahl();
    void setSfc(double);
    double getSfc();
    void setAequivalente(double);
    double getAequivalente();
    void setSfcImpuls(double);
    void setStrImpuls(QString);

private slots:
    void on_pushButton_clicked();

    void on_FlugstreckeEingabe_textChanged(const QString &arg1);

    void on_AnzahlEingabe_textChanged(const QString &arg1);

    void on_sfcEingabe_textChanged(const QString &arg1);

    void on_InputSfcLine_textChanged(const QString &arg1);

    void on_BerechnenButton_clicked();

private:
    Ui::MainWindow *ui;
    VisWindow *visWindow;
    QString flugstrecke;
    QString anzahlPassagiere;
    QString sfc;
    QString sfcImpuls;
    QString strImpuls;
    int anzahl;
    double strecke;
    double sfcWert;
    double aequivalente_Co2;
    double dbl_sfcImpuls;
    double impuls;
};
#endif // MAINWINDOW_H
