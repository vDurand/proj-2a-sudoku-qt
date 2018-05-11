/**
 * @authors BASS Yannick & DURAND Valentin
 * ENSICAEN 2017
 */

#include "sudokuModel.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <QFile>
#include <QTextStream>

std::vector<int> SudokuModel::getPossibleNumbers(int line,int column)
{
    std::vector<int> possibleValues = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for(int i=0;i<9;i++)
    {
        possibleValues.erase( std::remove( possibleValues.begin(), possibleValues.end(), sudokuGrid[i][column] ), possibleValues.end() );

    }

    for(int i=0;i<9;i++)
    {
        possibleValues.erase( std::remove( possibleValues.begin(), possibleValues.end(), sudokuGrid[line][i] ), possibleValues.end() );

    }

    for(int i=line-(line%3);i<line-(line%3)+3;i++)
    {
        for(int j=column-(column%3);j<column-(column%3)+3;j++)
        {
            possibleValues.erase( std::remove( possibleValues.begin(), possibleValues.end(), sudokuGrid[i][j] ), possibleValues.end() );
        }

    }
    return possibleValues;
}

void print(const std::vector<int> &vec)
{
  for (const auto& i: vec)
    std::cout << i << ' ';
  std::cout << std::endl;
}

SudokuModel::SudokuModel()
{
}

void SudokuModel::startNewGame()
{
    QString path = ":/grids/Easy.txt";
    switch(level) {
    case 1:
      path = ":/grids/Medium.txt";
      break;
    case 2:
      path = ":/grids/Hard.txt";
      break;
    case 3:
      path = ":/grids/Insane.txt";
      break;
    }

    QFile file(path);
    if(file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream in(&file);
        int nbGrid;
        in>>nbGrid;

        gridNumber = rand()%(nbGrid)+1;

        for(int i = 0; i < gridNumber; i++){
            in.readLine();
        }

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++){
                in>>sudokuGrid[i][j];
            }
        }
    }
    //print(getSinglePosibilities());
}

std::vector<int> SudokuModel::loadInitialState()
{
    QString path = ":/grids/Easy.txt";
    switch(level) {
    case 1:
      path = ":/grids/Medium.txt";
      break;
    case 2:
      path = ":/grids/Hard.txt";
      break;
    case 3:
      path = ":/grids/Insane.txt";
      break;
    }

    std::vector<int> v;
    QFile file(path);
    if(file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream in(&file);
        int temp;
        in>>temp;

        for(int i = 0; i < gridNumber; i++){
            in.readLine();
        }

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++){
                in>>temp;
                if(temp!=0)
                   v.insert(v.begin(),(i*9)+j);
            }
        }

    }
    return v;
}



int SudokuModel::getGridNumber()
{
    return gridNumber;
}

int SudokuModel::getValue(int x, int y)
{
    return sudokuGrid[x][y];
}

void SudokuModel::setValue(int x, int y, int value)
{
    sudokuGrid[x][y] = value;
}

std::vector<int> SudokuModel::getNoPosibilities()
{
    std::vector<int> v;
    std::vector<int> temp;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(sudokuGrid[i][j]==0)
            {
                temp=getPossibleNumbers(i,j);
                if(temp.size()==0)
                {
                    v.insert(v.begin(),(i*9)+j);
                }
            }
        }
    }
    return v;
}

std::vector<int> SudokuModel::getSinglePosibilities()
{
    std::vector<int> v;
    std::vector<int> temp;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(sudokuGrid[i][j]==0)
            {
                temp=getPossibleNumbers(i,j);
                if(temp.size()==1)
                {
                    v.insert(v.begin(),(i*9)+j);
                }
            }
        }
    }
    return v;
}
bool SudokuModel::isOver()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(sudokuGrid[i][j]==0)
                return false;


        }

    }
    return true;

}

void SudokuModel::saveGame()
{
    std::cout << "wrting file" << std::endl;
    std::ofstream writefile;
    writefile.open("./Save/Save.grid");
    writefile << level << "\n";
    writefile << gridNumber << "\n";
    writefile << tryCount << "\n";
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
            writefile << sudokuGrid[i][j] << " ";
        }
    }
    writefile.close();
}

bool SudokuModel::loadGame()
{
    std::ifstream file("./Save/Save.grid", std::ios::in);  // on ouvre le fichier en lecture

    if(file)  // si l'ouverture a réussi
    {
        file>>level;
        file>>gridNumber;
        file>>tryCount;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++){
                file>>sudokuGrid[i][j];
            }
        }
        file.close();
        return true;
    }

    file.close();
    return false;
}

void SudokuModel::reloadGame()
{
    QString path = ":/grids/Easy.txt";
    switch(level) {
    case 1:
      path = ":/grids/Medium.txt";
      break;
    case 2:
      path = ":/grids/Hard.txt";
      break;
    case 3:
      path = ":/grids/Insane.txt";
      break;
    }

    QFile file(path);
    if(file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream in(&file);
        int temp;
        in>>temp;

        for(int i = 0; i < gridNumber; i++){
            in.readLine();
        }

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++){
                in>>sudokuGrid[i][j];
            }
        }

    }
}
