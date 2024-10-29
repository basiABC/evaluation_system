/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actFont;
    QWidget *centralwidget;
    QWidget *widget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QTreeView *treeView;
    QStackedWidget *stackedWidget_3;
    QWidget *stackedWidget_3Page1;
    QVBoxLayout *verticalLayout_2;
    QWidget *header1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWidget *header2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QCheckBox *checkBox;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QWidget *page_2;
    QWidget *stackedWidget_3Page3;
    QLabel *Title;
    QWidget *gridLayoutWidget;
    QGridLayout *first_buttoninput;
    QPushButton *pushButton_31;
    QPushButton *pushButton_16;
    QPushButton *pushButton_28;
    QPushButton *pushButton_20;
    QPushButton *pushButton_15;
    QPushButton *pushButton_18;
    QPushButton *pushButton_25;
    QPushButton *pushButton_11;
    QPushButton *pushButton_23;
    QPushButton *pushButton_21;
    QPushButton *pushButton_30;
    QPushButton *pushButton_24;
    QPushButton *pushButton_9;
    QPushButton *pushButton_26;
    QPushButton *pushButton_19;
    QPushButton *pushButton_17;
    QPushButton *pushButton_27;
    QPushButton *pushButton_29;
    QPushButton *pushButton_7;
    QPushButton *pushButton_13;
    QPushButton *pushButton_22;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_8;
    QLabel *choice_1;
    QComboBox *choice_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *second_buttoninput;
    QPushButton *pushButton_32;
    QPushButton *pushButton_35;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_38;
    QPushButton *pushButton_39;
    QPushButton *pushButton_40;
    QLabel *label_4;
    QTextBrowser *output;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTreeView *treeView_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1036, 633);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actCut = new QAction(MainWindow);
        actCut->setObjectName("actCut");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        actCut->setIcon(icon);
        actCut->setMenuRole(QAction::MenuRole::NoRole);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName("actCopy");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        actCopy->setIcon(icon1);
        actCopy->setMenuRole(QAction::MenuRole::NoRole);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName("actPaste");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        actPaste->setIcon(icon2);
        actPaste->setMenuRole(QAction::MenuRole::NoRole);
        actFontBold = new QAction(MainWindow);
        actFontBold->setObjectName("actFontBold");
        actFontBold->setCheckable(true);
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        actFontBold->setIcon(icon3);
        actFontBold->setMenuRole(QAction::MenuRole::NoRole);
        actFontItalic = new QAction(MainWindow);
        actFontItalic->setObjectName("actFontItalic");
        actFontItalic->setCheckable(true);
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        actFontItalic->setIcon(icon4);
        actFontItalic->setMenuRole(QAction::MenuRole::NoRole);
        actFontUnder = new QAction(MainWindow);
        actFontUnder->setObjectName("actFontUnder");
        actFontUnder->setCheckable(true);
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextUnderline));
        actFontUnder->setIcon(icon5);
        actFontUnder->setMenuRole(QAction::MenuRole::NoRole);
        actFont = new QAction(MainWindow);
        actFont->setObjectName("actFont");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        actFont->setIcon(icon6);
        actFont->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1041, 551));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(200, 0));
        frame->setMaximumSize(QSize(200, 16777215));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);

        treeView = new QTreeView(widget);
        treeView->setObjectName("treeView");
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);
        treeView->setMaximumSize(QSize(200, 16777215));
        treeView->setStyleSheet(QString::fromUtf8("QTreeWidget {\n"
"            background-color: #333333;\n"
"            color: #FFFFFF;\n"
"            font-size: 14px;\n"
"        }\n"
"        QTreeWidget::item {\n"
"            padding: 5px;\n"
"            border: 1px solid #444444;\n"
"        }\n"
"        QTreeWidget::item:selected {\n"
"            background-color: #005599;\n"
"        }\n"
"        QTreeWidget::item:hover {\n"
"            background-color: #555555;\n"
"        }"));

        verticalLayout->addWidget(treeView);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        stackedWidget_3 = new QStackedWidget(widget);
        stackedWidget_3->setObjectName("stackedWidget_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget_3->sizePolicy().hasHeightForWidth());
        stackedWidget_3->setSizePolicy(sizePolicy2);
        stackedWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 231, 231);"));
        stackedWidget_3Page1 = new QWidget();
        stackedWidget_3Page1->setObjectName("stackedWidget_3Page1");
        verticalLayout_2 = new QVBoxLayout(stackedWidget_3Page1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        header1 = new QWidget(stackedWidget_3Page1);
        header1->setObjectName("header1");
        horizontalLayout_2 = new QHBoxLayout(header1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(header1);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: #3e8e41;  /* \346\233\264\346\267\261\347\232\204\347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"    border: 2px solid #3e8e41;  /* \346\233\264\346\267\261\347\232\204\347\273\277\350\211\262\350\276\271\346\241\206 */\n"
"    padding-left: 12px;         /* \346\250\241\346\213\237\346\214\211\344\270\213\347\232\204\346\225\210\346\236\234 */\n"
"    padding-top: 12px;          /* \346\250\241\346\213\237\346\214\211\344\270\213\347\232\204\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"    outline: none;              /* \347\247\273\351\231\244\351\273\230\350\256\244\347\232\204\347\204\246\347\202\271\346\241\206 */\n"
"    border: 2px solid #FF5722;  /* \346\251\231\350\211\262\350\276\271\346\241\206\357\274\214\350\241\250\347\244\272\350\216\267\345\276\227\347\204\246\347\202\271 */\n"
"}"));
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::UserAvailable));
        pushButton->setIcon(icon7);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(header1);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyCenter));
        pushButton_2->setIcon(icon8);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addWidget(header1, 0, Qt::AlignmentFlag::AlignLeft);

        stackedWidget = new QStackedWidget(stackedWidget_3Page1);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        header2 = new QWidget(page);
        header2->setObjectName("header2");
        sizePolicy2.setHeightForWidth(header2->sizePolicy().hasHeightForWidth());
        header2->setSizePolicy(sizePolicy2);
        header2->setStyleSheet(QString::fromUtf8("background-color: rgba(213, 219, 234, 148);"));
        horizontalLayout_3 = new QHBoxLayout(header2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_3 = new QPushButton(header2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 200, 255);"));
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        pushButton_3->setIcon(icon9);

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(header2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 200, 255);"));
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::HelpAbout));
        pushButton_4->setIcon(icon10);

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(header2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 200, 255);"));
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        pushButton_5->setIcon(icon11);

        horizontalLayout_3->addWidget(pushButton_5);

        checkBox = new QCheckBox(header2);
        checkBox->setObjectName("checkBox");
        QFont font;
        font.setBold(true);
        checkBox->setFont(font);

        horizontalLayout_3->addWidget(checkBox);

        pushButton_6 = new QPushButton(header2);
        pushButton_6->setObjectName("pushButton_6");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);
        pushButton_6->setMinimumSize(QSize(80, 0));
        pushButton_6->setMaximumSize(QSize(80, 16777215));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 200, 255);"));
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        pushButton_6->setIcon(icon12);

        horizontalLayout_3->addWidget(pushButton_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(header2, 0, Qt::AlignmentFlag::AlignTop);

        widget_2 = new QWidget(page);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy4);

        verticalLayout_3->addWidget(widget_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        stackedWidget_3->addWidget(stackedWidget_3Page1);
        stackedWidget_3Page3 = new QWidget();
        stackedWidget_3Page3->setObjectName("stackedWidget_3Page3");
        Title = new QLabel(stackedWidget_3Page3);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(10, 0, 791, 21));
        gridLayoutWidget = new QWidget(stackedWidget_3Page3);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(390, 130, 441, 221));
        first_buttoninput = new QGridLayout(gridLayoutWidget);
        first_buttoninput->setObjectName("first_buttoninput");
        first_buttoninput->setContentsMargins(0, 0, 0, 0);
        pushButton_31 = new QPushButton(gridLayoutWidget);
        pushButton_31->setObjectName("pushButton_31");

        first_buttoninput->addWidget(pushButton_31, 5, 4, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName("pushButton_16");

        first_buttoninput->addWidget(pushButton_16, 3, 1, 1, 1);

        pushButton_28 = new QPushButton(gridLayoutWidget);
        pushButton_28->setObjectName("pushButton_28");

        first_buttoninput->addWidget(pushButton_28, 4, 4, 1, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget);
        pushButton_20->setObjectName("pushButton_20");

        first_buttoninput->addWidget(pushButton_20, 4, 2, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName("pushButton_15");

        first_buttoninput->addWidget(pushButton_15, 1, 4, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget);
        pushButton_18->setObjectName("pushButton_18");

        first_buttoninput->addWidget(pushButton_18, 4, 0, 1, 1);

        pushButton_25 = new QPushButton(gridLayoutWidget);
        pushButton_25->setObjectName("pushButton_25");

        first_buttoninput->addWidget(pushButton_25, 2, 4, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName("pushButton_11");

        first_buttoninput->addWidget(pushButton_11, 1, 2, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget);
        pushButton_23->setObjectName("pushButton_23");

        first_buttoninput->addWidget(pushButton_23, 4, 1, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget);
        pushButton_21->setObjectName("pushButton_21");

        first_buttoninput->addWidget(pushButton_21, 2, 3, 1, 1);

        pushButton_30 = new QPushButton(gridLayoutWidget);
        pushButton_30->setObjectName("pushButton_30");

        first_buttoninput->addWidget(pushButton_30, 5, 3, 1, 1);

        pushButton_24 = new QPushButton(gridLayoutWidget);
        pushButton_24->setObjectName("pushButton_24");

        first_buttoninput->addWidget(pushButton_24, 5, 1, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        first_buttoninput->addWidget(pushButton_9, 1, 1, 1, 1);

        pushButton_26 = new QPushButton(gridLayoutWidget);
        pushButton_26->setObjectName("pushButton_26");

        first_buttoninput->addWidget(pushButton_26, 3, 4, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget);
        pushButton_19->setObjectName("pushButton_19");

        first_buttoninput->addWidget(pushButton_19, 5, 0, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget);
        pushButton_17->setObjectName("pushButton_17");

        first_buttoninput->addWidget(pushButton_17, 3, 2, 1, 1);

        pushButton_27 = new QPushButton(gridLayoutWidget);
        pushButton_27->setObjectName("pushButton_27");

        first_buttoninput->addWidget(pushButton_27, 4, 3, 1, 1);

        pushButton_29 = new QPushButton(gridLayoutWidget);
        pushButton_29->setObjectName("pushButton_29");

        first_buttoninput->addWidget(pushButton_29, 5, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        first_buttoninput->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName("pushButton_13");

        first_buttoninput->addWidget(pushButton_13, 1, 3, 1, 1);

        pushButton_22 = new QPushButton(gridLayoutWidget);
        pushButton_22->setObjectName("pushButton_22");

        first_buttoninput->addWidget(pushButton_22, 3, 3, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        first_buttoninput->addWidget(pushButton_10, 2, 1, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName("pushButton_12");

        first_buttoninput->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName("pushButton_14");

        first_buttoninput->addWidget(pushButton_14, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        first_buttoninput->addWidget(pushButton_8, 2, 0, 1, 1);

        choice_1 = new QLabel(gridLayoutWidget);
        choice_1->setObjectName("choice_1");

        first_buttoninput->addWidget(choice_1, 0, 0, 1, 2);

        choice_2 = new QComboBox(gridLayoutWidget);
        choice_2->setObjectName("choice_2");

        first_buttoninput->addWidget(choice_2, 0, 2, 1, 3);

        gridLayoutWidget_2 = new QWidget(stackedWidget_3Page3);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(390, 360, 441, 191));
        second_buttoninput = new QGridLayout(gridLayoutWidget_2);
        second_buttoninput->setObjectName("second_buttoninput");
        second_buttoninput->setContentsMargins(0, 0, 0, 0);
        pushButton_32 = new QPushButton(gridLayoutWidget_2);
        pushButton_32->setObjectName("pushButton_32");

        second_buttoninput->addWidget(pushButton_32, 2, 0, 1, 1);

        pushButton_35 = new QPushButton(gridLayoutWidget_2);
        pushButton_35->setObjectName("pushButton_35");

        second_buttoninput->addWidget(pushButton_35, 0, 1, 1, 1);

        pushButton_33 = new QPushButton(gridLayoutWidget_2);
        pushButton_33->setObjectName("pushButton_33");

        second_buttoninput->addWidget(pushButton_33, 1, 0, 1, 1);

        pushButton_34 = new QPushButton(gridLayoutWidget_2);
        pushButton_34->setObjectName("pushButton_34");

        second_buttoninput->addWidget(pushButton_34, 0, 0, 1, 1);

        pushButton_36 = new QPushButton(gridLayoutWidget_2);
        pushButton_36->setObjectName("pushButton_36");

        second_buttoninput->addWidget(pushButton_36, 0, 2, 1, 1);

        pushButton_37 = new QPushButton(gridLayoutWidget_2);
        pushButton_37->setObjectName("pushButton_37");

        second_buttoninput->addWidget(pushButton_37, 1, 1, 1, 1);

        pushButton_38 = new QPushButton(gridLayoutWidget_2);
        pushButton_38->setObjectName("pushButton_38");

        second_buttoninput->addWidget(pushButton_38, 1, 2, 1, 1);

        pushButton_39 = new QPushButton(gridLayoutWidget_2);
        pushButton_39->setObjectName("pushButton_39");

        second_buttoninput->addWidget(pushButton_39, 2, 1, 1, 1);

        pushButton_40 = new QPushButton(gridLayoutWidget_2);
        pushButton_40->setObjectName("pushButton_40");

        second_buttoninput->addWidget(pushButton_40, 2, 2, 1, 1);

        label_4 = new QLabel(stackedWidget_3Page3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1, 41, 541, 16));
        output = new QTextBrowser(stackedWidget_3Page3);
        output->setObjectName("output");
        output->setGeometry(QRect(1, 79, 829, 41));
        scrollArea = new QScrollArea(stackedWidget_3Page3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 140, 361, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 399));
        treeView_2 = new QTreeView(scrollAreaWidgetContents);
        treeView_2->setObjectName("treeView_2");
        treeView_2->setGeometry(QRect(10, 10, 341, 371));
        scrollArea->setWidget(scrollAreaWidgetContents);
        horizontalLayoutWidget = new QWidget(stackedWidget_3Page3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 60, 351, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout->addWidget(radioButton_3);

        stackedWidget_3->addWidget(stackedWidget_3Page3);

        formLayout->setWidget(0, QFormLayout::FieldRole, stackedWidget_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1036, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName("menu_4");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy5);
        toolBar->setIconSize(QSize(15, 16));
        toolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actPaste);
        menu->addAction(actCopy);
        menu->addAction(actCut);
        menu_2->addAction(actFontItalic);
        menu_2->addAction(actFontBold);
        menu_2->addAction(actFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actFont);
        menu_4->addSeparator();
        menu_4->addSeparator();
        menu_4->addSeparator();
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addSeparator();
        toolBar->addAction(actFontBold);
        toolBar->addAction(actFontUnder);
        toolBar->addAction(actFontItalic);
        toolBar->addSeparator();
        toolBar->addAction(actFont);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actCut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actCopy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actPaste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actFontBold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontBold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontItalic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontItalic->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontUnder->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actFontUnder->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actFont->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\347\201\255\347\201\253\344\273\273\345\212\241\346\225\210\350\203\275\346\214\207\346\240\207\344\275\223\347\263\273", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\223\345\256\266\345\210\206\346\236\220\346\263\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\261\202\346\254\241\345\210\206\346\236\220\346\263\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\212\240\350\275\275\344\270\223\345\256\266\346\235\203\351\207\215\350\241\250", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\275\222\344\270\200\345\214\226\345\244\204\347\220\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220\347\273\274\345\220\210\346\235\203\351\207\215\350\241\250", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\350\256\276\344\270\272\351\273\230\350\256\244\346\235\203\351\207\215\344\275\223\347\263\273", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "\350\257\204\344\274\260\347\256\227\346\263\225\350\256\276\345\256\232", nullptr));
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_30->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_29->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        choice_1->setText(QCoreApplication::translate("MainWindow", "                       \347\256\227\346\263\225\346\235\245\346\272\220\357\274\232", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_33->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_34->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_39->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_40->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250\350\214\203\345\233\264\351\200\211\346\213\251\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\212\202\347\202\271\347\256\227\346\263\225\357\274\232", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\214\207\346\240\207\344\275\223\347\263\273\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\344\273\277\347\234\237\345\273\272\346\250\241", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\350\257\204\344\274\260\345\210\206\346\236\220", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
