#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <string>
using namespace std;







using std::cout; using std::ofstream;
using std::endl; using std::string;
using std::fstream;




// Datenbank Datei einlesen, Parameter string dateipfad+name
vector<vector<string>> lesen(string pfile)
{
    cout << "Methode 'lesen' wurde gestartet." << endl;

    vector<vector<string>> content;
    vector<string> row;
    string line, word;

    fstream file (pfile, ios::in);
    if(file.is_open())
    {
        while(getline(file, line))
        {
            row.clear();

            stringstream str(line);

            while(getline(str, word, ';'))
            row.push_back(word);
            content.push_back(row);
        }
    }
    else
    {
        cout<<"Konnte Datenbankdatei nicht oeffnen\n";
    }
    return content;
}











MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Spaltenbreiten setzen
    ui->tableWidget->setColumnWidth(0,100);
    ui->tableWidget->setColumnWidth(1,300);
    ui->tableWidget->setColumnWidth(2,300);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // Datenbank einlesen
    string datenbankDatei = "C:/Users/LionR/Documents/API Software Projekt/TaToLiBa/src/APIDatenkbankverwaltung/twkdata.csv";

    vector<vector<string>> content = lesen(datenbankDatei);

    QString newID;
    QString newName;
    QString newSchub;

    for(int i=1;i<content.size(); i++)
    {

    // Zeilen hinzufügen
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(rowCount + 1);

    int datZeile = rowCount+1; // um in DatenbankDatei Kommentar in erster Zeile zu überspringen

    newID = QString::fromStdString(content[datZeile][0]);
    newName = QString::fromStdString(content[datZeile][1]);
    newSchub = QString::fromStdString(content[datZeile][2]);


    QTableWidgetItem *items[] =
    {
        new QTableWidgetItem("ID"),
        new QTableWidgetItem("Name"),
        new QTableWidgetItem("Schub"),
    };

    // Text in hinzugefügter Zeile bearbeiten
   items[0]->setText(newID);
   items[1]->setText(newName);
   items[2]->setText(newSchub);


    const size_t count = sizeof(items) / sizeof(QTableWidget*);
    for(size_t column = 0; column < count; column++)
    {
        ui->tableWidget->setItem(rowCount, column, items[column]);
    }
    }
}

