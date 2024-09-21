/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *SKO3;
    QLabel *SKO2;
    QGraphicsView *graphicsView;
    QComboBox *comboBox;
    QPushButton *clearButton;
    QLabel *SKO1;
    QPushButton *genButton;
    QLabel *cycleInfo;
    QLabel *SKO;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SKO3 = new QLabel(centralwidget);
        SKO3->setObjectName(QString::fromUtf8("SKO3"));
        QFont font1;
        font1.setPointSize(16);
        SKO3->setFont(font1);

        gridLayout->addWidget(SKO3, 0, 2, 1, 1);

        SKO2 = new QLabel(centralwidget);
        SKO2->setObjectName(QString::fromUtf8("SKO2"));
        SKO2->setFont(font1);

        gridLayout->addWidget(SKO2, 0, 1, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 2, 0, 1, 3);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font2;
        font2.setPointSize(12);
        comboBox->setFont(font2);

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(clearButton, 3, 1, 1, 1);

        SKO1 = new QLabel(centralwidget);
        SKO1->setObjectName(QString::fromUtf8("SKO1"));
        SKO1->setFont(font1);

        gridLayout->addWidget(SKO1, 0, 0, 1, 1);

        genButton = new QPushButton(centralwidget);
        genButton->setObjectName(QString::fromUtf8("genButton"));

        gridLayout->addWidget(genButton, 3, 0, 1, 1);

        cycleInfo = new QLabel(centralwidget);
        cycleInfo->setObjectName(QString::fromUtf8("cycleInfo"));
        cycleInfo->setFont(font2);

        gridLayout->addWidget(cycleInfo, 3, 2, 1, 1);

        SKO = new QLabel(centralwidget);
        SKO->setObjectName(QString::fromUtf8("SKO"));
        SKO->setFont(font2);

        gridLayout->addWidget(SKO, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        SKO3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#00ff00;\">\320\242\320\276\321\207\320\265\320\272 \320\272\320\273\320\260\321\201\321\201\320\260 (C) =</span></p></body></html>", nullptr));
        SKO2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">\320\242\320\276\321\207\320\265\320\272 \320\272\320\273\320\260\321\201\321\201\320\260 (B) =</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "3 - 4", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "3 - 7", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "3 - 8", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "4 - 7", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "4 - 8", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "7 - 8", nullptr));

        clearButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        SKO1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff00ff;\">\320\242\320\276\321\207\320\265\320\272 \320\272\320\273\320\260\321\201\321\201\320\260 (A) =</span></p></body></html>", nullptr));
        genButton->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        cycleInfo->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\206\320\270\320\272\320\273\320\276\320\262 =", nullptr));
        SKO->setText(QApplication::translate("MainWindow", "\320\241\320\232\320\236 =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
