/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *CO2_Tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *FlugstreckeLabel;
    QLineEdit *FlugstreckeEingabe;
    QHBoxLayout *horizontalLayout_3;
    QLabel *AnzahlLabel;
    QLineEdit *AnzahlEingabe;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sfcCO2Label;
    QLineEdit *sfcEingabe;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *ClearCO2Button;
    QSpacerItem *horizontalSpacer;
    QPushButton *BeendenKnopf;
    QWidget *ImpulsTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *sfcImpulsLabel;
    QLineEdit *InputSfcLine;
    QHBoxLayout *horizontalLayout_9;
    QLabel *ImpulsLabel;
    QLineEdit *OutputImpLabel;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *BerechnenButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ClearImpulsButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *BeendenButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(400, 300));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        CO2_Tab = new QWidget();
        CO2_Tab->setObjectName(QString::fromUtf8("CO2_Tab"));
        verticalLayout = new QVBoxLayout(CO2_Tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FlugstreckeLabel = new QLabel(CO2_Tab);
        FlugstreckeLabel->setObjectName(QString::fromUtf8("FlugstreckeLabel"));

        horizontalLayout->addWidget(FlugstreckeLabel);

        FlugstreckeEingabe = new QLineEdit(CO2_Tab);
        FlugstreckeEingabe->setObjectName(QString::fromUtf8("FlugstreckeEingabe"));

        horizontalLayout->addWidget(FlugstreckeEingabe);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        AnzahlLabel = new QLabel(CO2_Tab);
        AnzahlLabel->setObjectName(QString::fromUtf8("AnzahlLabel"));

        horizontalLayout_3->addWidget(AnzahlLabel);

        AnzahlEingabe = new QLineEdit(CO2_Tab);
        AnzahlEingabe->setObjectName(QString::fromUtf8("AnzahlEingabe"));

        horizontalLayout_3->addWidget(AnzahlEingabe);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sfcCO2Label = new QLabel(CO2_Tab);
        sfcCO2Label->setObjectName(QString::fromUtf8("sfcCO2Label"));

        horizontalLayout_4->addWidget(sfcCO2Label);

        sfcEingabe = new QLineEdit(CO2_Tab);
        sfcEingabe->setObjectName(QString::fromUtf8("sfcEingabe"));

        horizontalLayout_4->addWidget(sfcEingabe);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(CO2_Tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ClearCO2Button = new QPushButton(CO2_Tab);
        ClearCO2Button->setObjectName(QString::fromUtf8("ClearCO2Button"));

        horizontalLayout_5->addWidget(ClearCO2Button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        BeendenKnopf = new QPushButton(CO2_Tab);
        BeendenKnopf->setObjectName(QString::fromUtf8("BeendenKnopf"));

        horizontalLayout_5->addWidget(BeendenKnopf);


        verticalLayout->addLayout(horizontalLayout_5);

        tabWidget->addTab(CO2_Tab, QString());
        ImpulsTab = new QWidget();
        ImpulsTab->setObjectName(QString::fromUtf8("ImpulsTab"));
        verticalLayout_3 = new QVBoxLayout(ImpulsTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        sfcImpulsLabel = new QLabel(ImpulsTab);
        sfcImpulsLabel->setObjectName(QString::fromUtf8("sfcImpulsLabel"));

        horizontalLayout_8->addWidget(sfcImpulsLabel);

        InputSfcLine = new QLineEdit(ImpulsTab);
        InputSfcLine->setObjectName(QString::fromUtf8("InputSfcLine"));

        horizontalLayout_8->addWidget(InputSfcLine);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        ImpulsLabel = new QLabel(ImpulsTab);
        ImpulsLabel->setObjectName(QString::fromUtf8("ImpulsLabel"));

        horizontalLayout_9->addWidget(ImpulsLabel);

        OutputImpLabel = new QLineEdit(ImpulsTab);
        OutputImpLabel->setObjectName(QString::fromUtf8("OutputImpLabel"));
        OutputImpLabel->setEnabled(true);
        OutputImpLabel->setReadOnly(true);

        horizontalLayout_9->addWidget(OutputImpLabel);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        BerechnenButton = new QPushButton(ImpulsTab);
        BerechnenButton->setObjectName(QString::fromUtf8("BerechnenButton"));

        horizontalLayout_7->addWidget(BerechnenButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ClearImpulsButton = new QPushButton(ImpulsTab);
        ClearImpulsButton->setObjectName(QString::fromUtf8("ClearImpulsButton"));

        horizontalLayout_2->addWidget(ClearImpulsButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        BeendenButton = new QPushButton(ImpulsTab);
        BeendenButton->setObjectName(QString::fromUtf8("BeendenButton"));

        horizontalLayout_2->addWidget(BeendenButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget->addTab(ImpulsTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(BeendenKnopf, SIGNAL(pressed()), MainWindow, SLOT(close()));
        QObject::connect(BeendenButton, SIGNAL(pressed()), MainWindow, SLOT(close()));
        QObject::connect(ClearImpulsButton, SIGNAL(pressed()), InputSfcLine, SLOT(clear()));
        QObject::connect(ClearImpulsButton, SIGNAL(pressed()), OutputImpLabel, SLOT(clear()));
        QObject::connect(ClearCO2Button, SIGNAL(pressed()), sfcEingabe, SLOT(clear()));
        QObject::connect(ClearCO2Button, SIGNAL(pressed()), AnzahlEingabe, SLOT(clear()));
        QObject::connect(ClearCO2Button, SIGNAL(pressed()), FlugstreckeEingabe, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Triebwerkshersteller", nullptr));
        FlugstreckeLabel->setText(QCoreApplication::translate("MainWindow", "Flugstrecke [km]", nullptr));
        AnzahlLabel->setText(QCoreApplication::translate("MainWindow", "Anzahl Passagiere", nullptr));
        sfcCO2Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Spezifischer Kraftstoffverbrauch [kg/kN*h]</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Berechnen", nullptr));
        ClearCO2Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        BeendenKnopf->setText(QCoreApplication::translate("MainWindow", "Beenden", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CO2_Tab), QCoreApplication::translate("MainWindow", "CO2-\303\204quivalente", nullptr));
        sfcImpulsLabel->setText(QCoreApplication::translate("MainWindow", "Spezifischer Kraftstoffverbrauch [kg/kN*h]", nullptr));
        ImpulsLabel->setText(QCoreApplication::translate("MainWindow", "Der spezifische Impuls betr\303\244gt:            ", nullptr));
        BerechnenButton->setText(QCoreApplication::translate("MainWindow", "Berechnen", nullptr));
        ClearImpulsButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        BeendenButton->setText(QCoreApplication::translate("MainWindow", "Beenden", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ImpulsTab), QCoreApplication::translate("MainWindow", "Spezifischer Impuls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
