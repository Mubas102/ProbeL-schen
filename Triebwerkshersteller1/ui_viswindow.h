/********************************************************************************
** Form generated from reading UI file 'viswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISWINDOW_H
#define UI_VISWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *CO2PpLabel;
    QLineEdit *OutputAusstossPpLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *VergleichAutoLabel;
    QLineEdit *AutoKmLine;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ZurueckButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VisWindow)
    {
        if (VisWindow->objectName().isEmpty())
            VisWindow->setObjectName(QString::fromUtf8("VisWindow"));
        VisWindow->resize(650, 610);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VisWindow->sizePolicy().hasHeightForWidth());
        VisWindow->setSizePolicy(sizePolicy);
        VisWindow->setMinimumSize(QSize(650, 560));
        centralwidget = new QWidget(VisWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalFrame = new QFrame(centralwidget);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy1);
        horizontalFrame->setMinimumSize(QSize(0, 0));
        horizontalFrame->setCursor(QCursor(Qt::ArrowCursor));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addWidget(horizontalFrame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        CO2PpLabel = new QLabel(centralwidget);
        CO2PpLabel->setObjectName(QString::fromUtf8("CO2PpLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CO2PpLabel->sizePolicy().hasHeightForWidth());
        CO2PpLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(CO2PpLabel);

        OutputAusstossPpLine = new QLineEdit(centralwidget);
        OutputAusstossPpLine->setObjectName(QString::fromUtf8("OutputAusstossPpLine"));
        OutputAusstossPpLine->setReadOnly(true);

        horizontalLayout_3->addWidget(OutputAusstossPpLine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        VergleichAutoLabel = new QLabel(centralwidget);
        VergleichAutoLabel->setObjectName(QString::fromUtf8("VergleichAutoLabel"));
        sizePolicy2.setHeightForWidth(VergleichAutoLabel->sizePolicy().hasHeightForWidth());
        VergleichAutoLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(VergleichAutoLabel);

        AutoKmLine = new QLineEdit(centralwidget);
        AutoKmLine->setObjectName(QString::fromUtf8("AutoKmLine"));
        AutoKmLine->setReadOnly(true);

        horizontalLayout_4->addWidget(AutoKmLine);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        ZurueckButton = new QPushButton(centralwidget);
        ZurueckButton->setObjectName(QString::fromUtf8("ZurueckButton"));

        horizontalLayout_2->addWidget(ZurueckButton);


        verticalLayout->addLayout(horizontalLayout_2);

        VisWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VisWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 22));
        VisWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VisWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VisWindow->setStatusBar(statusbar);

        retranslateUi(VisWindow);
        QObject::connect(ZurueckButton, SIGNAL(pressed()), VisWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(VisWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VisWindow)
    {
        VisWindow->setWindowTitle(QCoreApplication::translate("VisWindow", "Visualisierung", nullptr));
        CO2PpLabel->setText(QCoreApplication::translate("VisWindow", "Der CO2-Aussto\303\237 pro Person betr\303\244gt:", nullptr));
        VergleichAutoLabel->setText(QCoreApplication::translate("VisWindow", "Strecke, die ein Auto f\303\274r den gleichen CO2-Aussto\303\237 fahren muss:", nullptr));
        ZurueckButton->setText(QCoreApplication::translate("VisWindow", "Zur\303\274ck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisWindow: public Ui_VisWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISWINDOW_H
