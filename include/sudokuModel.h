/**
 * @authors BASS Yannick & DURAND Valentin
 * ENSICAEN 2017
 */

#include <vector>
#include <iostream>
#include <algorithm>

#ifndef SUDOKUMODEL_H
#define SUDOKUMODEL_H



class SudokuModel{

private:
    int sudokuGrid[9][9];
    int gridNumber;
public:
    /**
     * @brief  Récupère les valeurs possibles d'une case de la grille
     * @param  Abscisse de la case voulu
     * @param  Ordonnée de la case voulu
     * @return Valeurs possibles de la case
     */
    std::vector<int> getPossibleNumbers(int,int);
    SudokuModel();
    /**
     * @brief  Récupère la valeur d'une case de la grille
     * @param  Abscisse de la case voulu
     * @param  Ordonnée de la case voulu
     * @return Valeur de la case
     */
    int getValue(int x, int y);
    /**
     * @brief  Modifie la valeur d'une case de la grille
     * @param  Abscisse de la case
     * @param  Ordonnée de la case
     * @param  Valeur de la case
     */
    void setValue(int x, int y, int value);
    /**
     * @brief lance une nouvelle partie dans la difficulté selectionnée
     */
    void startNewGame();
    /**
     * @brief Recupere le numero de la grille
     * @return le numero de la grille
     */
    int getGridNumber();
    /**
     * @brief Cherche les cases n'ayant plus qu'une seule valeur possibles
     * @return Le numero des cases ne possedant plus qu'une seule valeur valide
     */
    std::vector<int> getSinglePosibilities();
    /**
     * @brief Cherche les cases n'ayant plus de valeurs possibles
     * @return Le numero des cases ne possedant plus de possibilité valide
     */
    std::vector<int> getNoPosibilities();
    /**
     * @brief Test si la grille est complete
     * @return Vrai si la grille est complete
     */
    bool isOver();
    /**
     * @brief sauvegarde l'état courant du sudoku
     */
    void saveGame();
    /**
     * @brief charge la grille sauvegardée précedement
     * @return vrai si une grille a été sauvegardée précedement
     */
    bool loadGame();
    /**
     * @brief retourne le niveau de difficulté de la grille
     * @return la difficulté de la grille
     */
    int getLevel();
    int tryCount;
    int level;
    /**
     * @brief Permet de recupérer la position de toutes les cases pré-saisies de la grille courante
     * @return un vecteur contenant les différentes positions des cases initiales
     */
    std::vector<int> loadInitialState();
    void reloadGame();
};




#endif // SUDOKUMODEL_H
