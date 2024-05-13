/********************************************************************************
** Form generated from reading UI file 'cridentialwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRIDENTIALWIDGET_H
#define UI_CRIDENTIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CridentialWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *edtPassword;
    QLineEdit *edtLogin;
    QPushButton *btnLoginCopy;
    QLabel *Site;
    QPushButton *btnPassCopy;

    void setupUi(QWidget *CridentialWidget)
    {
        if (CridentialWidget->objectName().isEmpty())
            CridentialWidget->setObjectName("CridentialWidget");
        CridentialWidget->resize(292, 57);
        CridentialWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 211, 255);\n"
""));
        gridLayout = new QGridLayout(CridentialWidget);
        gridLayout->setObjectName("gridLayout");
        edtPassword = new QLineEdit(CridentialWidget);
        edtPassword->setObjectName("edtPassword");
        edtPassword->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        edtPassword->setEchoMode(QLineEdit::Password);
        edtPassword->setReadOnly(true);

        gridLayout->addWidget(edtPassword, 2, 3, 1, 1);

        edtLogin = new QLineEdit(CridentialWidget);
        edtLogin->setObjectName("edtLogin");
        edtLogin->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        edtLogin->setEchoMode(QLineEdit::Password);
        edtLogin->setReadOnly(true);

        gridLayout->addWidget(edtLogin, 2, 1, 1, 1);

        btnLoginCopy = new QPushButton(CridentialWidget);
        btnLoginCopy->setObjectName("btnLoginCopy");
        btnLoginCopy->setStyleSheet(QString::fromUtf8("color: rgb(188, 149, 255);"));

        gridLayout->addWidget(btnLoginCopy, 2, 0, 1, 1);

        Site = new QLabel(CridentialWidget);
        Site->setObjectName("Site");
        Site->setStyleSheet(QString::fromUtf8("color: rgb(188, 149, 255);\n"
"font: 700 9pt \"Segoe UI\";"));

        gridLayout->addWidget(Site, 0, 1, 1, 1);

        btnPassCopy = new QPushButton(CridentialWidget);
        btnPassCopy->setObjectName("btnPassCopy");
        btnPassCopy->setStyleSheet(QString::fromUtf8("color: rgb(188, 149, 255);"));

        gridLayout->addWidget(btnPassCopy, 2, 2, 1, 1);


        retranslateUi(CridentialWidget);

        QMetaObject::connectSlotsByName(CridentialWidget);
    } // setupUi

    void retranslateUi(QWidget *CridentialWidget)
    {
        CridentialWidget->setWindowTitle(QCoreApplication::translate("CridentialWidget", "Form", nullptr));
        edtPassword->setText(QCoreApplication::translate("CridentialWidget", "12345", nullptr));
        edtLogin->setText(QCoreApplication::translate("CridentialWidget", "12345", nullptr));
        btnLoginCopy->setText(QCoreApplication::translate("CridentialWidget", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        Site->setText(QCoreApplication::translate("CridentialWidget", "TextLabel", nullptr));
        btnPassCopy->setText(QCoreApplication::translate("CridentialWidget", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CridentialWidget: public Ui_CridentialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRIDENTIALWIDGET_H
