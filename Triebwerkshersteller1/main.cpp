#include "mainwindow.h"                     //Präprozessoranweisung
#include "qobjectdefs.h"
#include "viswindow.h"

#include <QApplication>                     //Präprozessoranweisung

//Hauptfunktion
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Bastis Datei
    MainWindow mainwindow;
    mainwindow.show();
    return a.exec();
}
