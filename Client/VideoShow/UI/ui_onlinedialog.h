/********************************************************************************
** Form generated from reading UI file 'onlinedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONLINEDIALOG_H
#define UI_ONLINEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <qmymovielabel.h>

QT_BEGIN_NAMESPACE

class Ui_OnlineDialog
{
public:
    QPushButton *pb_icon;
    QLabel *lb_name;
    QPushButton *pb_login;
    QLineEdit *le_rtmpUrl;
    QPushButton *pb_rtmpPlay;
    QPushButton *pb_video;
    QPushButton *pb_fresh;
    QPushButton *pb_upload;
    QPushButton *pb_uploadHistory;
    QStackedWidget *sw_page;
    QWidget *page_1;
    QPushButton *pb_tv1;
    QPushButton *pb_tv2;
    QPushButton *pb_tv3;
    QPushButton *pb_tv4;
    QPushButton *pb_tv5;
    QPushButton *pb_tv10;
    QPushButton *pb_tv9;
    QPushButton *pb_tv6;
    QPushButton *pb_tv8;
    QPushButton *pb_tv7;
    QWidget *page_2;
    QMyMovieLabel *pb_play1;
    QMyMovieLabel *pb_play2;
    QMyMovieLabel *pb_play3;
    QMyMovieLabel *pb_play4;
    QMyMovieLabel *pb_play5;
    QMyMovieLabel *pb_play10;
    QMyMovieLabel *pb_play6;
    QMyMovieLabel *pb_play9;
    QMyMovieLabel *pb_play8;
    QMyMovieLabel *pb_play7;
    QMyMovieLabel *pb_play15;
    QMyMovieLabel *pb_play11;
    QMyMovieLabel *pb_play14;
    QMyMovieLabel *pb_play12;
    QMyMovieLabel *pb_play13;

    void setupUi(QDialog *OnlineDialog)
    {
        if (OnlineDialog->objectName().isEmpty())
            OnlineDialog->setObjectName(QStringLiteral("OnlineDialog"));
        OnlineDialog->resize(575, 692);
        OnlineDialog->setMinimumSize(QSize(0, 0));
        OnlineDialog->setMaximumSize(QSize(99999, 99999));
        OnlineDialog->setStyleSheet(QLatin1String("background-color: rgb(255, 155, 105);\n"
"font: 75 14pt \"Berlin Sans FB Demi\";\n"
"color: rgb(255, 255, 255);"));
        pb_icon = new QPushButton(OnlineDialog);
        pb_icon->setObjectName(QStringLiteral("pb_icon"));
        pb_icon->setGeometry(QRect(10, 0, 71, 61));
        QIcon icon;
        icon.addFile(QStringLiteral("tb/quickhand.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pb_icon->setIcon(icon);
        pb_icon->setIconSize(QSize(60, 60));
        pb_icon->setFlat(true);
        lb_name = new QLabel(OnlineDialog);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setGeometry(QRect(110, 10, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Berlin Sans FB Demi"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        lb_name->setFont(font);
        pb_login = new QPushButton(OnlineDialog);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(10, 200, 171, 61));
        le_rtmpUrl = new QLineEdit(OnlineDialog);
        le_rtmpUrl->setObjectName(QStringLiteral("le_rtmpUrl"));
        le_rtmpUrl->setGeometry(QRect(10, 60, 181, 121));
        le_rtmpUrl->setClearButtonEnabled(false);
        pb_rtmpPlay = new QPushButton(OnlineDialog);
        pb_rtmpPlay->setObjectName(QStringLiteral("pb_rtmpPlay"));
        pb_rtmpPlay->setGeometry(QRect(10, 600, 171, 61));
        pb_video = new QPushButton(OnlineDialog);
        pb_video->setObjectName(QStringLiteral("pb_video"));
        pb_video->setGeometry(QRect(10, 280, 171, 61));
        pb_fresh = new QPushButton(OnlineDialog);
        pb_fresh->setObjectName(QStringLiteral("pb_fresh"));
        pb_fresh->setGeometry(QRect(10, 360, 171, 61));
        pb_upload = new QPushButton(OnlineDialog);
        pb_upload->setObjectName(QStringLiteral("pb_upload"));
        pb_upload->setGeometry(QRect(10, 440, 171, 61));
        pb_uploadHistory = new QPushButton(OnlineDialog);
        pb_uploadHistory->setObjectName(QStringLiteral("pb_uploadHistory"));
        pb_uploadHistory->setGeometry(QRect(10, 520, 171, 61));
        sw_page = new QStackedWidget(OnlineDialog);
        sw_page->setObjectName(QStringLiteral("sw_page"));
        sw_page->setGeometry(QRect(210, 20, 351, 661));
        sw_page->setStyleSheet(QStringLiteral("background-color: rgb(255, 155, 105);"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        pb_tv1 = new QPushButton(page_1);
        pb_tv1->setObjectName(QStringLiteral("pb_tv1"));
        pb_tv1->setGeometry(QRect(20, 10, 150, 120));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/tb/hn.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv1->setIcon(icon1);
        pb_tv1->setIconSize(QSize(150, 100));
        pb_tv2 = new QPushButton(page_1);
        pb_tv2->setObjectName(QStringLiteral("pb_tv2"));
        pb_tv2->setGeometry(QRect(180, 10, 150, 120));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/tb/gx.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv2->setIcon(icon2);
        pb_tv2->setIconSize(QSize(150, 100));
        pb_tv3 = new QPushButton(page_1);
        pb_tv3->setObjectName(QStringLiteral("pb_tv3"));
        pb_tv3->setGeometry(QRect(20, 140, 150, 120));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/tb/dfws.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv3->setIcon(icon3);
        pb_tv3->setIconSize(QSize(150, 100));
        pb_tv4 = new QPushButton(page_1);
        pb_tv4->setObjectName(QStringLiteral("pb_tv4"));
        pb_tv4->setGeometry(QRect(180, 140, 150, 120));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/tb/zj.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv4->setIcon(icon4);
        pb_tv4->setIconSize(QSize(150, 100));
        pb_tv5 = new QPushButton(page_1);
        pb_tv5->setObjectName(QStringLiteral("pb_tv5"));
        pb_tv5->setGeometry(QRect(180, 270, 150, 120));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/tb/js.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv5->setIcon(icon5);
        pb_tv5->setIconSize(QSize(150, 100));
        pb_tv10 = new QPushButton(page_1);
        pb_tv10->setObjectName(QStringLiteral("pb_tv10"));
        pb_tv10->setGeometry(QRect(180, 530, 150, 120));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/tb/jx.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv10->setIcon(icon6);
        pb_tv10->setIconSize(QSize(150, 100));
        pb_tv9 = new QPushButton(page_1);
        pb_tv9->setObjectName(QStringLiteral("pb_tv9"));
        pb_tv9->setGeometry(QRect(20, 530, 150, 120));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/tb/ah.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv9->setIcon(icon7);
        pb_tv9->setIconSize(QSize(150, 100));
        pb_tv6 = new QPushButton(page_1);
        pb_tv6->setObjectName(QStringLiteral("pb_tv6"));
        pb_tv6->setGeometry(QRect(20, 270, 150, 120));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/tb/hlj.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv6->setIcon(icon8);
        pb_tv6->setIconSize(QSize(150, 100));
        pb_tv8 = new QPushButton(page_1);
        pb_tv8->setObjectName(QStringLiteral("pb_tv8"));
        pb_tv8->setGeometry(QRect(180, 400, 150, 120));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/tb/sd.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv8->setIcon(icon9);
        pb_tv8->setIconSize(QSize(150, 100));
        pb_tv7 = new QPushButton(page_1);
        pb_tv7->setObjectName(QStringLiteral("pb_tv7"));
        pb_tv7->setGeometry(QRect(20, 400, 150, 120));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/tb/ln.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pb_tv7->setIcon(icon10);
        pb_tv7->setIconSize(QSize(150, 100));
        sw_page->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pb_play1 = new QMyMovieLabel(page_2);
        pb_play1->setObjectName(QStringLiteral("pb_play1"));
        pb_play1->setGeometry(QRect(20, 0, 150, 120));
        pb_play2 = new QMyMovieLabel(page_2);
        pb_play2->setObjectName(QStringLiteral("pb_play2"));
        pb_play2->setGeometry(QRect(170, 0, 150, 120));
        pb_play3 = new QMyMovieLabel(page_2);
        pb_play3->setObjectName(QStringLiteral("pb_play3"));
        pb_play3->setGeometry(QRect(320, 0, 150, 120));
        pb_play4 = new QMyMovieLabel(page_2);
        pb_play4->setObjectName(QStringLiteral("pb_play4"));
        pb_play4->setGeometry(QRect(470, 0, 150, 120));
        pb_play5 = new QMyMovieLabel(page_2);
        pb_play5->setObjectName(QStringLiteral("pb_play5"));
        pb_play5->setGeometry(QRect(620, 0, 150, 120));
        pb_play10 = new QMyMovieLabel(page_2);
        pb_play10->setObjectName(QStringLiteral("pb_play10"));
        pb_play10->setGeometry(QRect(620, 130, 150, 120));
        pb_play6 = new QMyMovieLabel(page_2);
        pb_play6->setObjectName(QStringLiteral("pb_play6"));
        pb_play6->setGeometry(QRect(20, 130, 150, 120));
        pb_play9 = new QMyMovieLabel(page_2);
        pb_play9->setObjectName(QStringLiteral("pb_play9"));
        pb_play9->setGeometry(QRect(470, 130, 150, 120));
        pb_play8 = new QMyMovieLabel(page_2);
        pb_play8->setObjectName(QStringLiteral("pb_play8"));
        pb_play8->setGeometry(QRect(320, 130, 150, 120));
        pb_play7 = new QMyMovieLabel(page_2);
        pb_play7->setObjectName(QStringLiteral("pb_play7"));
        pb_play7->setGeometry(QRect(170, 130, 150, 120));
        pb_play15 = new QMyMovieLabel(page_2);
        pb_play15->setObjectName(QStringLiteral("pb_play15"));
        pb_play15->setGeometry(QRect(620, 260, 150, 120));
        pb_play11 = new QMyMovieLabel(page_2);
        pb_play11->setObjectName(QStringLiteral("pb_play11"));
        pb_play11->setGeometry(QRect(20, 260, 150, 120));
        pb_play14 = new QMyMovieLabel(page_2);
        pb_play14->setObjectName(QStringLiteral("pb_play14"));
        pb_play14->setGeometry(QRect(470, 260, 150, 120));
        pb_play12 = new QMyMovieLabel(page_2);
        pb_play12->setObjectName(QStringLiteral("pb_play12"));
        pb_play12->setGeometry(QRect(170, 260, 150, 120));
        pb_play13 = new QMyMovieLabel(page_2);
        pb_play13->setObjectName(QStringLiteral("pb_play13"));
        pb_play13->setGeometry(QRect(320, 260, 150, 120));
        sw_page->addWidget(page_2);

        retranslateUi(OnlineDialog);

        sw_page->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OnlineDialog);
    } // setupUi

    void retranslateUi(QDialog *OnlineDialog)
    {
        OnlineDialog->setWindowTitle(QApplication::translate("OnlineDialog", "Dialog", 0));
        pb_icon->setText(QString());
        lb_name->setText(QApplication::translate("OnlineDialog", "\346\234\252\347\231\273\345\275\225", 0));
        pb_login->setText(QApplication::translate("OnlineDialog", "\347\231\273\345\275\225/\346\263\250\345\206\214", 0));
        le_rtmpUrl->setText(QApplication::translate("OnlineDialog", "\350\276\223\345\205\245rtmp\345\234\260\345\235\200", 0));
        pb_rtmpPlay->setText(QApplication::translate("OnlineDialog", "\346\222\255\346\224\276rtmp\351\223\276\346\216\245", 0));
        pb_video->setText(QApplication::translate("OnlineDialog", "\346\216\250\350\215\220\345\275\261\350\247\206", 0));
        pb_fresh->setText(QApplication::translate("OnlineDialog", "\345\210\267\346\226\260\345\275\261\350\247\206", 0));
        pb_upload->setText(QApplication::translate("OnlineDialog", "\344\270\212\344\274\240\350\247\206\351\242\221", 0));
        pb_uploadHistory->setText(QApplication::translate("OnlineDialog", "\344\270\212\344\274\240\345\216\206\345\217\262", 0));
        pb_tv1->setText(QString());
        pb_tv2->setText(QString());
        pb_tv3->setText(QString());
        pb_tv4->setText(QString());
        pb_tv5->setText(QString());
        pb_tv10->setText(QString());
        pb_tv9->setText(QString());
        pb_tv6->setText(QString());
        pb_tv8->setText(QString());
        pb_tv7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OnlineDialog: public Ui_OnlineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONLINEDIALOG_H
