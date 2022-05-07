//
// Created by Marco di Fresco on 07/05/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tetrisFigure.h"
#include "tetrisField.h"
#include "gameManager.h"

int* addPosition(int maxPosition){
    int flag = 0;
    char charPosX;
    char charPosY;
    int posX;
    int posY;
    while (!flag){
        printf("\nInsert X position:");
        scanf("%c", &charPosX);
        printf("\nInsert Y position:");
        scanf("%c", &charPosY);
        if(((charPosX>=65 && charPosX <=90) || (charPosX>=97 && charPosX<=122)) && ((charPosY>=65 && charPosY <=90)
        || (charPosY>=97 && charPosY<=122))){

            if (charPosX>=97 && charPosX<=122){
                posX = charPosX-97;
            }
            else{
                posX = charPosX-65;
            }
            if (charPosY>=97 && charPosY<=122){
                posY = charPosY-97;
            }
            else{
                posY = charPosY-65;
            }
            if (posX<= maxPosition && posY<= maxPosition){
                flag = 1;
            }
            else{
                printf("\nWrorng position, pick another one!");
            }
        }
    }
    int res []= {posX,posY};
    return res;
}

void addFigure(field gameField, figure gameFigure){
    int *position = addPosition(gameField->size-3);
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