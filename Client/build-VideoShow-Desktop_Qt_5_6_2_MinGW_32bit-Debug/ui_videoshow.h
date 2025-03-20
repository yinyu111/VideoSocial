/********************************************************************************
** Form generated from reading UI file 'videoshow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOSHOW_H
#define UI_VIDEOSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <videoitem.h>
#include <videoslider.h>

QT_BEGIN_NAMESPACE

class Ui_VideoShow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wdg_ctrl_content;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_open;
    QPushButton *pb_play;
    QPushButton *pb_pause;
    QPushButton *pb_stop;
    QLabel *lb_videoName;
    QPushButton *pb_online;
    VideoItem *wdg_video;
    QWidget *wdg_black;
    QWidget *wdg_ctrl;
    QWidget *wdg_process;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_videoCurrentTime;
    VideoSlider *slider_videoProcess;
    QLabel *lb_videoTotalTime;

    void setupUi(QWidget *VideoShow)
    {
        if (VideoShow->objectName().isEmpty())
            VideoShow->setObjectName(QStringLiteral("VideoShow"));
        VideoShow->resize(800, 540);
        VideoShow->setMinimumSize(QSize(800, 540));
        VideoShow->setStyleSheet(QStringLiteral("background-color: rgb(255, 155, 105);"));
        verticalLayout = new QVBoxLayout(VideoShow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        wdg_ctrl_content = new QWidget(VideoShow);
        wdg_ctrl_content->setObjectName(QStringLiteral("wdg_ctrl_content"));
        wdg_ctrl_content->setMinimumSize(QSize(801, 60));
        wdg_ctrl_content->setMaximumSize(QSize(16777215, 60));
        wdg_ctrl_content->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(wdg_ctrl_content);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pb_open = new QPushButton(wdg_ctrl_content);
        pb_open->setObjectName(QStringLiteral("pb_open"));
        pb_open->setMinimumSize(QSize(120, 40));
        pb_open->setMaximumSize(QSize(40, 40));
        pb_open->setIconSize(QSize(40, 40));
        pb_open->setAutoDefault(true);
        pb_open->setFlat(true);

        horizontalLayout->addWidget(pb_open);

        pb_play = new QPushButton(wdg_ctrl_content);
        pb_play->setObjectName(QStringLiteral("pb_play"));
        pb_play->setMinimumSize(QSize(40, 40));
        pb_play->setMaximumSize(QSize(40, 40));
        pb_play->setIconSize(QSize(40, 40));
        pb_play->setAutoDefault(true);
        pb_play->setFlat(true);

        horizontalLayout->addWidget(pb_play);

        pb_pause = new QPushButton(wdg_ctrl_content);
        pb_pause->setObjectName(QStringLiteral("pb_pause"));
        pb_pause->setMinimumSize(QSize(40, 40));
        pb_pause->setMaximumSize(QSize(40, 40));
        pb_pause->setIconSize(QSize(40, 40));
        pb_pause->setAutoDefault(true);
        pb_pause->setFlat(true);

        horizontalLayout->addWidget(pb_pause);

        pb_stop = new QPushButton(wdg_ctrl_content);
        pb_stop->setObjectName(QStringLiteral("pb_stop"));
        pb_stop->setMinimumSize(QSize(40, 40));
        pb_stop->setMaximumSize(QSize(40, 40));
        pb_stop->setIconSize(QSize(40, 40));
        pb_stop->setAutoDefault(true);
        pb_stop->setFlat(true);

        horizontalLayout->addWidget(pb_stop);

        lb_videoName = new QLabel(wdg_ctrl_content);
        lb_videoName->setObjectName(QStringLiteral("lb_videoName"));
        lb_videoName->setMinimumSize(QSize(0, 40));
        lb_videoName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lb_videoName);

        pb_online = new QPushButton(wdg_ctrl_content);
        pb_online->setObjectName(QStringLiteral("pb_online"));
        pb_online->setMinimumSize(QSize(80, 40));
        pb_online->setMaximumSize(QSize(80, 40));
        pb_online->setIconSize(QSize(40, 40));
        pb_online->setAutoDefault(true);
        pb_online->setFlat(true);

        horizontalLayout->addWidget(pb_online);


        verticalLayout->addWidget(wdg_ctrl_content);

        wdg_video = new VideoItem(VideoShow);
        wdg_video->setObjectName(QStringLiteral("wdg_video"));
        wdg_video->setMinimumSize(QSize(800, 0));
        lb_videoName->raise();
        wdg_ctrl_content->raise();

        verticalLayout->addWidget(wdg_video);

        wdg_black = new QWidget(VideoShow);
        wdg_black->setObjectName(QStringLiteral("wdg_black"));

        verticalLayout->addWidget(wdg_black);

        wdg_ctrl = new QWidget(VideoShow);
        wdg_ctrl->setObjectName(QStringLiteral("wdg_ctrl"));
        wdg_ctrl->setMinimumSize(QSize(401, 45));
        wdg_ctrl->setMaximumSize(QSize(16777215, 45));
        wdg_ctrl->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        wdg_process = new QWidget(wdg_ctrl);
        wdg_process->setObjectName(QStringLiteral("wdg_process"));
        wdg_process->setGeometry(QRect(0, 0, 801, 30));
        wdg_process->setMinimumSize(QSize(801, 30));
        wdg_process->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_2 = new QHBoxLayout(wdg_process);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, -1, 0);
        lb_videoCurrentTime = new QLabel(wdg_process);
        lb_videoCurrentTime->setObjectName(QStringLiteral("lb_videoCurrentTime"));

        horizontalLayout_2->addWidget(lb_videoCurrentTime);

        slider_videoProcess = new VideoSlider(wdg_process);
        slider_videoProcess->setObjectName(QStringLiteral("slider_videoProcess"));
        slider_videoProcess->setMinimumSize(QSize(100, 0));
        slider_videoProcess->setMaximumSize(QSize(11111111, 16777215));
        slider_videoProcess->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider_videoProcess);

        lb_videoTotalTime = new QLabel(wdg_process);
        lb_videoTotalTime->setObjectName(QStringLiteral("lb_videoTotalTime"));

        horizontalLayout_2->addWidget(lb_videoTotalTime);


        verticalLayout->addWidget(wdg_ctrl);


        retranslateUi(VideoShow);

        QMetaObject::connectSlotsByName(VideoShow);
    } // setupUi

    void retranslateUi(QWidget *VideoShow)
    {
        VideoShow->setWindowTitle(QApplication::translate("VideoShow", "VideoShow", 0));
        pb_open->setText(QApplication::translate("VideoShow", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        pb_play->setText(QApplication::translate("VideoShow", "\346\222\255\346\224\276", 0));
        pb_pause->setText(QApplication::translate("VideoShow", "\346\232\202\345\201\234", 0));
        pb_stop->setText(QApplication::translate("VideoShow", "\347\273\223\346\235\237", 0));
        lb_videoName->setText(QApplication::translate("VideoShow", "\345\275\261\347\211\207\345\220\215", 0));
        pb_online->setText(QApplication::translate("VideoShow", "\347\225\214\351\235\242\346\230\276\347\244\272", 0));
        lb_videoCurrentTime->setText(QApplication::translate("VideoShow", "00:00:00", 0));
        lb_videoTotalTime->setText(QApplication::translate("VideoShow", "00:00:00", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoShow: public Ui_VideoShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOSHOW_H
