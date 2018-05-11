/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHighlight_single_possibilities;
    QAction *actionRestart_this_game;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton10;
    QPushButton *pushButton19;
    QPushButton *pushButton11;
    QPushButton *pushButton20;
    QPushButton *pushButton12;
    QPushButton *pushButton21;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton28;
    QPushButton *pushButton29;
    QPushButton *pushButton30;
    QPushButton *pushButton37;
    QPushButton *pushButton46;
    QPushButton *pushButton38;
    QPushButton *pushButton47;
    QPushButton *pushButton39;
    QPushButton *pushButton48;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton55;
    QPushButton *pushButton56;
    QPushButton *pushButton57;
    QPushButton *pushButton64;
    QPushButton *pushButton73;
    QPushButton *pushButton65;
    QPushButton *pushButton74;
    QPushButton *pushButton66;
    QPushButton *pushButton75;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton58;
    QPushButton *pushButton59;
    QPushButton *pushButton60;
    QPushButton *pushButton67;
    QPushButton *pushButton76;
    QPushButton *pushButton68;
    QPushButton *pushButton77;
    QPushButton *pushButton69;
    QPushButton *pushButton78;
    QGridLayout *gridLayout_13;
    QPushButton *pushButton61;
    QPushButton *pushButton62;
    QPushButton *pushButton63;
    QPushButton *pushButton70;
    QPushButton *pushButton79;
    QPushButton *pushButton71;
    QPushButton *pushButton80;
    QPushButton *pushButton72;
    QPushButton *pushButton81;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton13;
    QPushButton *pushButton22;
    QPushButton *pushButton14;
    QPushButton *pushButton23;
    QPushButton *pushButton15;
    QPushButton *pushButton24;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton31;
    QPushButton *pushButton32;
    QPushButton *pushButton33;
    QPushButton *pushButton40;
    QPushButton *pushButton49;
    QPushButton *pushButton41;
    QPushButton *pushButton50;
    QPushButton *pushButton42;
    QPushButton *pushButton51;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton34;
    QPushButton *pushButton35;
    QPushButton *pushButton36;
    QPushButton *pushButton43;
    QPushButton *pushButton52;
    QPushButton *pushButton44;
    QPushButton *pushButton53;
    QPushButton *pushButton45;
    QPushButton *pushButton54;
    QGridLayout *gridLayout_14;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton16;
    QPushButton *pushButton25;
    QPushButton *pushButton17;
    QPushButton *pushButton26;
    QPushButton *pushButton18;
    QPushButton *pushButton27;
    QFrame *frame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *inputButton9;
    QPushButton *inputButton3;
    QPushButton *inputButton7;
    QPushButton *inputButton5;
    QPushButton *inputButton1;
    QPushButton *inputButton2;
    QPushButton *inputButton4;
    QPushButton *inputButton6;
    QPushButton *inputButton8;
    QPushButton *inputButtonX;
    QFrame *frame_2;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_Level;
    QPushButton *pushButton_NewGame;
    QLabel *label_nbGrid;
    QLabel *label_tryCount;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(738, 608);
        actionHighlight_single_possibilities = new QAction(MainWindow);
        actionHighlight_single_possibilities->setObjectName(QStringLiteral("actionHighlight_single_possibilities"));
        actionHighlight_single_possibilities->setCheckable(true);
        actionHighlight_single_possibilities->setChecked(true);
        actionRestart_this_game = new QAction(MainWindow);
        actionRestart_this_game->setObjectName(QStringLiteral("actionRestart_this_game"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(250, 10, 471, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(1);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setEnabled(true);
        pushButton1->setMinimumSize(QSize(50, 50));
        pushButton1->setMaximumSize(QSize(50, 50));
        pushButton1->setFocusPolicy(Qt::NoFocus);
        pushButton1->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));
        pushButton1->setCheckable(false);

        gridLayout_6->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setEnabled(true);
        pushButton2->setMinimumSize(QSize(50, 50));
        pushButton2->setMaximumSize(QSize(50, 50));
        pushButton2->setFocusPolicy(Qt::NoFocus);
        pushButton2->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setEnabled(true);
        pushButton3->setMinimumSize(QSize(50, 50));
        pushButton3->setMaximumSize(QSize(50, 50));
        pushButton3->setFocusPolicy(Qt::NoFocus);
        pushButton3->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton10 = new QPushButton(gridLayoutWidget);
        pushButton10->setObjectName(QStringLiteral("pushButton10"));
        pushButton10->setEnabled(true);
        pushButton10->setMinimumSize(QSize(50, 50));
        pushButton10->setMaximumSize(QSize(50, 50));
        pushButton10->setFocusPolicy(Qt::NoFocus);
        pushButton10->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton10, 1, 0, 1, 1);

        pushButton19 = new QPushButton(gridLayoutWidget);
        pushButton19->setObjectName(QStringLiteral("pushButton19"));
        pushButton19->setEnabled(true);
        pushButton19->setMinimumSize(QSize(50, 50));
        pushButton19->setMaximumSize(QSize(50, 50));
        pushButton19->setFocusPolicy(Qt::NoFocus);
        pushButton19->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton19, 2, 0, 1, 1);

        pushButton11 = new QPushButton(gridLayoutWidget);
        pushButton11->setObjectName(QStringLiteral("pushButton11"));
        pushButton11->setEnabled(true);
        pushButton11->setMinimumSize(QSize(50, 50));
        pushButton11->setMaximumSize(QSize(50, 50));
        pushButton11->setFocusPolicy(Qt::NoFocus);
        pushButton11->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton11, 1, 1, 1, 1);

        pushButton20 = new QPushButton(gridLayoutWidget);
        pushButton20->setObjectName(QStringLiteral("pushButton20"));
        pushButton20->setEnabled(true);
        pushButton20->setMinimumSize(QSize(50, 50));
        pushButton20->setMaximumSize(QSize(50, 50));
        pushButton20->setFocusPolicy(Qt::NoFocus);
        pushButton20->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton20, 2, 1, 1, 1);

        pushButton12 = new QPushButton(gridLayoutWidget);
        pushButton12->setObjectName(QStringLiteral("pushButton12"));
        pushButton12->setEnabled(true);
        pushButton12->setMinimumSize(QSize(50, 50));
        pushButton12->setMaximumSize(QSize(50, 50));
        pushButton12->setFocusPolicy(Qt::NoFocus);
        pushButton12->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton12, 1, 2, 1, 1);

        pushButton21 = new QPushButton(gridLayoutWidget);
        pushButton21->setObjectName(QStringLiteral("pushButton21"));
        pushButton21->setEnabled(true);
        pushButton21->setMinimumSize(QSize(50, 50));
        pushButton21->setMaximumSize(QSize(50, 50));
        pushButton21->setFocusPolicy(Qt::NoFocus);
        pushButton21->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_6->addWidget(pushButton21, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(1);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        pushButton28 = new QPushButton(gridLayoutWidget);
        pushButton28->setObjectName(QStringLiteral("pushButton28"));
        pushButton28->setEnabled(true);
        pushButton28->setMinimumSize(QSize(50, 50));
        pushButton28->setMaximumSize(QSize(50, 50));
        pushButton28->setFocusPolicy(Qt::NoFocus);
        pushButton28->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton28, 0, 0, 1, 1);

        pushButton29 = new QPushButton(gridLayoutWidget);
        pushButton29->setObjectName(QStringLiteral("pushButton29"));
        pushButton29->setEnabled(true);
        pushButton29->setMinimumSize(QSize(50, 50));
        pushButton29->setMaximumSize(QSize(50, 50));
        pushButton29->setFocusPolicy(Qt::NoFocus);
        pushButton29->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton29, 0, 1, 1, 1);

        pushButton30 = new QPushButton(gridLayoutWidget);
        pushButton30->setObjectName(QStringLiteral("pushButton30"));
        pushButton30->setEnabled(true);
        pushButton30->setMinimumSize(QSize(50, 50));
        pushButton30->setMaximumSize(QSize(50, 50));
        pushButton30->setFocusPolicy(Qt::NoFocus);
        pushButton30->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton30, 0, 2, 1, 1);

        pushButton37 = new QPushButton(gridLayoutWidget);
        pushButton37->setObjectName(QStringLiteral("pushButton37"));
        pushButton37->setEnabled(true);
        pushButton37->setMinimumSize(QSize(50, 50));
        pushButton37->setMaximumSize(QSize(50, 50));
        pushButton37->setFocusPolicy(Qt::NoFocus);
        pushButton37->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton37, 1, 0, 1, 1);

        pushButton46 = new QPushButton(gridLayoutWidget);
        pushButton46->setObjectName(QStringLiteral("pushButton46"));
        pushButton46->setEnabled(true);
        pushButton46->setMinimumSize(QSize(50, 50));
        pushButton46->setMaximumSize(QSize(50, 50));
        pushButton46->setFocusPolicy(Qt::NoFocus);
        pushButton46->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton46, 2, 0, 1, 1);

        pushButton38 = new QPushButton(gridLayoutWidget);
        pushButton38->setObjectName(QStringLiteral("pushButton38"));
        pushButton38->setEnabled(true);
        pushButton38->setMinimumSize(QSize(50, 50));
        pushButton38->setMaximumSize(QSize(50, 50));
        pushButton38->setFocusPolicy(Qt::NoFocus);
        pushButton38->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton38, 1, 1, 1, 1);

        pushButton47 = new QPushButton(gridLayoutWidget);
        pushButton47->setObjectName(QStringLiteral("pushButton47"));
        pushButton47->setEnabled(true);
        pushButton47->setMinimumSize(QSize(50, 50));
        pushButton47->setMaximumSize(QSize(50, 50));
        pushButton47->setFocusPolicy(Qt::NoFocus);
        pushButton47->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton47, 2, 1, 1, 1);

        pushButton39 = new QPushButton(gridLayoutWidget);
        pushButton39->setObjectName(QStringLiteral("pushButton39"));
        pushButton39->setEnabled(true);
        pushButton39->setMinimumSize(QSize(50, 50));
        pushButton39->setMaximumSize(QSize(50, 50));
        pushButton39->setFocusPolicy(Qt::NoFocus);
        pushButton39->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton39, 1, 2, 1, 1);

        pushButton48 = new QPushButton(gridLayoutWidget);
        pushButton48->setObjectName(QStringLiteral("pushButton48"));
        pushButton48->setEnabled(true);
        pushButton48->setMinimumSize(QSize(50, 50));
        pushButton48->setMaximumSize(QSize(50, 50));
        pushButton48->setFocusPolicy(Qt::NoFocus);
        pushButton48->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_11->addWidget(pushButton48, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_11, 1, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(1);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        pushButton55 = new QPushButton(gridLayoutWidget);
        pushButton55->setObjectName(QStringLiteral("pushButton55"));
        pushButton55->setEnabled(true);
        pushButton55->setMinimumSize(QSize(50, 50));
        pushButton55->setMaximumSize(QSize(50, 50));
        pushButton55->setFocusPolicy(Qt::NoFocus);
        pushButton55->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton55, 0, 0, 1, 1);

        pushButton56 = new QPushButton(gridLayoutWidget);
        pushButton56->setObjectName(QStringLiteral("pushButton56"));
        pushButton56->setEnabled(true);
        pushButton56->setMinimumSize(QSize(50, 50));
        pushButton56->setMaximumSize(QSize(50, 50));
        pushButton56->setFocusPolicy(Qt::NoFocus);
        pushButton56->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton56, 0, 1, 1, 1);

        pushButton57 = new QPushButton(gridLayoutWidget);
        pushButton57->setObjectName(QStringLiteral("pushButton57"));
        pushButton57->setEnabled(true);
        pushButton57->setMinimumSize(QSize(50, 50));
        pushButton57->setMaximumSize(QSize(50, 50));
        pushButton57->setFocusPolicy(Qt::NoFocus);
        pushButton57->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton57, 0, 2, 1, 1);

        pushButton64 = new QPushButton(gridLayoutWidget);
        pushButton64->setObjectName(QStringLiteral("pushButton64"));
        pushButton64->setEnabled(true);
        pushButton64->setMinimumSize(QSize(50, 50));
        pushButton64->setMaximumSize(QSize(50, 50));
        pushButton64->setFocusPolicy(Qt::NoFocus);
        pushButton64->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton64, 1, 0, 1, 1);

        pushButton73 = new QPushButton(gridLayoutWidget);
        pushButton73->setObjectName(QStringLiteral("pushButton73"));
        pushButton73->setEnabled(true);
        pushButton73->setMinimumSize(QSize(50, 50));
        pushButton73->setMaximumSize(QSize(50, 50));
        pushButton73->setFocusPolicy(Qt::NoFocus);
        pushButton73->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton73, 2, 0, 1, 1);

        pushButton65 = new QPushButton(gridLayoutWidget);
        pushButton65->setObjectName(QStringLiteral("pushButton65"));
        pushButton65->setEnabled(true);
        pushButton65->setMinimumSize(QSize(50, 50));
        pushButton65->setMaximumSize(QSize(50, 50));
        pushButton65->setFocusPolicy(Qt::NoFocus);
        pushButton65->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton65, 1, 1, 1, 1);

        pushButton74 = new QPushButton(gridLayoutWidget);
        pushButton74->setObjectName(QStringLiteral("pushButton74"));
        pushButton74->setEnabled(true);
        pushButton74->setMinimumSize(QSize(50, 50));
        pushButton74->setMaximumSize(QSize(50, 50));
        pushButton74->setFocusPolicy(Qt::NoFocus);
        pushButton74->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton74, 2, 1, 1, 1);

        pushButton66 = new QPushButton(gridLayoutWidget);
        pushButton66->setObjectName(QStringLiteral("pushButton66"));
        pushButton66->setEnabled(true);
        pushButton66->setMinimumSize(QSize(50, 50));
        pushButton66->setMaximumSize(QSize(50, 50));
        pushButton66->setFocusPolicy(Qt::NoFocus);
        pushButton66->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton66, 1, 2, 1, 1);

        pushButton75 = new QPushButton(gridLayoutWidget);
        pushButton75->setObjectName(QStringLiteral("pushButton75"));
        pushButton75->setEnabled(true);
        pushButton75->setMinimumSize(QSize(50, 50));
        pushButton75->setMaximumSize(QSize(50, 50));
        pushButton75->setFocusPolicy(Qt::NoFocus);
        pushButton75->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_12->addWidget(pushButton75, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_12, 2, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(1);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        pushButton58 = new QPushButton(gridLayoutWidget);
        pushButton58->setObjectName(QStringLiteral("pushButton58"));
        pushButton58->setEnabled(true);
        pushButton58->setMinimumSize(QSize(50, 50));
        pushButton58->setMaximumSize(QSize(50, 50));
        pushButton58->setFocusPolicy(Qt::NoFocus);
        pushButton58->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton58, 0, 0, 1, 1);

        pushButton59 = new QPushButton(gridLayoutWidget);
        pushButton59->setObjectName(QStringLiteral("pushButton59"));
        pushButton59->setEnabled(true);
        pushButton59->setMinimumSize(QSize(50, 50));
        pushButton59->setMaximumSize(QSize(50, 50));
        pushButton59->setFocusPolicy(Qt::NoFocus);
        pushButton59->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton59, 0, 1, 1, 1);

        pushButton60 = new QPushButton(gridLayoutWidget);
        pushButton60->setObjectName(QStringLiteral("pushButton60"));
        pushButton60->setEnabled(true);
        pushButton60->setMinimumSize(QSize(50, 50));
        pushButton60->setMaximumSize(QSize(50, 50));
        pushButton60->setFocusPolicy(Qt::NoFocus);
        pushButton60->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton60, 0, 2, 1, 1);

        pushButton67 = new QPushButton(gridLayoutWidget);
        pushButton67->setObjectName(QStringLiteral("pushButton67"));
        pushButton67->setEnabled(true);
        pushButton67->setMinimumSize(QSize(50, 50));
        pushButton67->setMaximumSize(QSize(50, 50));
        pushButton67->setFocusPolicy(Qt::NoFocus);
        pushButton67->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton67, 1, 0, 1, 1);

        pushButton76 = new QPushButton(gridLayoutWidget);
        pushButton76->setObjectName(QStringLiteral("pushButton76"));
        pushButton76->setEnabled(true);
        pushButton76->setMinimumSize(QSize(50, 50));
        pushButton76->setMaximumSize(QSize(50, 50));
        pushButton76->setFocusPolicy(Qt::NoFocus);
        pushButton76->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton76, 2, 0, 1, 1);

        pushButton68 = new QPushButton(gridLayoutWidget);
        pushButton68->setObjectName(QStringLiteral("pushButton68"));
        pushButton68->setEnabled(true);
        pushButton68->setMinimumSize(QSize(50, 50));
        pushButton68->setMaximumSize(QSize(50, 50));
        pushButton68->setFocusPolicy(Qt::NoFocus);
        pushButton68->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton68, 1, 1, 1, 1);

        pushButton77 = new QPushButton(gridLayoutWidget);
        pushButton77->setObjectName(QStringLiteral("pushButton77"));
        pushButton77->setEnabled(true);
        pushButton77->setMinimumSize(QSize(50, 50));
        pushButton77->setMaximumSize(QSize(50, 50));
        pushButton77->setFocusPolicy(Qt::NoFocus);
        pushButton77->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton77, 2, 1, 1, 1);

        pushButton69 = new QPushButton(gridLayoutWidget);
        pushButton69->setObjectName(QStringLiteral("pushButton69"));
        pushButton69->setEnabled(true);
        pushButton69->setMinimumSize(QSize(50, 50));
        pushButton69->setMaximumSize(QSize(50, 50));
        pushButton69->setFocusPolicy(Qt::NoFocus);
        pushButton69->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton69, 1, 2, 1, 1);

        pushButton78 = new QPushButton(gridLayoutWidget);
        pushButton78->setObjectName(QStringLiteral("pushButton78"));
        pushButton78->setEnabled(true);
        pushButton78->setMinimumSize(QSize(50, 50));
        pushButton78->setMaximumSize(QSize(50, 50));
        pushButton78->setFocusPolicy(Qt::NoFocus);
        pushButton78->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_10->addWidget(pushButton78, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_10, 2, 1, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(1);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        pushButton61 = new QPushButton(gridLayoutWidget);
        pushButton61->setObjectName(QStringLiteral("pushButton61"));
        pushButton61->setEnabled(true);
        pushButton61->setMinimumSize(QSize(50, 50));
        pushButton61->setMaximumSize(QSize(50, 50));
        pushButton61->setFocusPolicy(Qt::NoFocus);
        pushButton61->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton61, 0, 0, 1, 1);

        pushButton62 = new QPushButton(gridLayoutWidget);
        pushButton62->setObjectName(QStringLiteral("pushButton62"));
        pushButton62->setEnabled(true);
        pushButton62->setMinimumSize(QSize(50, 50));
        pushButton62->setMaximumSize(QSize(50, 50));
        pushButton62->setFocusPolicy(Qt::NoFocus);
        pushButton62->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton62, 0, 1, 1, 1);

        pushButton63 = new QPushButton(gridLayoutWidget);
        pushButton63->setObjectName(QStringLiteral("pushButton63"));
        pushButton63->setEnabled(true);
        pushButton63->setMinimumSize(QSize(50, 50));
        pushButton63->setMaximumSize(QSize(50, 50));
        pushButton63->setFocusPolicy(Qt::NoFocus);
        pushButton63->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton63, 0, 2, 1, 1);

        pushButton70 = new QPushButton(gridLayoutWidget);
        pushButton70->setObjectName(QStringLiteral("pushButton70"));
        pushButton70->setEnabled(true);
        pushButton70->setMinimumSize(QSize(50, 50));
        pushButton70->setMaximumSize(QSize(50, 50));
        pushButton70->setFocusPolicy(Qt::NoFocus);
        pushButton70->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton70, 1, 0, 1, 1);

        pushButton79 = new QPushButton(gridLayoutWidget);
        pushButton79->setObjectName(QStringLiteral("pushButton79"));
        pushButton79->setEnabled(true);
        pushButton79->setMinimumSize(QSize(50, 50));
        pushButton79->setMaximumSize(QSize(50, 50));
        pushButton79->setFocusPolicy(Qt::NoFocus);
        pushButton79->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton79, 2, 0, 1, 1);

        pushButton71 = new QPushButton(gridLayoutWidget);
        pushButton71->setObjectName(QStringLiteral("pushButton71"));
        pushButton71->setEnabled(true);
        pushButton71->setMinimumSize(QSize(50, 50));
        pushButton71->setMaximumSize(QSize(50, 50));
        pushButton71->setFocusPolicy(Qt::NoFocus);
        pushButton71->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton71, 1, 1, 1, 1);

        pushButton80 = new QPushButton(gridLayoutWidget);
        pushButton80->setObjectName(QStringLiteral("pushButton80"));
        pushButton80->setEnabled(true);
        pushButton80->setMinimumSize(QSize(50, 50));
        pushButton80->setMaximumSize(QSize(50, 50));
        pushButton80->setFocusPolicy(Qt::NoFocus);
        pushButton80->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton80, 2, 1, 1, 1);

        pushButton72 = new QPushButton(gridLayoutWidget);
        pushButton72->setObjectName(QStringLiteral("pushButton72"));
        pushButton72->setEnabled(true);
        pushButton72->setMinimumSize(QSize(50, 50));
        pushButton72->setMaximumSize(QSize(50, 50));
        pushButton72->setFocusPolicy(Qt::NoFocus);
        pushButton72->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton72, 1, 2, 1, 1);

        pushButton81 = new QPushButton(gridLayoutWidget);
        pushButton81->setObjectName(QStringLiteral("pushButton81"));
        pushButton81->setEnabled(true);
        pushButton81->setMinimumSize(QSize(50, 50));
        pushButton81->setMaximumSize(QSize(50, 50));
        pushButton81->setFocusPolicy(Qt::NoFocus);
        pushButton81->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_13->addWidget(pushButton81, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_13, 2, 2, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(1);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setEnabled(true);
        pushButton4->setMinimumSize(QSize(50, 50));
        pushButton4->setMaximumSize(QSize(50, 50));
        pushButton4->setFocusPolicy(Qt::NoFocus);
        pushButton4->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton4, 0, 0, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setEnabled(true);
        pushButton5->setMinimumSize(QSize(50, 50));
        pushButton5->setMaximumSize(QSize(50, 50));
        pushButton5->setFocusPolicy(Qt::NoFocus);
        pushButton5->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton5, 0, 1, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setEnabled(true);
        pushButton6->setMinimumSize(QSize(50, 50));
        pushButton6->setMaximumSize(QSize(50, 50));
        pushButton6->setFocusPolicy(Qt::NoFocus);
        pushButton6->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton6, 0, 2, 1, 1);

        pushButton13 = new QPushButton(gridLayoutWidget);
        pushButton13->setObjectName(QStringLiteral("pushButton13"));
        pushButton13->setEnabled(true);
        pushButton13->setMinimumSize(QSize(50, 50));
        pushButton13->setMaximumSize(QSize(50, 50));
        pushButton13->setFocusPolicy(Qt::NoFocus);
        pushButton13->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton13, 1, 0, 1, 1);

        pushButton22 = new QPushButton(gridLayoutWidget);
        pushButton22->setObjectName(QStringLiteral("pushButton22"));
        pushButton22->setEnabled(true);
        pushButton22->setMinimumSize(QSize(50, 50));
        pushButton22->setMaximumSize(QSize(50, 50));
        pushButton22->setFocusPolicy(Qt::NoFocus);
        pushButton22->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton22, 2, 0, 1, 1);

        pushButton14 = new QPushButton(gridLayoutWidget);
        pushButton14->setObjectName(QStringLiteral("pushButton14"));
        pushButton14->setEnabled(true);
        pushButton14->setMinimumSize(QSize(50, 50));
        pushButton14->setMaximumSize(QSize(50, 50));
        pushButton14->setFocusPolicy(Qt::NoFocus);
        pushButton14->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton14, 1, 1, 1, 1);

        pushButton23 = new QPushButton(gridLayoutWidget);
        pushButton23->setObjectName(QStringLiteral("pushButton23"));
        pushButton23->setEnabled(true);
        pushButton23->setMinimumSize(QSize(50, 50));
        pushButton23->setMaximumSize(QSize(50, 50));
        pushButton23->setFocusPolicy(Qt::NoFocus);
        pushButton23->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton23, 2, 1, 1, 1);

        pushButton15 = new QPushButton(gridLayoutWidget);
        pushButton15->setObjectName(QStringLiteral("pushButton15"));
        pushButton15->setEnabled(true);
        pushButton15->setMinimumSize(QSize(50, 50));
        pushButton15->setMaximumSize(QSize(50, 50));
        pushButton15->setFocusPolicy(Qt::NoFocus);
        pushButton15->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton15, 1, 2, 1, 1);

        pushButton24 = new QPushButton(gridLayoutWidget);
        pushButton24->setObjectName(QStringLiteral("pushButton24"));
        pushButton24->setEnabled(true);
        pushButton24->setMinimumSize(QSize(50, 50));
        pushButton24->setMaximumSize(QSize(50, 50));
        pushButton24->setFocusPolicy(Qt::NoFocus);
        pushButton24->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_7->addWidget(pushButton24, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_7, 0, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(1);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        pushButton31 = new QPushButton(gridLayoutWidget);
        pushButton31->setObjectName(QStringLiteral("pushButton31"));
        pushButton31->setEnabled(true);
        pushButton31->setMinimumSize(QSize(50, 50));
        pushButton31->setMaximumSize(QSize(50, 50));
        pushButton31->setFocusPolicy(Qt::NoFocus);
        pushButton31->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton31, 0, 0, 1, 1);

        pushButton32 = new QPushButton(gridLayoutWidget);
        pushButton32->setObjectName(QStringLiteral("pushButton32"));
        pushButton32->setEnabled(true);
        pushButton32->setMinimumSize(QSize(50, 50));
        pushButton32->setMaximumSize(QSize(50, 50));
        pushButton32->setFocusPolicy(Qt::NoFocus);
        pushButton32->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton32, 0, 1, 1, 1);

        pushButton33 = new QPushButton(gridLayoutWidget);
        pushButton33->setObjectName(QStringLiteral("pushButton33"));
        pushButton33->setEnabled(true);
        pushButton33->setMinimumSize(QSize(50, 50));
        pushButton33->setMaximumSize(QSize(50, 50));
        pushButton33->setFocusPolicy(Qt::NoFocus);
        pushButton33->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton33, 0, 2, 1, 1);

        pushButton40 = new QPushButton(gridLayoutWidget);
        pushButton40->setObjectName(QStringLiteral("pushButton40"));
        pushButton40->setEnabled(true);
        pushButton40->setMinimumSize(QSize(50, 50));
        pushButton40->setMaximumSize(QSize(50, 50));
        pushButton40->setFocusPolicy(Qt::NoFocus);
        pushButton40->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton40, 1, 0, 1, 1);

        pushButton49 = new QPushButton(gridLayoutWidget);
        pushButton49->setObjectName(QStringLiteral("pushButton49"));
        pushButton49->setEnabled(true);
        pushButton49->setMinimumSize(QSize(50, 50));
        pushButton49->setMaximumSize(QSize(50, 50));
        pushButton49->setFocusPolicy(Qt::NoFocus);
        pushButton49->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton49, 2, 0, 1, 1);

        pushButton41 = new QPushButton(gridLayoutWidget);
        pushButton41->setObjectName(QStringLiteral("pushButton41"));
        pushButton41->setEnabled(true);
        pushButton41->setMinimumSize(QSize(50, 50));
        pushButton41->setMaximumSize(QSize(50, 50));
        pushButton41->setFocusPolicy(Qt::NoFocus);
        pushButton41->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton41, 1, 1, 1, 1);

        pushButton50 = new QPushButton(gridLayoutWidget);
        pushButton50->setObjectName(QStringLiteral("pushButton50"));
        pushButton50->setEnabled(true);
        pushButton50->setMinimumSize(QSize(50, 50));
        pushButton50->setMaximumSize(QSize(50, 50));
        pushButton50->setFocusPolicy(Qt::NoFocus);
        pushButton50->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton50, 2, 1, 1, 1);

        pushButton42 = new QPushButton(gridLayoutWidget);
        pushButton42->setObjectName(QStringLiteral("pushButton42"));
        pushButton42->setEnabled(true);
        pushButton42->setMinimumSize(QSize(50, 50));
        pushButton42->setMaximumSize(QSize(50, 50));
        pushButton42->setFocusPolicy(Qt::NoFocus);
        pushButton42->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton42, 1, 2, 1, 1);

        pushButton51 = new QPushButton(gridLayoutWidget);
        pushButton51->setObjectName(QStringLiteral("pushButton51"));
        pushButton51->setEnabled(true);
        pushButton51->setMinimumSize(QSize(50, 50));
        pushButton51->setMaximumSize(QSize(50, 50));
        pushButton51->setFocusPolicy(Qt::NoFocus);
        pushButton51->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_8->addWidget(pushButton51, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_8, 1, 1, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(1);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        pushButton34 = new QPushButton(gridLayoutWidget);
        pushButton34->setObjectName(QStringLiteral("pushButton34"));
        pushButton34->setEnabled(true);
        pushButton34->setMinimumSize(QSize(50, 50));
        pushButton34->setMaximumSize(QSize(50, 50));
        pushButton34->setFocusPolicy(Qt::NoFocus);
        pushButton34->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton34, 0, 0, 1, 1);

        pushButton35 = new QPushButton(gridLayoutWidget);
        pushButton35->setObjectName(QStringLiteral("pushButton35"));
        pushButton35->setEnabled(true);
        pushButton35->setMinimumSize(QSize(50, 50));
        pushButton35->setMaximumSize(QSize(50, 50));
        pushButton35->setFocusPolicy(Qt::NoFocus);
        pushButton35->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton35, 0, 1, 1, 1);

        pushButton36 = new QPushButton(gridLayoutWidget);
        pushButton36->setObjectName(QStringLiteral("pushButton36"));
        pushButton36->setEnabled(true);
        pushButton36->setMinimumSize(QSize(50, 50));
        pushButton36->setMaximumSize(QSize(50, 50));
        pushButton36->setFocusPolicy(Qt::NoFocus);
        pushButton36->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton36, 0, 2, 1, 1);

        pushButton43 = new QPushButton(gridLayoutWidget);
        pushButton43->setObjectName(QStringLiteral("pushButton43"));
        pushButton43->setEnabled(true);
        pushButton43->setMinimumSize(QSize(50, 50));
        pushButton43->setMaximumSize(QSize(50, 50));
        pushButton43->setFocusPolicy(Qt::NoFocus);
        pushButton43->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton43, 1, 0, 1, 1);

        pushButton52 = new QPushButton(gridLayoutWidget);
        pushButton52->setObjectName(QStringLiteral("pushButton52"));
        pushButton52->setEnabled(true);
        pushButton52->setMinimumSize(QSize(50, 50));
        pushButton52->setMaximumSize(QSize(50, 50));
        pushButton52->setFocusPolicy(Qt::NoFocus);
        pushButton52->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton52, 2, 0, 1, 1);

        pushButton44 = new QPushButton(gridLayoutWidget);
        pushButton44->setObjectName(QStringLiteral("pushButton44"));
        pushButton44->setEnabled(true);
        pushButton44->setMinimumSize(QSize(50, 50));
        pushButton44->setMaximumSize(QSize(50, 50));
        pushButton44->setFocusPolicy(Qt::NoFocus);
        pushButton44->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton44, 1, 1, 1, 1);

        pushButton53 = new QPushButton(gridLayoutWidget);
        pushButton53->setObjectName(QStringLiteral("pushButton53"));
        pushButton53->setEnabled(true);
        pushButton53->setMinimumSize(QSize(50, 50));
        pushButton53->setMaximumSize(QSize(50, 50));
        pushButton53->setFocusPolicy(Qt::NoFocus);
        pushButton53->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton53, 2, 1, 1, 1);

        pushButton45 = new QPushButton(gridLayoutWidget);
        pushButton45->setObjectName(QStringLiteral("pushButton45"));
        pushButton45->setEnabled(true);
        pushButton45->setMinimumSize(QSize(50, 50));
        pushButton45->setMaximumSize(QSize(50, 50));
        pushButton45->setFocusPolicy(Qt::NoFocus);
        pushButton45->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton45, 1, 2, 1, 1);

        pushButton54 = new QPushButton(gridLayoutWidget);
        pushButton54->setObjectName(QStringLiteral("pushButton54"));
        pushButton54->setEnabled(true);
        pushButton54->setMinimumSize(QSize(50, 50));
        pushButton54->setMaximumSize(QSize(50, 50));
        pushButton54->setFocusPolicy(Qt::NoFocus);
        pushButton54->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_9->addWidget(pushButton54, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_9, 1, 2, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(1);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setEnabled(true);
        pushButton7->setMinimumSize(QSize(50, 50));
        pushButton7->setMaximumSize(QSize(50, 50));
        pushButton7->setFocusPolicy(Qt::NoFocus);
        pushButton7->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton7, 0, 0, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setEnabled(true);
        pushButton8->setMinimumSize(QSize(50, 50));
        pushButton8->setMaximumSize(QSize(50, 50));
        pushButton8->setFocusPolicy(Qt::NoFocus);
        pushButton8->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton8, 0, 1, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setEnabled(true);
        pushButton9->setMinimumSize(QSize(50, 50));
        pushButton9->setMaximumSize(QSize(50, 50));
        pushButton9->setFocusPolicy(Qt::NoFocus);
        pushButton9->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton9, 0, 2, 1, 1);

        pushButton16 = new QPushButton(gridLayoutWidget);
        pushButton16->setObjectName(QStringLiteral("pushButton16"));
        pushButton16->setEnabled(true);
        pushButton16->setMinimumSize(QSize(50, 50));
        pushButton16->setMaximumSize(QSize(50, 50));
        pushButton16->setFocusPolicy(Qt::NoFocus);
        pushButton16->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton16, 1, 0, 1, 1);

        pushButton25 = new QPushButton(gridLayoutWidget);
        pushButton25->setObjectName(QStringLiteral("pushButton25"));
        pushButton25->setEnabled(true);
        pushButton25->setMinimumSize(QSize(50, 50));
        pushButton25->setMaximumSize(QSize(50, 50));
        pushButton25->setFocusPolicy(Qt::NoFocus);
        pushButton25->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton25, 2, 0, 1, 1);

        pushButton17 = new QPushButton(gridLayoutWidget);
        pushButton17->setObjectName(QStringLiteral("pushButton17"));
        pushButton17->setEnabled(true);
        pushButton17->setMinimumSize(QSize(50, 50));
        pushButton17->setMaximumSize(QSize(50, 50));
        pushButton17->setFocusPolicy(Qt::NoFocus);
        pushButton17->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton17, 1, 1, 1, 1);

        pushButton26 = new QPushButton(gridLayoutWidget);
        pushButton26->setObjectName(QStringLiteral("pushButton26"));
        pushButton26->setEnabled(true);
        pushButton26->setMinimumSize(QSize(50, 50));
        pushButton26->setMaximumSize(QSize(50, 50));
        pushButton26->setFocusPolicy(Qt::NoFocus);
        pushButton26->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton26, 2, 1, 1, 1);

        pushButton18 = new QPushButton(gridLayoutWidget);
        pushButton18->setObjectName(QStringLiteral("pushButton18"));
        pushButton18->setEnabled(true);
        pushButton18->setMinimumSize(QSize(50, 50));
        pushButton18->setMaximumSize(QSize(50, 50));
        pushButton18->setFocusPolicy(Qt::NoFocus);
        pushButton18->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton18, 1, 2, 1, 1);

        pushButton27 = new QPushButton(gridLayoutWidget);
        pushButton27->setObjectName(QStringLiteral("pushButton27"));
        pushButton27->setEnabled(true);
        pushButton27->setMinimumSize(QSize(50, 50));
        pushButton27->setMaximumSize(QSize(50, 50));
        pushButton27->setFocusPolicy(Qt::NoFocus);
        pushButton27->setStyleSheet(QLatin1String("background-color: #ffffff;\n"
"border: 0px;\n"
"border-color: #000000;"));

        gridLayout_14->addWidget(pushButton27, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_14, 0, 2, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(249, 9, 471, 471));
        frame->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 80, 178, 361));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        inputButton9 = new QPushButton(gridLayoutWidget_2);
        inputButton9->setObjectName(QStringLiteral("inputButton9"));
        inputButton9->setEnabled(false);
        inputButton9->setMinimumSize(QSize(50, 50));
        inputButton9->setFocusPolicy(Qt::NoFocus);
        inputButton9->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton9, 4, 0, 1, 1);

        inputButton3 = new QPushButton(gridLayoutWidget_2);
        inputButton3->setObjectName(QStringLiteral("inputButton3"));
        inputButton3->setEnabled(false);
        inputButton3->setMinimumSize(QSize(50, 50));
        inputButton3->setFocusPolicy(Qt::NoFocus);
        inputButton3->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton3, 1, 0, 1, 1);

        inputButton7 = new QPushButton(gridLayoutWidget_2);
        inputButton7->setObjectName(QStringLiteral("inputButton7"));
        inputButton7->setEnabled(false);
        inputButton7->setMinimumSize(QSize(50, 50));
        inputButton7->setFocusPolicy(Qt::NoFocus);
        inputButton7->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton7, 3, 0, 1, 1);

        inputButton5 = new QPushButton(gridLayoutWidget_2);
        inputButton5->setObjectName(QStringLiteral("inputButton5"));
        inputButton5->setEnabled(false);
        inputButton5->setMinimumSize(QSize(50, 50));
        inputButton5->setFocusPolicy(Qt::NoFocus);
        inputButton5->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton5, 2, 0, 1, 1);

        inputButton1 = new QPushButton(gridLayoutWidget_2);
        inputButton1->setObjectName(QStringLiteral("inputButton1"));
        inputButton1->setEnabled(false);
        inputButton1->setMinimumSize(QSize(50, 50));
        inputButton1->setFocusPolicy(Qt::NoFocus);
        inputButton1->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton1, 0, 0, 1, 1);

        inputButton2 = new QPushButton(gridLayoutWidget_2);
        inputButton2->setObjectName(QStringLiteral("inputButton2"));
        inputButton2->setEnabled(false);
        inputButton2->setMinimumSize(QSize(50, 50));
        inputButton2->setFocusPolicy(Qt::NoFocus);
        inputButton2->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton2, 0, 1, 1, 1);

        inputButton4 = new QPushButton(gridLayoutWidget_2);
        inputButton4->setObjectName(QStringLiteral("inputButton4"));
        inputButton4->setEnabled(false);
        inputButton4->setMinimumSize(QSize(50, 50));
        inputButton4->setFocusPolicy(Qt::NoFocus);
        inputButton4->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton4, 1, 1, 1, 1);

        inputButton6 = new QPushButton(gridLayoutWidget_2);
        inputButton6->setObjectName(QStringLiteral("inputButton6"));
        inputButton6->setEnabled(false);
        inputButton6->setMinimumSize(QSize(50, 50));
        inputButton6->setFocusPolicy(Qt::NoFocus);
        inputButton6->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton6, 2, 1, 1, 1);

        inputButton8 = new QPushButton(gridLayoutWidget_2);
        inputButton8->setObjectName(QStringLiteral("inputButton8"));
        inputButton8->setEnabled(false);
        inputButton8->setMinimumSize(QSize(50, 50));
        inputButton8->setFocusPolicy(Qt::NoFocus);
        inputButton8->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButton8, 3, 1, 1, 1);

        inputButtonX = new QPushButton(gridLayoutWidget_2);
        inputButtonX->setObjectName(QStringLiteral("inputButtonX"));
        inputButtonX->setEnabled(false);
        inputButtonX->setMinimumSize(QSize(50, 50));
        inputButtonX->setFocusPolicy(Qt::NoFocus);
        inputButtonX->setStyleSheet(QLatin1String("font: 75 20pt \"Ubuntu Mono\";\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"border-color: red;\n"
"max-width:50px;\n"
"max-height:50px;\n"
"min-width:50px;\n"
"min-height:50px;\n"
"background-image: url(:/img/btn_disabled.png);"));

        gridLayout_3->addWidget(inputButtonX, 4, 1, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 60, 201, 401));
        frame_2->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width:1px;\n"
"border-color: black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 490, 721, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(230, 500, 268, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox_Level = new QComboBox(horizontalLayoutWidget);
        comboBox_Level->setObjectName(QStringLiteral("comboBox_Level"));

        horizontalLayout->addWidget(comboBox_Level);

        pushButton_NewGame = new QPushButton(horizontalLayoutWidget);
        pushButton_NewGame->setObjectName(QStringLiteral("pushButton_NewGame"));

        horizontalLayout->addWidget(pushButton_NewGame);

        label_nbGrid = new QLabel(centralWidget);
        label_nbGrid->setObjectName(QStringLiteral("label_nbGrid"));
        label_nbGrid->setGeometry(QRect(10, 530, 101, 16));
        label_tryCount = new QLabel(centralWidget);
        label_tryCount->setObjectName(QStringLiteral("label_tryCount"));
        label_tryCount->setGeometry(QRect(10, 20, 101, 16));
        MainWindow->setCentralWidget(centralWidget);
        frame_2->raise();
        frame->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        line->raise();
        horizontalLayoutWidget->raise();
        label_nbGrid->raise();
        label_tryCount->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 738, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionRestart_this_game);
        menuOptions->addAction(actionHighlight_single_possibilities);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionHighlight_single_possibilities->setText(QApplication::translate("MainWindow", "Highlight single possibilities", 0));
        actionRestart_this_game->setText(QApplication::translate("MainWindow", "Restart this game", 0));
        pushButton1->setText(QString());
        pushButton2->setText(QString());
        pushButton3->setText(QString());
        pushButton10->setText(QString());
        pushButton19->setText(QString());
        pushButton11->setText(QString());
        pushButton20->setText(QString());
        pushButton12->setText(QString());
        pushButton21->setText(QString());
        pushButton28->setText(QString());
        pushButton29->setText(QString());
        pushButton30->setText(QString());
        pushButton37->setText(QString());
        pushButton46->setText(QString());
        pushButton38->setText(QString());
        pushButton47->setText(QString());
        pushButton39->setText(QString());
        pushButton48->setText(QString());
        pushButton55->setText(QString());
        pushButton56->setText(QString());
        pushButton57->setText(QString());
        pushButton64->setText(QString());
        pushButton73->setText(QString());
        pushButton65->setText(QString());
        pushButton74->setText(QString());
        pushButton66->setText(QString());
        pushButton75->setText(QString());
        pushButton58->setText(QString());
        pushButton59->setText(QString());
        pushButton60->setText(QString());
        pushButton67->setText(QString());
        pushButton76->setText(QString());
        pushButton68->setText(QString());
        pushButton77->setText(QString());
        pushButton69->setText(QString());
        pushButton78->setText(QString());
        pushButton61->setText(QString());
        pushButton62->setText(QString());
        pushButton63->setText(QString());
        pushButton70->setText(QString());
        pushButton79->setText(QString());
        pushButton71->setText(QString());
        pushButton80->setText(QString());
        pushButton72->setText(QString());
        pushButton81->setText(QString());
        pushButton4->setText(QString());
        pushButton5->setText(QString());
        pushButton6->setText(QString());
        pushButton13->setText(QString());
        pushButton22->setText(QString());
        pushButton14->setText(QString());
        pushButton23->setText(QString());
        pushButton15->setText(QString());
        pushButton24->setText(QString());
        pushButton31->setText(QString());
        pushButton32->setText(QString());
        pushButton33->setText(QString());
        pushButton40->setText(QString());
        pushButton49->setText(QString());
        pushButton41->setText(QString());
        pushButton50->setText(QString());
        pushButton42->setText(QString());
        pushButton51->setText(QString());
        pushButton34->setText(QString());
        pushButton35->setText(QString());
        pushButton36->setText(QString());
        pushButton43->setText(QString());
        pushButton52->setText(QString());
        pushButton44->setText(QString());
        pushButton53->setText(QString());
        pushButton45->setText(QString());
        pushButton54->setText(QString());
        pushButton7->setText(QString());
        pushButton8->setText(QString());
        pushButton9->setText(QString());
        pushButton16->setText(QString());
        pushButton25->setText(QString());
        pushButton17->setText(QString());
        pushButton26->setText(QString());
        pushButton18->setText(QString());
        pushButton27->setText(QString());
        inputButton9->setText(QApplication::translate("MainWindow", "9", 0));
        inputButton3->setText(QApplication::translate("MainWindow", "3", 0));
        inputButton7->setText(QApplication::translate("MainWindow", "7", 0));
        inputButton5->setText(QApplication::translate("MainWindow", "5", 0));
        inputButton1->setText(QApplication::translate("MainWindow", "1", 0));
        inputButton2->setText(QApplication::translate("MainWindow", "2", 0));
        inputButton4->setText(QApplication::translate("MainWindow", "4", 0));
        inputButton6->setText(QApplication::translate("MainWindow", "6", 0));
        inputButton8->setText(QApplication::translate("MainWindow", "8", 0));
        inputButtonX->setText(QApplication::translate("MainWindow", "X", 0));
        label->setText(QApplication::translate("MainWindow", "Level", 0));
        comboBox_Level->clear();
        comboBox_Level->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Easy", 0)
         << QApplication::translate("MainWindow", "Medium", 0)
         << QApplication::translate("MainWindow", "Hard", 0)
         << QApplication::translate("MainWindow", "Insane", 0)
        );
        pushButton_NewGame->setText(QApplication::translate("MainWindow", "New Game", 0));
        label_nbGrid->setText(QApplication::translate("MainWindow", "Grid #1", 0));
        label_tryCount->setText(QApplication::translate("MainWindow", "Count : 0", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
