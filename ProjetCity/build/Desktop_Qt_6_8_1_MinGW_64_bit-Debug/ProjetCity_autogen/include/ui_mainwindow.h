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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEditNom;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_7;
    QSpinBox *spinBoxEau;
    QSpinBox *spinBoxHabitant;
    QLabel *label_6;
    QSpinBox *spinBoxElectricite;
    QSpinBox *spinBoxCapaciteHabitants;
    QLabel *label_8;
    QWidget *tab_4;
    QPushButton *modifiermaison;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLineEdit *lineEditNom_2;
    QLabel *label_10;
    QSpinBox *spinBoxEau_2;
    QLabel *label_11;
    QSpinBox *spinBoxElectricite_2;
    QLabel *label_12;
    QSpinBox *spinBoxHabitant_2;
    QLabel *label_13;
    QSpinBox *spinBoxCapaciteHabitants_2;
    QWidget *tab;
    QTabWidget *spinBoxPr_2;
    QWidget *tab_7;
    QPushButton *Ajouterusine;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_14;
    QLineEdit *lineEditNom_3;
    QLabel *label_15;
    QSpinBox *spinBoxEau_3;
    QLabel *label_16;
    QSpinBox *spinBoxElectricite_3;
    QLabel *label_20;
    QLabel *label_21;
    QDoubleSpinBox *spinBoxPr;
    QDoubleSpinBox *spinBoxP;
    QWidget *tab_8;
    QPushButton *Modifierusine;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_26;
    QLineEdit *lineEditNom_6;
    QLabel *label_27;
    QSpinBox *spinBoxEau_6;
    QLabel *label_25;
    QSpinBox *spinBoxElectricite_8;
    QLabel *label_28;
    QLabel *label_29;
    QDoubleSpinBox *spinBoxPr_3;
    QDoubleSpinBox *spinBoxP_2;
    QWidget *tab_2;
    QTabWidget *tabWidget_4;
    QWidget *tab_10;
    QPushButton *Ajouterparc;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_17;
    QLineEdit *lineEditNom_4;
    QLabel *label_19;
    QSpinBox *spinBoxEau_4;
    QLabel *label_18;
    QSpinBox *spinBoxElectricite_4;
    QLabel *label_30;
    QSpinBox *spinBoxSurface;
    QLabel *label_31;
    QSpinBox *spinBoxEbe;
    QWidget *tab_11;
    QPushButton *ModifierParc;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QLabel *label_23;
    QLineEdit *lineEditNom_5;
    QLabel *label_24;
    QSpinBox *spinBoxEau_5;
    QLabel *label_22;
    QSpinBox *spinBoxElectricite_7;
    QLabel *label_33;
    QSpinBox *spinBoxSurface_2;
    QLabel *label_32;
    QSpinBox *spinBoxEbe_2;
    QPushButton *Buttonbatiment;
    QPushButton *boutonAjouterBatiment;
    QTextEdit *textEditDetails;
    QPushButton *terminerCycle;
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
        tabWidget_2->setGeometry(QRect(20, 10, 491, 251));
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        Ajoutermaison = new QPushButton(tab_6);
        Ajoutermaison->setObjectName("Ajoutermaison");
        Ajoutermaison->setGeometry(QRect(350, 170, 121, 29));
        formLayoutWidget = new QWidget(tab_6);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 301, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEditNom = new QLineEdit(formLayoutWidget);
        lineEditNom->setObjectName("lineEditNom");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        spinBoxEau = new QSpinBox(formLayoutWidget);
        spinBoxEau->setObjectName("spinBoxEau");
        spinBoxEau->setMaximum(10000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxEau);

        spinBoxHabitant = new QSpinBox(formLayoutWidget);
        spinBoxHabitant->setObjectName("spinBoxHabitant");

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBoxHabitant);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        spinBoxElectricite = new QSpinBox(formLayoutWidget);
        spinBoxElectricite->setObjectName("spinBoxElectricite");
        spinBoxElectricite->setMaximum(5000);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxElectricite);

        spinBoxCapaciteHabitants = new QSpinBox(formLayoutWidget);
        spinBoxCapaciteHabitants->setObjectName("spinBoxCapaciteHabitants");

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxCapaciteHabitants);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        tabWidget_2->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        modifiermaison = new QPushButton(tab_4);
        modifiermaison->setObjectName("modifiermaison");
        modifiermaison->setGeometry(QRect(340, 170, 131, 29));
        formLayoutWidget_2 = new QWidget(tab_4);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(10, 10, 301, 191));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        lineEditNom_2 = new QLineEdit(formLayoutWidget_2);
        lineEditNom_2->setObjectName("lineEditNom_2");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditNom_2);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        spinBoxEau_2 = new QSpinBox(formLayoutWidget_2);
        spinBoxEau_2->setObjectName("spinBoxEau_2");
        spinBoxEau_2->setMaximum(10000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxEau_2);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName("label_11");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_11);

        spinBoxElectricite_2 = new QSpinBox(formLayoutWidget_2);
        spinBoxElectricite_2->setObjectName("spinBoxElectricite_2");
        spinBoxElectricite_2->setMaximum(5000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinBoxElectricite_2);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_12);

        spinBoxHabitant_2 = new QSpinBox(formLayoutWidget_2);
        spinBoxHabitant_2->setObjectName("spinBoxHabitant_2");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, spinBoxHabitant_2);

        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName("label_13");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_13);

        spinBoxCapaciteHabitants_2 = new QSpinBox(formLayoutWidget_2);
        spinBoxCapaciteHabitants_2->setObjectName("spinBoxCapaciteHabitants_2");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, spinBoxCapaciteHabitants_2);

        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        spinBoxPr_2 = new QTabWidget(tab);
        spinBoxPr_2->setObjectName("spinBoxPr_2");
        spinBoxPr_2->setGeometry(QRect(20, 10, 531, 241));
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        Ajouterusine = new QPushButton(tab_7);
        Ajouterusine->setObjectName("Ajouterusine");
        Ajouterusine->setGeometry(QRect(380, 160, 121, 29));
        formLayoutWidget_3 = new QWidget(tab_7);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(10, 10, 301, 181));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName("label_14");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_14);

        lineEditNom_3 = new QLineEdit(formLayoutWidget_3);
        lineEditNom_3->setObjectName("lineEditNom_3");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditNom_3);

        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName("label_15");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_15);

        spinBoxEau_3 = new QSpinBox(formLayoutWidget_3);
        spinBoxEau_3->setObjectName("spinBoxEau_3");
        spinBoxEau_3->setMaximum(10000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, spinBoxEau_3);

        label_16 = new QLabel(formLayoutWidget_3);
        label_16->setObjectName("label_16");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_16);

        spinBoxElectricite_3 = new QSpinBox(formLayoutWidget_3);
        spinBoxElectricite_3->setObjectName("spinBoxElectricite_3");
        spinBoxElectricite_3->setMaximum(5000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, spinBoxElectricite_3);

        label_20 = new QLabel(formLayoutWidget_3);
        label_20->setObjectName("label_20");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_3);
        label_21->setObjectName("label_21");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_21);

        spinBoxPr = new QDoubleSpinBox(formLayoutWidget_3);
        spinBoxPr->setObjectName("spinBoxPr");

        formLayout_3->setWidget(3, QFormLayout::FieldRole, spinBoxPr);

        spinBoxP = new QDoubleSpinBox(formLayoutWidget_3);
        spinBoxP->setObjectName("spinBoxP");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, spinBoxP);

        spinBoxPr_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        Modifierusine = new QPushButton(tab_8);
        Modifierusine->setObjectName("Modifierusine");
        Modifierusine->setGeometry(QRect(380, 160, 121, 29));
        formLayoutWidget_4 = new QWidget(tab_8);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(10, 10, 301, 191));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(formLayoutWidget_4);
        label_26->setObjectName("label_26");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_26);

        lineEditNom_6 = new QLineEdit(formLayoutWidget_4);
        lineEditNom_6->setObjectName("lineEditNom_6");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEditNom_6);

        label_27 = new QLabel(formLayoutWidget_4);
        label_27->setObjectName("label_27");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_27);

        spinBoxEau_6 = new QSpinBox(formLayoutWidget_4);
        spinBoxEau_6->setObjectName("spinBoxEau_6");
        spinBoxEau_6->setMaximum(10000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, spinBoxEau_6);

        label_25 = new QLabel(formLayoutWidget_4);
        label_25->setObjectName("label_25");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_25);

        spinBoxElectricite_8 = new QSpinBox(formLayoutWidget_4);
        spinBoxElectricite_8->setObjectName("spinBoxElectricite_8");
        spinBoxElectricite_8->setMaximum(5000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, spinBoxElectricite_8);

        label_28 = new QLabel(formLayoutWidget_4);
        label_28->setObjectName("label_28");

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_28);

        label_29 = new QLabel(formLayoutWidget_4);
        label_29->setObjectName("label_29");

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_29);

        spinBoxPr_3 = new QDoubleSpinBox(formLayoutWidget_4);
        spinBoxPr_3->setObjectName("spinBoxPr_3");

        formLayout_4->setWidget(3, QFormLayout::FieldRole, spinBoxPr_3);

        spinBoxP_2 = new QDoubleSpinBox(formLayoutWidget_4);
        spinBoxP_2->setObjectName("spinBoxP_2");

        formLayout_4->setWidget(4, QFormLayout::FieldRole, spinBoxP_2);

        spinBoxPr_2->addTab(tab_8, QString());
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
        Ajouterparc->setGeometry(QRect(380, 150, 121, 29));
        formLayoutWidget_5 = new QWidget(tab_10);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(10, 10, 301, 191));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_5);
        label_17->setObjectName("label_17");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_17);

        lineEditNom_4 = new QLineEdit(formLayoutWidget_5);
        lineEditNom_4->setObjectName("lineEditNom_4");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEditNom_4);

        label_19 = new QLabel(formLayoutWidget_5);
        label_19->setObjectName("label_19");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_19);

        spinBoxEau_4 = new QSpinBox(formLayoutWidget_5);
        spinBoxEau_4->setObjectName("spinBoxEau_4");
        spinBoxEau_4->setMaximum(10000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, spinBoxEau_4);

        label_18 = new QLabel(formLayoutWidget_5);
        label_18->setObjectName("label_18");

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_18);

        spinBoxElectricite_4 = new QSpinBox(formLayoutWidget_5);
        spinBoxElectricite_4->setObjectName("spinBoxElectricite_4");
        spinBoxElectricite_4->setMaximum(5000);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, spinBoxElectricite_4);

        label_30 = new QLabel(formLayoutWidget_5);
        label_30->setObjectName("label_30");

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_30);

        spinBoxSurface = new QSpinBox(formLayoutWidget_5);
        spinBoxSurface->setObjectName("spinBoxSurface");
        spinBoxSurface->setMaximum(5000);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, spinBoxSurface);

        label_31 = new QLabel(formLayoutWidget_5);
        label_31->setObjectName("label_31");

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_31);

        spinBoxEbe = new QSpinBox(formLayoutWidget_5);
        spinBoxEbe->setObjectName("spinBoxEbe");
        spinBoxEbe->setMaximum(5000);

        formLayout_5->setWidget(4, QFormLayout::FieldRole, spinBoxEbe);

        tabWidget_4->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName("tab_11");
        ModifierParc = new QPushButton(tab_11);
        ModifierParc->setObjectName("ModifierParc");
        ModifierParc->setGeometry(QRect(390, 150, 121, 29));
        formLayoutWidget_6 = new QWidget(tab_11);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(10, 10, 301, 181));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(formLayoutWidget_6);
        label_23->setObjectName("label_23");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_23);

        lineEditNom_5 = new QLineEdit(formLayoutWidget_6);
        lineEditNom_5->setObjectName("lineEditNom_5");

        formLayout_6->setWidget(0, QFormLayout::FieldRole, lineEditNom_5);

        label_24 = new QLabel(formLayoutWidget_6);
        label_24->setObjectName("label_24");

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_24);

        spinBoxEau_5 = new QSpinBox(formLayoutWidget_6);
        spinBoxEau_5->setObjectName("spinBoxEau_5");
        spinBoxEau_5->setMaximum(10000);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, spinBoxEau_5);

        label_22 = new QLabel(formLayoutWidget_6);
        label_22->setObjectName("label_22");

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_22);

        spinBoxElectricite_7 = new QSpinBox(formLayoutWidget_6);
        spinBoxElectricite_7->setObjectName("spinBoxElectricite_7");
        spinBoxElectricite_7->setMaximum(5000);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, spinBoxElectricite_7);

        label_33 = new QLabel(formLayoutWidget_6);
        label_33->setObjectName("label_33");

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_33);

        spinBoxSurface_2 = new QSpinBox(formLayoutWidget_6);
        spinBoxSurface_2->setObjectName("spinBoxSurface_2");
        spinBoxSurface_2->setMaximum(5000);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, spinBoxSurface_2);

        label_32 = new QLabel(formLayoutWidget_6);
        label_32->setObjectName("label_32");

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_32);

        spinBoxEbe_2 = new QSpinBox(formLayoutWidget_6);
        spinBoxEbe_2->setObjectName("spinBoxEbe_2");
        spinBoxEbe_2->setMaximum(5000);

        formLayout_6->setWidget(4, QFormLayout::FieldRole, spinBoxEbe_2);

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
        terminerCycle = new QPushButton(centralwidget);
        terminerCycle->setObjectName("terminerCycle");
        terminerCycle->setGeometry(QRect(890, 160, 101, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1087, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        spinBoxPr_2->setCurrentIndex(0);
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
        label->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Habitant : ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "CapaciteHabitants :", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        modifiermaison->setText(QCoreApplication::translate("MainWindow", "Modifier maison", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Habitant : ", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "CapaciteHabitants :", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Maison", nullptr));
        Ajouterusine->setText(QCoreApplication::translate("MainWindow", "Ajouter usine", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "productionRessources :", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "pollution :", nullptr));
        spinBoxPr_2->setTabText(spinBoxPr_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        Modifierusine->setText(QCoreApplication::translate("MainWindow", "Modifier usine", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "productionRessources :", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "pollution :", nullptr));
        spinBoxPr_2->setTabText(spinBoxPr_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Usine", nullptr));
        Ajouterparc->setText(QCoreApplication::translate("MainWindow", "Ajouter Parc", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "surface :", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "effetBienEtre :", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        ModifierParc->setText(QCoreApplication::translate("MainWindow", "Modifier Parc", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Nom : ", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Eau :", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Electricit\303\251 :", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "surface :", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "effetBienEtre :", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_11), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Parc", nullptr));
        Buttonbatiment->setText(QCoreApplication::translate("MainWindow", "Afficher les donn\303\251es de ce batiment", nullptr));
        boutonAjouterBatiment->setText(QCoreApplication::translate("MainWindow", "Ajouter un b\303\242timent", nullptr));
        terminerCycle->setText(QCoreApplication::translate("MainWindow", "Terminer Cycle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
