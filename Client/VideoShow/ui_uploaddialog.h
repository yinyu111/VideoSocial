/********************************************************************************
** Form generated from reading UI file 'uploaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOADDIALOG_H
#define UI_UPLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <videoitem.h>

QT_BEGIN_NAMESPACE

class Ui_UploadDialog
{
public:
    QStackedWidget *sw_page;
    QWidget *page_1;
    QLineEdit *le_path;
    QPushButton *pb_view;
    QLabel *lb_process;
    QProgressBar *pgb_upload;
    QPushButton *pb_beginUpload;
    QCheckBox *cb_video;
    QCheckBox *cb_food;
    QCheckBox *cb_dance;
    QCheckBox *cb_outside;
    QCheckBox *cb_ennegy;
    QCheckBox *cb_music;
    QCheckBox *cb_funny;
    QCheckBox *cb_edu;
    QLabel *lb_gif;
    QWidget *page_2;
    VideoItem *wdg_videoItem;
    QLabel *lb_res;
    QLabel *lb_recPath;
    QLabel *lb_broadcast;
    QLineEdit *le_savePath;
    QLineEdit *le_broadcast;
    QGroupBox *videoGroup;
    QCheckBox *cb_cam;
    QCheckBox *cb_desk;
    QLabel *lb_video;
    QLabel *lb_audio;
    QComboBox *cbx_cam;
    QComboBox *cbx_audio;
    QPushButton *pb_voice;
    QSlider *slider_volumn;
    QPushButton *pb_recordBegin;
    QPushButton *pb_recordEnd;
    QPushButton *pb_see;
    QPushButton *pb_savePath;
    QPushButton *pb_rtmpUrl;
    QLabel *lb_recTime;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_page1;
    QPushButton *pb_page2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *UploadDialog)
    {
        if (UploadDialog->objectName().isEmpty())
            UploadDialog->setObjectName(QStringLiteral("UploadDialog"));
        UploadDialog->resize(808, 595);
        UploadDialog->setMinimumSize(QSize(0, 0));
        UploadDialog->setMaximumSize(QSize(9999, 9999));
        QFont font;
        font.setPointSize(12);
        UploadDialog->setFont(font);
        UploadDialog->setStyleSheet(QLatin1String("background-color: rgb(255, 155, 105);\n"
"color: rgb(255, 255, 255);"));
        sw_page = new QStackedWidget(UploadDialog);
        sw_page->setObjectName(QStringLiteral("sw_page"));
        sw_page->setGeometry(QRect(10, 80, 771, 501));
        sw_page->setStyleSheet(QStringLiteral("background-color: rgb(255, 155, 105);"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        le_path = new QLineEdit(page_1);
        le_path->setObjectName(QStringLiteral("le_path"));
        le_path->setGeometry(QRect(10, 20, 641, 41));
        le_path->setReadOnly(true);
        pb_view = new QPushButton(page_1);
        pb_view->setObjectName(QStringLiteral("pb_view"));
        pb_view->setGeometry(QRect(670, 20, 91, 41));
        lb_process = new QLabel(page_1);
        lb_process->setObjectName(QStringLiteral("lb_process"));
        lb_process->setGeometry(QRect(0, 420, 71, 31));
        pgb_upload = new QProgressBar(page_1);
        pgb_upload->setObjectName(QStringLiteral("pgb_upload"));
        pgb_upload->setGeometry(QRect(70, 420, 561, 31));
        pgb_upload->setMaximum(100);
        pgb_upload->setValue(0);
        pgb_upload->setAlignment(Qt::AlignCenter);
        pb_beginUpload = new QPushButton(page_1);
        pb_beginUpload->setObjectName(QStringLiteral("pb_beginUpload"));
        pb_beginUpload->setGeometry(QRect(650, 420, 111, 31));
        cb_video = new QCheckBox(page_1);
        cb_video->setObjectName(QStringLiteral("cb_video"));
        cb_video->setGeometry(QRect(660, 300, 95, 22));
        cb_food = new QCheckBox(page_1);
        cb_food->setObjectName(QStringLiteral("cb_food"));
        cb_food->setGeometry(QRect(660, 100, 95, 22));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("\347\276\216\351\243\237");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        cb_food->setIcon(icon);
        cb_dance = new QCheckBox(page_1);
        cb_dance->setObjectName(QStringLiteral("cb_dance"));
        cb_dance->setGeometry(QRect(660, 220, 95, 22));
        cb_outside = new QCheckBox(page_1);
        cb_outside->setObjectName(QStringLiteral("cb_outside"));
        cb_outside->setGeometry(QRect(660, 340, 95, 22));
        cb_ennegy = new QCheckBox(page_1);
        cb_ennegy->setObjectName(QStringLiteral("cb_ennegy"));
        cb_ennegy->setGeometry(QRect(660, 180, 95, 22));
        cb_music = new QCheckBox(page_1);
        cb_music->setObjectName(QStringLiteral("cb_music"));
        cb_music->setGeometry(QRect(660, 260, 95, 22));
        cb_funny = new QCheckBox(page_1);
        cb_funny->setObjectName(QStringLiteral("cb_funny"));
        cb_funny->setGeometry(QRect(660, 140, 95, 22));
        cb_edu = new QCheckBox(page_1);
        cb_edu->setObjectName(QStringLiteral("cb_edu"));
        cb_edu->setGeometry(QRect(660, 380, 95, 22));
        lb_gif = new QLabel(page_1);
        lb_gif->setObjectName(QStringLiteral("lb_gif"));
        lb_gif->setGeometry(QRect(10, 90, 631, 311));
        lb_gif->setStyleSheet(QStringLiteral("background-color: rgb(255, 155, 105);"));
        lb_gif->setAlignment(Qt::AlignCenter);
        sw_page->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        wdg_videoItem = new VideoItem(page_2);
        wdg_videoItem->setObjectName(QStringLiteral("wdg_videoItem"));
        wdg_videoItem->setGeometry(QRect(0, 0, 621, 421));
        wdg_videoItem->setStyleSheet(QStringLiteral(""));
        lb_res = new QLabel(page_2);
        lb_res->setObjectName(QStringLiteral("lb_res"));
        lb_res->setGeometry(QRect(0, 420, 621, 30));
        lb_recPath = new QLabel(page_2);
        lb_recPath->setObjectName(QStringLiteral("lb_recPath"));
        lb_recPath->setGeometry(QRect(0, 460, 81, 30));
        lb_broadcast = new QLabel(page_2);
        lb_broadcast->setObjectName(QStringLiteral("lb_broadcast"));
        lb_broadcast->setGeometry(QRect(0, 510, 54, 30));
        le_savePath = new QLineEdit(page_2);
        le_savePath->setObjectName(QStringLiteral("le_savePath"));
        le_savePath->setGeometry(QRect(80, 460, 541, 30));
        le_savePath->setReadOnly(true);
        le_broadcast = new QLineEdit(page_2);
        le_broadcast->setObjectName(QStringLiteral("le_broadcast"));
        le_broadcast->setGeometry(QRect(80, 510, 541, 30));
        le_broadcast->setReadOnly(true);
        videoGroup = new QGroupBox(page_2);
        videoGroup->setObjectName(QStringLiteral("videoGroup"));
        videoGroup->setGeometry(QRect(630, 0, 161, 211));
        cb_cam = new QCheckBox(videoGroup);
        cb_cam->setObjectName(QStringLiteral("cb_cam"));
        cb_cam->setGeometry(QRect(20, 20, 71, 16));
        cb_desk = new QCheckBox(videoGroup);
        cb_desk->setObjectName(QStringLiteral("cb_desk"));
        cb_desk->setGeometry(QRect(20, 50, 71, 16));
        lb_video = new QLabel(videoGroup);
        lb_video->setObjectName(QStringLiteral("lb_video"));
        lb_video->setGeometry(QRect(10, 80, 54, 30));
        lb_audio = new QLabel(videoGroup);
        lb_audio->setObjectName(QStringLiteral("lb_audio"));
        lb_audio->setGeometry(QRect(10, 140, 71, 30));
        cbx_cam = new QComboBox(videoGroup);
        cbx_cam->setObjectName(QStringLiteral("cbx_cam"));
        cbx_cam->setGeometry(QRect(10, 110, 131, 30));
        cbx_audio = new QComboBox(videoGroup);
        cbx_audio->setObjectName(QStringLiteral("cbx_audio"));
        cbx_audio->setGeometry(QRect(10, 170, 131, 30));
        pb_voice = new QPushButton(page_2);
        pb_voice->setObjectName(QStringLiteral("pb_voice"));
        pb_voice->setGeometry(QRect(640, 220, 30, 30));
        slider_volumn = new QSlider(page_2);
        slider_volumn->setObjectName(QStringLiteral("slider_volumn"));
        slider_volumn->setGeometry(QRect(680, 230, 91, 10));
        slider_volumn->setOrientation(Qt::Horizontal);
        pb_recordBegin = new QPushButton(page_2);
        pb_recordBegin->setObjectName(QStringLiteral("pb_recordBegin"));
        pb_recordBegin->setGeometry(QRect(640, 310, 101, 30));
        pb_recordEnd = new QPushButton(page_2);
        pb_recordEnd->setObjectName(QStringLiteral("pb_recordEnd"));
        pb_recordEnd->setGeometry(QRect(640, 350, 101, 30));
        pb_see = new QPushButton(page_2);
        pb_see->setObjectName(QStringLiteral("pb_see"));
        pb_see->setGeometry(QRect(640, 390, 101, 30));
        pb_savePath = new QPushButton(page_2);
        pb_savePath->setObjectName(QStringLiteral("pb_savePath"));
        pb_savePath->setGeometry(QRect(640, 460, 101, 30));
        pb_rtmpUrl = new QPushButton(page_2);
        pb_rtmpUrl->setObjectName(QStringLiteral("pb_rtmpUrl"));
        pb_rtmpUrl->setGeometry(QRect(640, 510, 101, 30));
        lb_recTime = new QLabel(page_2);
        lb_recTime->setObjectName(QStringLiteral("lb_recTime"));
        lb_recTime->setGeometry(QRect(650, 260, 101, 30));
        lb_recTime->setAlignment(Qt::AlignCenter);
        sw_page->addWidget(page_2);
        layoutWidget = new QWidget(UploadDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 10, 621, 62));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_page1 = new QPushButton(layoutWidget);
        pb_page1->setObjectName(QStringLiteral("pb_page1"));
        pb_page1->setMinimumSize(QSize(150, 60));
        pb_page1->setMaximumSize(QSize(999, 999));

        horizontalLayout->addWidget(pb_page1);

        pb_page2 = new QPushButton(layoutWidget);
        pb_page2->setObjectName(QStringLiteral("pb_page2"));
        pb_page2->setMinimumSize(QSize(150, 60));
        pb_page2->setMaximumSize(QSize(999, 999));

        horizontalLayout->addWidget(pb_page2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(UploadDialog);

        sw_page->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UploadDialog);
    } // setupUi

    void retranslateUi(QDialog *UploadDialog)
    {
        UploadDialog->setWindowTitle(QApplication::translate("UploadDialog", "Dialog", 0));
        pb_view->setText(QApplication::translate("UploadDialog", "\346\265\217\350\247\210", 0));
        lb_process->setText(QApplication::translate("UploadDialog", "\344\270\212\344\274\240\350\277\233\345\272\246", 0));
        pb_beginUpload->setText(QApplication::translate("UploadDialog", "\345\274\200\345\247\213\344\270\212\344\274\240", 0));
        cb_video->setText(QApplication::translate("UploadDialog", "\346\227\205\346\270\270", 0));
        cb_food->setText(QApplication::translate("UploadDialog", "\347\276\216\351\243\237", 0));
        cb_dance->setText(QApplication::translate("UploadDialog", "\346\220\236\347\254\221", 0));
        cb_outside->setText(QApplication::translate("UploadDialog", "\351\237\263\344\271\220", 0));
        cb_ennegy->setText(QApplication::translate("UploadDialog", "\347\247\221\346\231\256", 0));
        cb_music->setText(QApplication::translate("UploadDialog", "\345\256\240\347\211\251", 0));
        cb_funny->setText(QApplication::translate("UploadDialog", "\346\226\260\351\227\273", 0));
        cb_edu->setText(QApplication::translate("UploadDialog", "\347\224\265\345\275\261", 0));
        lb_gif->setText(QString());
        lb_res->setText(QApplication::translate("UploadDialog", "\347\273\223\346\236\234", 0));
        lb_recPath->setText(QApplication::translate("UploadDialog", "\345\275\225\345\210\266\350\267\257\345\276\204", 0));
        lb_broadcast->setText(QApplication::translate("UploadDialog", "\347\233\264\346\222\255", 0));
        videoGroup->setTitle(QString());
        cb_cam->setText(QApplication::translate("UploadDialog", "\346\221\204\345\203\217\345\244\264", 0));
        cb_desk->setText(QApplication::translate("UploadDialog", "\346\241\214\351\235\242", 0));
        lb_video->setText(QApplication::translate("UploadDialog", "\346\221\204\345\203\217\345\244\264", 0));
        lb_audio->setText(QApplication::translate("UploadDialog", "\351\237\263\351\242\221\350\276\223\345\205\245", 0));
        pb_voice->setText(QString());
        pb_recordBegin->setText(QApplication::translate("UploadDialog", "\345\274\200\345\247\213", 0));
        pb_recordEnd->setText(QApplication::translate("UploadDialog", "\345\201\234\346\255\242", 0));
        pb_see->setText(QApplication::translate("UploadDialog", "\345\233\236\347\234\213", 0));
        pb_savePath->setText(QApplication::translate("UploadDialog", "\350\256\276\347\275\256\350\267\257\345\276\204", 0));
        pb_rtmpUrl->setText(QApplication::translate("UploadDialog", "\347\233\264\346\222\255\345\234\260\345\235\200", 0));
        lb_recTime->setText(QApplication::translate("UploadDialog", "00:00", 0));
        pb_page1->setText(QApplication::translate("UploadDialog", "\344\270\212\344\274\240\346\234\254\345\234\260\350\247\206\351\242\221", 0));
        pb_page2->setText(QApplication::translate("UploadDialog", "\345\275\225\345\210\266\350\247\206\351\242\221", 0));
    } // retranslateUi

};

namespace Ui {
    class UploadDialog: public Ui_UploadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADDIALOG_H
