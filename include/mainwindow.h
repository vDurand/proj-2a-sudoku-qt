/**
 * @authors BASS Yannick & DURAND Valentin
 * ENSICAEN 2017
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QAbstractButton>
#include "sudokuModel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /**
     * @brief Actualise le style des cases ne possedant plus qu'une seule ou aucune possibilité
     * @param Numero de la grille
     */
    void updatePosibilities();
    void closeEvent (QCloseEvent *event);

private slots:
    /**
     * @brief selectionne une case et affiche les valeurs possibles sur les boutons de gauches
     */
    void onGroupGridClicked(int);
    /**
     * @brief Remplis la case selectionné avec la valeur choisi
     * @param id du bouton contenant la valeur à inscrire dans la case
     */
    void onGroupInputClicked(int);
    /**
     * @brief change le niveau de difficulté et charge une grille aléatoire de cette difficulté
     * @param difficulté choisi
     */
    void onLevelSwitched(const QString& base);
    /**
     * @brief charge une grille aléatoire du niveau de difficulté choisi
     */
    void onOpenNewGameClicked();
    /**
     * @brief active ou desactive le hightlight des cases ayant une seule ou aucune possibilité
     * @param arg1 valeur de l'option
     */
    void on_actionHighlight_single_possibilities_toggled(bool arg1);
    void loadPreviousGame();
    void initBtn();

    void on_actionRestart_this_game_triggered();

private:
    Ui::MainWindow *ui;
    QButtonGroup* groupGrid;
    QButtonGroup* groupInput;
    QAbstractButton* selectedBtn;
    SudokuModel m;
    int selectedX,selectedY;
    bool highlight;
};

#endif // MAINWINDOW_H
