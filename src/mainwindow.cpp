/**
 * @authors BASS Yannick & DURAND Valentin
 * ENSICAEN 2017
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <QMessageBox>
#include <QCloseEvent>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initBtn();

    connect(groupGrid, SIGNAL(buttonClicked(int)), this, SLOT(onGroupGridClicked(int)));
    connect(groupInput, SIGNAL(buttonClicked(int)), this, SLOT(onGroupInputClicked(int)));

    connect(ui->pushButton_NewGame, SIGNAL(clicked()), this, SLOT(onOpenNewGameClicked()));
    connect(ui->comboBox_Level,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(onLevelSwitched(const QString&)));
    m.level = 0;
    selectedBtn = 0;

    if(m.loadGame()){
        loadPreviousGame();
    }
    else{
        onOpenNewGameClicked();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void disableBtn(QAbstractButton * btn)
{
    btn->setEnabled(false);
    btn->setStyleSheet("font: 75 20pt \"Ubuntu Mono\";"
                                         "border-style: solid;"
                                         "border-width:0px;"
                                         "border-radius:50px;"
                                         "border-color: red;"
                                         "max-width:50px;"
                                         "max-height:50px;"
                                         "min-width:50px;"
                                         "min-height:50px;"
                                         "background-image: url(:/img/btn_disabled.png);");
}

void enableBtn(QAbstractButton * btn)
{
    btn->setEnabled(true);
    btn->setStyleSheet("font: 75 20pt \"Ubuntu Mono\";"
                                         "border-style: solid;"
                                         "border-width:0px;"
                                         "border-radius:50px;"
                                         "border-color: red;"
                                         "max-width:50px;"
                                         "max-height:50px;"
                                         "min-width:50px;"
                                         "min-height:50px;"
                                         "background-image: url(:/img/btn.png);");
}

void MainWindow::onGroupGridClicked(int id)
{
    for(int i = 1; i < 11; i++){
        disableBtn(groupInput->button(i));
    }
    if(selectedBtn != 0){
        selectedBtn->setStyleSheet("background-color: #ffffff; border: 0px; border-color: #000000; color: blue; font-size: 16px;");
    }
    updatePosibilities();
    if(selectedBtn != groupGrid->button(id)){
        if(groupGrid->button(id)->text() != ""){
            enableBtn(groupInput->button(10));
        }
        groupGrid->button(id)->setStyleSheet("background-color: #BEBEBE; border: 0px; border-color: #000000; color: blue; font-size: 16px;");
        selectedX = (id%9 != 0 ? id/9 : id/9-1);
        selectedY = (id%9 != 0 ? id%9-1 : 8);
        std::vector<int> possibleValues =  m.getPossibleNumbers(selectedX,selectedY);
        for(std::vector<int>::iterator it = possibleValues.begin(); it != possibleValues.end(); ++it) {
            enableBtn(groupInput->button(*it));
        }
        selectedBtn = groupGrid->button(id);
    }
    else{
        selectedBtn = 0;
    }

}

void MainWindow::onGroupInputClicked(int id)
{
    if(selectedBtn != 0){
        if(id == 10){
            selectedBtn->setText("");
            m.setValue(selectedX,selectedY,0);
            disableBtn(groupInput->button(10));
            std::vector<int> possibleValues =  m.getPossibleNumbers(selectedX,selectedY);
            for(std::vector<int>::iterator it = possibleValues.begin(); it != possibleValues.end(); ++it) {
                enableBtn(groupInput->button(*it));
            }
        }
        else{
            selectedBtn->setText(QString::number(id));
            m.setValue(selectedX,selectedY,id);
            disableBtn(groupInput->button(id));
            enableBtn(groupInput->button(10));
            m.tryCount++;
            ui->label_tryCount->setText("Count : "+QString::number(m.tryCount));
        }
    }
    updatePosibilities();
    if(m.isOver()){
        QMessageBox msgBox;
            msgBox.setText("You won in "+QString::number(m.tryCount)+" try");
            msgBox.setWindowTitle("Victory!");
            msgBox.exec();
        onOpenNewGameClicked();
    }
}

void MainWindow::onLevelSwitched(const QString& base)
{
    if(base == "Easy") m.level = 0;
    if(base == "Medium") m.level = 1;
    if(base == "Hard") m.level = 2;
    if(base == "Insane") m.level = 3;
    onOpenNewGameClicked();
}

void MainWindow::onOpenNewGameClicked()
{
    m.startNewGame();
    m.tryCount = 0;
    ui->label_tryCount->setText("Count : "+QString::number(m.tryCount));
    ui->label_nbGrid->setText(QString("Grid #")+QString::number(m.getGridNumber()));
    int id = 1;
    int val;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            val = m.getValue(i,j);
            groupGrid->button(id)->setStyleSheet("color: black; background-color: #ffffff; border: 0px; border-color: #000000; font-size: 16px;");
            if(val != 0){
                groupGrid->button(id)->setText(QString::number(val));
                groupGrid->button(id)->setDisabled(true);
            }
            else{
                groupGrid->button(id)->setText("");
                groupGrid->button(id)->setDisabled(false);
                groupGrid->button(id)->setStyleSheet("background-color: #ffffff; border: 0px; border-color: #000000; color: blue; font-size: 16px;");
            }
            id++;
        }
    }
    updatePosibilities();
}

void MainWindow::updatePosibilities()
{
    std::vector<int> singleValues =  m.getSinglePosibilities();
    for(std::vector<int>::iterator it = singleValues.begin(); it != singleValues.end(); ++it) {
        if(highlight)
            groupGrid->button(1+*it)->setStyleSheet("background-color: #d5ffba; border: 0px; border-color: #000000; font-size: 16px;");
        else
            groupGrid->button(1+*it)->setStyleSheet("background-color: #ffffff; border: 0px; border-color: #000000; font-size: 16px;");
    }
    std::vector<int> noValues =  m.getNoPosibilities();
    for(std::vector<int>::iterator it = noValues.begin(); it != noValues.end(); ++it) {
        groupGrid->button(1+*it)->setStyleSheet("background-color: #f7bbbb; border: 0px; border-color: #000000; font-size: 16px;");
    }
}

void MainWindow::on_actionHighlight_single_possibilities_toggled(bool arg1)
{
    highlight = arg1;
    updatePosibilities();
}

void MainWindow::closeEvent (QCloseEvent *event)
{
    if(m.tryCount > 0){
        QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Sudoku",
                                                                    tr("Do you want to save your current grid?\n"),
                                                                    QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                                                    QMessageBox::Yes);
        if (resBtn == QMessageBox::Cancel) {
            event->ignore();
        } else {
            if (resBtn == QMessageBox::Yes) {
                m.saveGame();
            }
            else{
                remove( "./Save/Save.grid" );
            }
            event->accept();
        }
    }
    else{
        event->accept();
    }
}

void MainWindow::loadPreviousGame()
{

    ui->label_nbGrid->setText(QString("Grid #")+QString::number(m.getGridNumber()));
    int id = 1;
    int val;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            val = m.getValue(i,j);
            groupGrid->button(id)->setDisabled(false);
            groupGrid->button(id)->setStyleSheet("background-color: #ffffff; border: 0px; border-color: #000000; color: blue; font-size: 16px;");
            if(val != 0){
                groupGrid->button(id)->setText(QString::number(val));
            }
            else{
                groupGrid->button(id)->setText("");
            }
            id++;
        }
    }

    std::vector<int> initialValue = m.loadInitialState();
    for(std::vector<int>::iterator it = initialValue.begin(); it != initialValue.end(); ++it) {
        groupGrid->button(1+*it)->setStyleSheet("color: black; background-color: #ffffff; border: 0px; border-color: #000000; font-size: 16px;");
        groupGrid->button(1+*it)->setDisabled(true);
    }
    updatePosibilities();
}

void MainWindow::on_actionRestart_this_game_triggered()
{
    m.reloadGame();
    m.tryCount = 0;
    ui->label_tryCount->setText("Count : "+QString::number(m.tryCount));
    ui->label_nbGrid->setText(QString("Grid #")+QString::number(m.getGridNumber()));
    int id = 1;
    int val;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            val = m.getValue(i,j);
            groupGrid->button(id)->setStyleSheet("color: black; background-color: #ffffff; border: 0px; border-color: #000000; font-size: 16px;");
            if(val != 0){
                groupGrid->button(id)->setText(QString::number(val));
                groupGrid->button(id)->setDisabled(true);
            }
            else{
                groupGrid->button(id)->setText("");
                groupGrid->button(id)->setDisabled(false);
                groupGrid->button(id)->setStyleSheet("background-color: #ffffff; border: 0px; border-color: #000000; color: blue; font-size: 16px;");
            }
            id++;
        }
    }
    updatePosibilities();
}

void MainWindow::initBtn()
{
    ui->inputButton1->setShortcut(QKeySequence(Qt::Key_1));
    ui->inputButton2->setShortcut(QKeySequence(Qt::Key_2));
    ui->inputButton3->setShortcut(QKeySequence(Qt::Key_3));
    ui->inputButton4->setShortcut(QKeySequence(Qt::Key_4));
    ui->inputButton5->setShortcut(QKeySequence(Qt::Key_5));
    ui->inputButton6->setShortcut(QKeySequence(Qt::Key_6));
    ui->inputButton7->setShortcut(QKeySequence(Qt::Key_7));
    ui->inputButton8->setShortcut(QKeySequence(Qt::Key_8));
    ui->inputButton9->setShortcut(QKeySequence(Qt::Key_9));
    ui->inputButtonX->setShortcut(QKeySequence(Qt::Key_X));

    groupGrid = new QButtonGroup(this);
    groupGrid->addButton(ui->pushButton1,1);
    groupGrid->addButton(ui->pushButton2,2);
    groupGrid->addButton(ui->pushButton3,3);
    groupGrid->addButton(ui->pushButton4,4);
    groupGrid->addButton(ui->pushButton5,5);
    groupGrid->addButton(ui->pushButton6,6);
    groupGrid->addButton(ui->pushButton7,7);
    groupGrid->addButton(ui->pushButton8,8);
    groupGrid->addButton(ui->pushButton9,9);
    groupGrid->addButton(ui->pushButton10,10);
    groupGrid->addButton(ui->pushButton11,11);
    groupGrid->addButton(ui->pushButton12,12);
    groupGrid->addButton(ui->pushButton13,13);
    groupGrid->addButton(ui->pushButton14,14);
    groupGrid->addButton(ui->pushButton15,15);
    groupGrid->addButton(ui->pushButton16,16);
    groupGrid->addButton(ui->pushButton17,17);
    groupGrid->addButton(ui->pushButton18,18);
    groupGrid->addButton(ui->pushButton19,19);
    groupGrid->addButton(ui->pushButton20,20);
    groupGrid->addButton(ui->pushButton21,21);
    groupGrid->addButton(ui->pushButton22,22);
    groupGrid->addButton(ui->pushButton23,23);
    groupGrid->addButton(ui->pushButton24,24);
    groupGrid->addButton(ui->pushButton25,25);
    groupGrid->addButton(ui->pushButton26,26);
    groupGrid->addButton(ui->pushButton27,27);
    groupGrid->addButton(ui->pushButton28,28);
    groupGrid->addButton(ui->pushButton29,29);
    groupGrid->addButton(ui->pushButton30,30);
    groupGrid->addButton(ui->pushButton31,31);
    groupGrid->addButton(ui->pushButton32,32);
    groupGrid->addButton(ui->pushButton33,33);
    groupGrid->addButton(ui->pushButton34,34);
    groupGrid->addButton(ui->pushButton35,35);
    groupGrid->addButton(ui->pushButton36,36);
    groupGrid->addButton(ui->pushButton37,37);
    groupGrid->addButton(ui->pushButton38,38);
    groupGrid->addButton(ui->pushButton39,39);
    groupGrid->addButton(ui->pushButton40,40);
    groupGrid->addButton(ui->pushButton41,41);
    groupGrid->addButton(ui->pushButton42,42);
    groupGrid->addButton(ui->pushButton43,43);
    groupGrid->addButton(ui->pushButton44,44);
    groupGrid->addButton(ui->pushButton45,45);
    groupGrid->addButton(ui->pushButton46,46);
    groupGrid->addButton(ui->pushButton47,47);
    groupGrid->addButton(ui->pushButton48,48);
    groupGrid->addButton(ui->pushButton49,49);
    groupGrid->addButton(ui->pushButton50,50);
    groupGrid->addButton(ui->pushButton51,51);
    groupGrid->addButton(ui->pushButton52,52);
    groupGrid->addButton(ui->pushButton53,53);
    groupGrid->addButton(ui->pushButton54,54);
    groupGrid->addButton(ui->pushButton55,55);
    groupGrid->addButton(ui->pushButton56,56);
    groupGrid->addButton(ui->pushButton57,57);
    groupGrid->addButton(ui->pushButton58,58);
    groupGrid->addButton(ui->pushButton59,59);
    groupGrid->addButton(ui->pushButton60,60);
    groupGrid->addButton(ui->pushButton61,61);
    groupGrid->addButton(ui->pushButton62,62);
    groupGrid->addButton(ui->pushButton63,63);
    groupGrid->addButton(ui->pushButton64,64);
    groupGrid->addButton(ui->pushButton65,65);
    groupGrid->addButton(ui->pushButton66,66);
    groupGrid->addButton(ui->pushButton67,67);
    groupGrid->addButton(ui->pushButton68,68);
    groupGrid->addButton(ui->pushButton69,69);
    groupGrid->addButton(ui->pushButton70,70);
    groupGrid->addButton(ui->pushButton71,71);
    groupGrid->addButton(ui->pushButton72,72);
    groupGrid->addButton(ui->pushButton73,73);
    groupGrid->addButton(ui->pushButton74,74);
    groupGrid->addButton(ui->pushButton75,75);
    groupGrid->addButton(ui->pushButton76,76);
    groupGrid->addButton(ui->pushButton77,77);
    groupGrid->addButton(ui->pushButton78,78);
    groupGrid->addButton(ui->pushButton79,79);
    groupGrid->addButton(ui->pushButton80,80);
    groupGrid->addButton(ui->pushButton81,81);

    groupInput = new QButtonGroup(this);
    groupInput->addButton(ui->inputButton1,1);
    groupInput->addButton(ui->inputButton2,2);
    groupInput->addButton(ui->inputButton3,3);
    groupInput->addButton(ui->inputButton4,4);
    groupInput->addButton(ui->inputButton5,5);
    groupInput->addButton(ui->inputButton6,6);
    groupInput->addButton(ui->inputButton7,7);
    groupInput->addButton(ui->inputButton8,8);
    groupInput->addButton(ui->inputButton9,9);
    groupInput->addButton(ui->inputButtonX,10);
}
