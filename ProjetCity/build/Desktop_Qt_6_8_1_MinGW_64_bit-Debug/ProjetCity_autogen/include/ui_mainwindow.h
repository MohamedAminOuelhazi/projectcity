/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listeBatiments;
    QPushButton *boutonAfficherDetails;
    QPushButton *boutonDemarrerCycle;
    QPushButton *boutonSupprimerBatiment;
    QProgressBar *progressEau;
    QLabel *label_2;
    QProgressBar *progressElectricite;
    QProgressBar *progressSatisfaction;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *nomville;
    QTextEdit *villedetails;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_6;
    QPushButton *Ajoutermaison;
    QSpinBox *spinBoxCapaciteHabitants;
    QLabel *label_8;
    QSpinBox *spinBoxHabitant;
    QLabel *label_7;
    QLabel *label_6;
    QSpinBox *spinBoxElectricite;
    QSpinBox *spinBoxEau;
    QLabel *label_5;
    QLineEdit *lineEditNom;
    QLabel *label;
    QWidget *tab_4;
    QWidget *tab;
    QTabWidget *tabWidget_3;
    QWidget *tab_7;
    QPushButton *Ajouterusine;
    QWidget *tab_8;
    QWidget *tab_2;
    QTabWidget *tabWidget_4;
    QWidget *tab_10;
    QPushButton *Ajouterparc;
    QWidget *tab_11;
    QPushButton *Buttonbatiment;
    QPushButton *boutonAjouterBatiment;
    QTextEdit *textEditDetails;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1087, 645);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listeBatiments = new QListWidget(centralwidget);
        listeBatiments->setObjectName("listeBatiments");
        listeBatiments->setGeometry(QRect(10, 40, 241, 192));
        boutonAfficherDetails = new QPushButton(centralwidget);
        boutonAfficherDetails->setObjectName("boutonAfficherDetails");
        boutonAfficherDetails->setGeometry(QRect(890, 80, 151, 29));
        boutonDemarrerCycle = new QPushButton(centralwidget);
        boutonDemarrerCycle->setObjectName("boutonDemarrerCycle");
        boutonDemarrerCycle->setGeometry(QRect(890, 40, 141, 29));
        boutonSupprimerBatiment = new QPushButton(centralwidget);
        boutonSupprimerBatiment->setObjectName("boutonSupprimerBatiment");
        boutonSupprimerBatiment->setGeometry(QRect(890, 120, 191, 29));
        progressEau = new QProgressBar(centralwidget);
        progressEau->setObjectName("progressEau");
        progressEau->setGeometry(QRect(280, 70, 118, 23));
        progressEau->setMaximum(10000);
        progressEau->setValue(100);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 40, 301, 20));
        progressElectricite = new QProgressBar(centralwidget);
        progressElectricite->setObjectName("progressElectricite");
        progressElectricite->setGeometry(QRect(280, 130, 118, 23));
        progressElectricite->setMaximum(5000);
        progressElectricite->setValue(24);
        progressSatisfaction = new QProgressBar(centralwidget);
        progressSatisfaction->setObjectName("progressSatisfaction");
        progressSatisfaction->setGeometry(QRect(280, 190, 118, 23));
        progressSatisfaction->setValue(24);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 100, 301, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 160, 301, 20));
        nomville = new QLabel(centralwidget);
        nomville->setObjectName("nomville");
        nomville->setGeometry(QRect(10, 10, 63, 20));
        villedetails = new QTextEdit(centralwidget);
        villedetails->setObjectName("villedetails");
        villedetails->setGeometry(QRect(430, 40, 421, 171));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(460, 250, 611, 311));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(20, 10, 381, 251));
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        Ajoutermaison = new QPushButton(tab_6);
        Ajoutermaison->setObjectName("Ajoutermaison");
        Ajoutermaison->setGeometry(QRect(210, 160, 121, 29));
        spinBoxCapaciteHabitants = new QSpinBox(tab_6);
        spinBoxCapaciteHabitants->setObjectName("spinBoxCapaciteHabitants");
        spinBoxCapaciteHabitants->setGeometry(QRect(150, 160, 44, 29));
        label_8 = new QLabel(tab_6);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 160, 151, 20));
        spinBoxHabitant = new QSpinBox(tab_6);
        spinBoxHabitant->setObjectName("spinBoxHabitant");
        spinBoxHabitant->setGeometry(QRect(90, 120, 44, 29));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 120, 71, 20));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 80, 81, 20));
        spinBoxElectricite = new QSpinBox(tab_6);
        spinBoxElectricite->setObjectName("spinBoxElectricite");
        spinBoxElectricite->setGeometry(QRect(90, 80, 44, 29));
        spinBoxElectricite->setMaximum(5000);
        spinBoxEau = new QSpinBox(tab_6);
        spinBoxEau->setObjectName("spinBoxEau");
        spinBoxEau->setGeometry(QRect(80, 40, 44, 29));
        spinBoxEau->setMaximum(10000);
        label_5 = new QLabel(tab_6);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 50, 63, 20));
        lineEditNom = new QLineEdit(tab_6);
        lineEditNom->setObjectName("lineEditNom");
        lineEditNom->setGeometry(QRect(80, 10, 113, 28));
        label = new QLabel(tab_6);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 63, 20));
        tabWidget_2->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget_3 = new QTabWidget(tab);
        tabWidget_3->setObjectName("tabWidget_3");
        tabWidget_3->setGeometry(QRect(20, 10, 531, 241));
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        Ajouterusine = new QPushButton(tab_7);
        Ajouterusine->setObjectName("Ajouterusine");
        Ajouterusine->setGeometry(QRect(10, 160, 121, 29));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        tabWidget_3->addTab(tab_8, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget_4 = new QTabWidget(tab_2);
        tabWidget_4->setObjectName("tabWidget_4");
        tabWidget_4->setGeometry(QRect(20, 10, 541, 241));
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        Ajouterparc = new QPushButton(tab_10);
        Ajouterparc->setObjectName("Ajouterparc");
        Ajouterparc->setGeometry(QRect(20, 110, 121, 29));
        tabWidget_4->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        tabWidget_4->addTab(tab_11, QString());
        tabWidget->addTab(tab_2, QString());
        Buttonbatiment = new QPushButton(centralwidget);
        Buttonbatiment->setObjectName("Buttonbatiment");
        Buttonbatiment->setGeometry(QRect(10, 250, 271, 29));
        boutonAjouterBatiment = new QPushButton(centralwidget);
        boutonAjouterBatiment->setObjectName("boutonAjouterBatiment");
        boutonAjouterBatiment->setGeometry(QRect(10, 350, 161, 29));
        textEditDetails = new QTextEdit(centralwidget);
        textEditDetails->setObjectName("textEditDetails");
        textEditDetails->setGeometry(QRect(30, 400, 419, 177));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1087, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(1);
        tabWidget_4->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        boutonAfficherDetails->setText(QCoreApplication::translate("MainWindow", "Afficher les d\303\251tails", nullptr));
        boutonDemarrerCycle->setText(QCoreApplication::translate("MainWindow", "D\303\251marrer un cycle", nullptr));
        boutonSupprimerBatiment->setText(QCoreApplication::translate("MainWindow", "Supprimer un b\303\242timent", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Eau", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Satisfaction", nullptr));
        nomville->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Ajoutermaison->setText(QCoreApplication::translate("MainWindow", "Ajouter maison", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "CapaciteHabitants :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Habitant : ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Maison", nullptr));
        Ajouterusine->setText(QCoreApplication::translate("MainWindow", "Ajouter usine", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Usine", nullptr));
        Ajouterparc->setText(QCoreApplication::translate("MainWindow", "Ajouter Parc", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Parc", nullptr));
        Buttonbatiment->setText(QCoreApplication::translate("MainWindow", "Afficher les donn\303\251es de ce batiment", nullptr));
        boutonAjouterBatiment->setText(QCoreApplication::translate("MainWindow", "Ajouter un b\303\242timent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
