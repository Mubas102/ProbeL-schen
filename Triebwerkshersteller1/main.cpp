#include "mainwindow.h"                     //PrĂ¤prozessoranweisung
#include "qobjectdefs.h"
#include "viswindow.h"

#include <QApplication>                     //PrĂ¤prozessoranweisung

//Hauptfunktion
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Bastis Datei
    MainWindow mainwindow;
    mainwindow.show();
    return a.exec();
}
