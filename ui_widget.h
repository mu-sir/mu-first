/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Tue Sep 10 19:52:19 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *verticalSlider;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(624, 422);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 2, 1, 4);

        verticalSlider = new QSlider(Widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setValue(99);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider, 5, 0, 2, 1);

        verticalSpacer_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 12, 13, 1, 1);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 11, 12, 1, 2);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/1187919.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 10, 9, 1, 4);

        horizontalSpacer_7 = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 10, 13, 1, 3);

        horizontalSpacer = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 2);

        listWidget = new QListWidget(Widget);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/1222646.gif"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setBackground(brush);
        __qlistwidgetitem->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon1);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon1);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setBackground(brush2);
        __qlistwidgetitem5->setForeground(brush1);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(121, 111));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        listWidget->setFont(font1);
        listWidget->setAutoFillBackground(false);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(false);
        listWidget->setWordWrap(false);
        listWidget->setSelectionRectVisible(false);
        listWidget->setSortingEnabled(false);

        gridLayout->addWidget(listWidget, 0, 11, 4, 4);

        verticalSpacer_3 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 4, 2, 1);

        horizontalSpacer_12 = new QSpacerItem(153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 8, 10, 2, 6);

        horizontalSpacer_6 = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 10, 8, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 9, 7, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);

        gridLayout->addWidget(label, 1, 3, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(201, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 6, 1, 5);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(29, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 11, 14, 1, 2);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 6, 1, 3, 9);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("1222646.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(30, 30));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setDefault(false);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 10, 7, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(11, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 15, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 10, 5, 1, 2);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 4, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 9, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 11, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 12, 1, 1, 2);

        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);
        lcdNumber->setFont(font1);
        lcdNumber->setNumDigits(4);
        lcdNumber->setDigitCount(4);
        lcdNumber->setProperty("value", QVariant(99));

        gridLayout->addWidget(lcdNumber, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 11, 1, 1, 3);

        horizontalSpacer_9 = new QSpacerItem(302, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 11, 4, 1, 8);

        horizontalSpacer_4 = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 10, 0, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(64, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 8, 0, 2, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 10, 3, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\346\227\240\351\227\256.mp3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Widget", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Widget", "\345\277\253\351\200\200", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Widget", " \346\227\240\351\227\256.mp3", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Widget", "\351\202\223\347\264\253\346\243\213-\345\255\230\345\234\250.mp3", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Widget", "\347\237\245\345\220\246\347\237\245\345\220\246.mp3", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Widget", " \345\220\216\346\235\245\347\232\204\346\210\221\344\273\254.mp3", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Widget", "xx.mp3", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("Widget", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "VOL:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QApplication::translate("Widget", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "\345\277\253\350\277\233", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
