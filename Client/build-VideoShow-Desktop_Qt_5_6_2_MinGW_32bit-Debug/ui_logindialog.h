/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *lb_name;
    QLineEdit *le_name;
    QLabel *lb_password;
    QLineEdit *le_password;
    QPushButton *pb_login;
    QPushButton *pb_icon;
    QWidget *tab_2;
    QLineEdit *le_register_name;
    QLabel *lb_register_name;
    QLineEdit *le_register_password;
    QPushButton *pb_register;
    QLabel *lb_register_password;
    QLineEdit *le_register_confirm;
    QLabel *lb_register_confirm;
    QPushButton *pb_register_clear;
    QGroupBox *gb_like;
    QCheckBox *cb_all;
    QCheckBox *cb_allnot;
    QCheckBox *cb_food;
    QCheckBox *cb_funny;
    QCheckBox *cb_ennegy;
    QCheckBox *cb_dance;
    QCheckBox *cb_music;
    QCheckBox *cb_video;
    QCheckBox *cb_outside;
    QCheckBox *cb_edu;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(373, 556);
        LoginDialog->setMinimumSize(QSize(349, 523));
        LoginDialog->setMaximumSize(QSize(99999, 99999));
        LoginDialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 155, 105);"));
        tabWidget = new QTabWidget(LoginDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 349, 523));
        tabWidget->setMinimumSize(QSize(349, 523));
        tabWidget->setMaximumSize(QSize(349, 523));
        QFont font;
        font.setPointSize(16);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral("color: rgb(158, 158, 158);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lb_name = new QLabel(tab);
        lb_name->setObjectName(QStringLiteral("lb_name"));
        lb_name->setGeometry(QRect(40, 160, 81, 30));
        QFont font1;
        font1.setPointSize(14);
        lb_name->setFont(font1);
        le_name = new QLineEdit(tab);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(120, 160, 171, 41));
        lb_password = new QLabel(tab);
        lb_password->setObjectName(QStringLiteral("lb_password"));
        lb_password->setGeometry(QRect(40, 230, 81, 30));
        lb_password->setFont(font1);
        le_password = new QLineEdit(tab);
        le_password->setObjectName(QStringLiteral("le_password"));
        le_password->setGeometry(QRect(120, 220, 171, 41));
        le_password->setEchoMode(QLineEdit::Password);
        pb_login = new QPushButton(tab);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(100, 340, 111, 41));
        pb_login->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pb_icon = new QPushButton(tab);
        pb_icon->setObjectName(QStringLiteral("pb_icon"));
        pb_icon->setGeometry(QRect(40, 70, 60, 60));
        QIcon icon;
        icon.addFile(QStringLiteral("tb/quickhand.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pb_icon->setIcon(icon);
        pb_icon->setIconSize(QSize(60, 60));
        pb_icon->setFlat(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        le_register_name = new QLineEdit(tab_2);
        le_register_name->setObjectName(QStringLiteral("le_register_name"));
        le_register_name->setGeometry(QRect(130, 20, 161, 30));
        lb_register_name = new QLabel(tab_2);
        lb_register_name->setObjectName(QStringLiteral("lb_register_name"));
        lb_register_name->setGeometry(QRect(20, 20, 81, 30));
        lb_register_name->setFont(font1);
        le_register_password = new QLineEdit(tab_2);
        le_register_password->setObjectName(QStringLiteral("le_register_password"));
        le_register_password->setGeometry(QRect(130, 70, 161, 30));
        le_register_password->setEchoMode(QLineEdit::Password);
        pb_register = new QPushButton(tab_2);
        pb_register->setObjectName(QStringLiteral("pb_register"));
        pb_register->setGeometry(QRect(40, 420, 98, 30));
        lb_register_password = new QLabel(tab_2);
        lb_register_password->setObjectName(QStringLiteral("lb_register_password"));
        lb_register_password->setGeometry(QRect(20, 70, 81, 30));
        lb_register_password->setFont(font1);
        le_register_confirm = new QLineEdit(tab_2);
        le_register_confirm->setObjectName(QStringLiteral("le_register_confirm"));
        le_register_confirm->setGeometry(QRect(130, 120, 161, 30));
        le_register_confirm->setEchoMode(QLineEdit::Password);
        lb_register_confirm = new QLabel(tab_2);
        lb_register_confirm->setObjectName(QStringLiteral("lb_register_confirm"));
        lb_register_confirm->setGeometry(QRect(20, 120, 101, 30));
        lb_register_confirm->setFont(font1);
        pb_register_clear = new QPushButton(tab_2);
        pb_register_clear->setObjectName(QStringLiteral("pb_register_clear"));
        pb_register_clear->setGeometry(QRect(180, 420, 98, 30));
        gb_like = new QGroupBox(tab_2);
        gb_like->setObjectName(QStringLiteral("gb_like"));
        gb_like->setGeometry(QRect(20, 200, 261, 181));
        QFont font2;
        font2.setPointSize(12);
        gb_like->setFont(font2);
        cb_all = new QCheckBox(gb_like);
        cb_all->setObjectName(QStringLiteral("cb_all"));
        cb_all->setGeometry(QRect(30, 10, 101, 19));
        cb_allnot = new QCheckBox(gb_like);
        cb_allnot->setObjectName(QStringLiteral("cb_allnot"));
        cb_allnot->setGeometry(QRect(150, 10, 101, 19));
        cb_food = new QCheckBox(gb_like);
        cb_food->setObjectName(QStringLiteral("cb_food"));
        cb_food->setGeometry(QRect(30, 40, 101, 19));
        cb_funny = new QCheckBox(gb_like);
        cb_funny->setObjectName(QStringLiteral("cb_funny"));
        cb_funny->setGeometry(QRect(150, 40, 101, 19));
        cb_ennegy = new QCheckBox(gb_like);
        cb_ennegy->setObjectName(QStringLiteral("cb_ennegy"));
        cb_ennegy->setGeometry(QRect(30, 100, 101, 19));
        cb_dance = new QCheckBox(gb_like);
        cb_dance->setObjectName(QStringLiteral("cb_dance"));
        cb_dance->setGeometry(QRect(150, 100, 101, 19));
        cb_music = new QCheckBox(gb_like);
        cb_music->setObjectName(QStringLiteral("cb_music"));
        cb_music->setGeometry(QRect(30, 70, 101, 19));
        cb_video = new QCheckBox(gb_like);
        cb_video->setObjectName(QStringLiteral("cb_video"));
        cb_video->setGeometry(QRect(150, 70, 101, 19));
        cb_outside = new QCheckBox(gb_like);
        cb_outside->setObjectName(QStringLiteral("cb_outside"));
        cb_outside->setGeometry(QRect(30, 130, 101, 19));
        cb_edu = new QCheckBox(gb_like);
        cb_edu->setObjectName(QStringLiteral("cb_edu"));
        cb_edu->setGeometry(QRect(150, 130, 101, 19));
        tabWidget->addTab(tab_2, QString());
        QWidget::setTabOrder(le_register_name, le_register_password);
        QWidget::setTabOrder(le_register_password, le_register_confirm);
        QWidget::setTabOrder(le_register_confirm, pb_register);
        QWidget::setTabOrder(pb_register, tabWidget);
        QWidget::setTabOrder(tabWidget, le_name);
        QWidget::setTabOrder(le_name, le_password);
        QWidget::setTabOrder(le_password, pb_login);
        QWidget::setTabOrder(pb_login, pb_register_clear);

        retranslateUi(LoginDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Form", 0));
        lb_name->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">\347\224\250\346\210\267\345\220\215 </span></p></body></html>", 0));
        lb_password->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\257\206  \347\240\201</span></p></body></html>", 0));
        pb_login->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        pb_icon->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LoginDialog", " \347\231\273\345\275\225 ", 0));
        lb_register_name->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">\347\224\250\346\210\267\345\220\215 </span></p></body></html>", 0));
        pb_register->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214", 0));
        lb_register_password->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\257\206\347\240\201</span></p></body></html>", 0));
        lb_register_confirm->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" color:#ffffff;\">\347\241\256\350\256\244\345\257\206\347\240\201</span></p></body></html>", 0));
        pb_register_clear->setText(QApplication::translate("LoginDialog", "\346\270\205\347\251\272", 0));
        gb_like->setTitle(QString());
        cb_all->setText(QApplication::translate("LoginDialog", "\345\205\250\351\200\211", 0));
        cb_allnot->setText(QApplication::translate("LoginDialog", "\345\205\250\344\270\215\351\200\211", 0));
        cb_food->setText(QApplication::translate("LoginDialog", "\347\276\216\351\243\237", 0));
        cb_funny->setText(QApplication::translate("LoginDialog", "\346\226\260\351\227\273", 0));
        cb_ennegy->setText(QApplication::translate("LoginDialog", "\347\247\221\345\255\246", 0));
        cb_dance->setText(QApplication::translate("LoginDialog", "\346\220\236\347\254\221", 0));
        cb_music->setText(QApplication::translate("LoginDialog", "\345\256\240\347\211\251", 0));
        cb_video->setText(QApplication::translate("LoginDialog", "\346\227\205\346\270\270", 0));
        cb_outside->setText(QApplication::translate("LoginDialog", "\351\237\263\344\271\220", 0));
        cb_edu->setText(QApplication::translate("LoginDialog", "\347\224\265\345\275\261", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LoginDialog", " \346\263\250\345\206\214 ", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
