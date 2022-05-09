//
// Created by Marco di Fresco on 07/05/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tetrisFigure.h"
#include "tetrisField.h"
#include "gameManager.h"

char secondPosition(){
    char charPosY;
    printf("\nInsert Y position:\n");
    scanf("%c", &charPosY);
    return charPosY;
}

int* addPosition(int maxPosition){
    //TODO: a != A, va risolto, se non mette la virgola va risolto, se esce dallo spazio lancia segmentation fault
    int flag = 0;
    char charPosX = 0;
    char charPosY = 0;
    int posX = 0;
    int posY = 0;

    char a[3];
    printf("\nInsert position: like -> 1,2\n");
    scanf("%s", &a);
    charPosX = a[0];
    charPosY = a[2];
    printf("char posx=%d, char posy=%d\n",charPosX,charPosY);

    if(((charPosX>=49 && charPosX <=57) || (charPosX>=65 && charPosX<=90)) && ((charPosY>=49 && charPosY <=57)
    || (charPosY>=65 && charPosY<=90))){

        if (charPosX>=65 && charPosX<=90){
            posX = charPosX-55;
        }
        else if (charPosX>=49 && charPosX <=57){
            posX = charPosX-49;
        }
        if (charPosY>=65 && charPosY<=90){
            posY = charPosY-55;
        }
        else if (charPosY>=49 && charPosY <=57){
            posY = charPosY-49;
        }
        printf("posX = %d, posY = %d",posX,posY);
        if (posX<= maxPosition && posY<= maxPosition){
            int res []= {posX,posY};
            return res;
        }
        else{
            printf("\nWrong position, pick another oneeeeee!");
            return addPosition(maxPosition);
        }
    }
    else{
        printf("\nWrong position, pick another one!");
        return addPosition(maxPosition);
    }
}

void addFigure(field gameField, figure gameFigure){
    int *position = addPosition(gameField->size-3);
    int posX = position[0];
    int posY = position[1];
    printf("posx = %d, posy = %d\n",posX,posY);
    for (int i=0; i<FIGURE_SIZE; i++){
        for (int j=0; j<FIGURE_SIZE; j++){
            if (gameFigure->mat[i][j]){
                if (gameField->mat[posX+i][posY+j] == EMPTY){
                    gameField->mat[posX+i][posY+j] = FULL;
                }
                else {
                    printf("ERROR BRUH!\n");
                    addFigure(gameField,gameFigure);
                }
            }
        }
    }
}