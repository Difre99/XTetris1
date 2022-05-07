//
// Created by Marco di Fresco on 07/05/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tetrisFigure.h"
#include "tetrisField.h"
#include "gameManager.h"

void addFigure(field gameField, figure gameFigure){
    int posX = 2;
    int posY = 2;
    for (int i=0; i<FIGURE_SIZE; i++){
        for (int j=0; j<FIGURE_SIZE; j++){
            if (gameFigure->mat[i][j]){
                if (gameField->mat[posX+i][posY+j] == EMPTY){
                    gameField->mat[posX+i][posY+j] = FULL;
                }
                else {
                    printf("ERROR BRUH!");
                }
            }
        }
    }
}