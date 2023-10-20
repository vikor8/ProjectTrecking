/********************************************************************************
** Form generated from reading UI file 'area.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREA_H
#define UI_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_area
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_Sector;
    QComboBox *comboBox_Sector;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Number;
    QComboBox *comboBox_Number;
    QTableView *tableView;
    QGroupBox *groupBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_add_text;
    QTextEdit *textEdit_Vendor_Code;
    QPushButton *pushButton_Insert;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *area)
    {
        if (area->objectName().isEmpty())
            area->setObjectName("area");
        area->resize(654, 584);
        centralwidget = new QWidget(area);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 603, 501));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Sector = new QLabel(widget);
        label_Sector->setObjectName("label_Sector");

        verticalLayout->addWidget(label_Sector);

        comboBox_Sector = new QComboBox(widget);
        comboBox_Sector->setObjectName("comboBox_Sector");

        verticalLayout->addWidget(comboBox_Sector);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_Number = new QLabel(widget);
        label_Number->setObjectName("label_Number");

        verticalLayout_2->addWidget(label_Number);

        comboBox_Number = new QComboBox(widget);
        comboBox_Number->setObjectName("comboBox_Number");

        verticalLayout_2->addWidget(comboBox_Number);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout_3->addWidget(tableView);


        verticalLayout_4->addLayout(verticalLayout_3);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(601, 51));
        groupBox->setMaximumSize(QSize(601, 51));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 10, 601, 33));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_add_text = new QLabel(widget1);
        label_add_text->setObjectName("label_add_text");
        label_add_text->setMinimumSize(QSize(161, 31));
        label_add_text->setMaximumSize(QSize(161, 31));

        horizontalLayout_3->addWidget(label_add_text);

        textEdit_Vendor_Code = new QTextEdit(widget1);
        textEdit_Vendor_Code->setObjectName("textEdit_Vendor_Code");
        textEdit_Vendor_Code->setMinimumSize(QSize(121, 31));
        textEdit_Vendor_Code->setMaximumSize(QSize(121, 31));
        QFont font;
        font.setPointSize(14);
        textEdit_Vendor_Code->setFont(font);
        textEdit_Vendor_Code->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

        horizontalLayout_3->addWidget(textEdit_Vendor_Code);

        pushButton_Insert = new QPushButton(widget1);
        pushButton_Insert->setObjectName("pushButton_Insert");
        pushButton_Insert->setMinimumSize(QSize(101, 31));
        pushButton_Insert->setMaximumSize(QSize(101, 31));
        pushButton_Insert->setFont(font);

        horizontalLayout_3->addWidget(pushButton_Insert);

        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox);

        area->setCentralWidget(centralwidget);
        menubar = new QMenuBar(area);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 654, 22));
        area->setMenuBar(menubar);
        statusbar = new QStatusBar(area);
        statusbar->setObjectName("statusbar");
        area->setStatusBar(statusbar);

        retranslateUi(area);

        QMetaObject::connectSlotsByName(area);
    } // setupUi

    void retranslateUi(QMainWindow *area)
    {
        area->setWindowTitle(QCoreApplication::translate("area", "MainWindow", nullptr));
        label_Sector->setText(QCoreApplication::translate("area", " \320\243\321\207\320\260\321\201\321\202\320\276\320\272", nullptr));
        label_Number->setText(QCoreApplication::translate("area", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        groupBox->setTitle(QString());
        label_add_text->setText(QCoreApplication::translate("area", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\267\320\264\320\265\320\273\320\270\320\265</span></p></body></html>", nullptr));
#if QT_CONFIG(accessibility)
        textEdit_Vendor_Code->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        pushButton_Insert->setText(QCoreApplication::translate("area", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class area: public Ui_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREA_H
