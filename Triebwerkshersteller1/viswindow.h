#ifndef VISWINDOW_H                                         //Präprozessoranweisung
#define VISWINDOW_H                                         //Präprozessoranweisung

//Einbinden der für die Darstellung von Balkendiagrammen benötigten Bibliotheken
#include <QMainWindow>
#include <QDebug>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

//Klassendefinition
namespace Ui {
class VisWindow;
}

class VisWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VisWindow(const double aequivalente_Co2, QWidget *parent = nullptr);
    ~VisWindow();
    void setStrAequivalente(QString);
    void setAequivalente(double);

private:
    Ui::VisWindow *ui;
    QString strAequivalente;
    double aequivalente_Co2;
};

#endif // VISWINDOW_H
