#include "mainwindow.h"                     //Präprozessoranweisung
#include "qobjectdefs.h"
#include "viswindow.h"

#include <QApplication>                     //Präprozessoranweisung

//Hauptfunktion
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainwindow;
    mainwindow.show();
    return a.exec();
}
