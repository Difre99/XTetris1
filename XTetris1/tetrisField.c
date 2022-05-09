//
// Created by Marco di Fresco on 05/05/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tetrisField.h"
//


int setSize(){
    //TODO: -Manca logica input
    return 25;
}

void printField(field currentField){
    printf("printField\n");
    for (int i=0; i<currentField->size; i++){
        for(int j=0; j<currentField->size; j++){
            printf("%c",currentField->mat[i][j]);
        }
        printf("\n");
    }
}

void addNumbers (field *newField){
    printf("addNumbers\n");
    char letterX = '1';
    char letterY = '1';
    for (int i=0; i<(*newField)->size; i++){
        for(int j=0; j<(*newField)->size; j++){
            if (i==(*newField)->size-1 && j>0 && j<(*newField)->size-1){
                if (letterX==58){
                    letterX = 65;
                }
                (*newField) -> mat[i][j] = letterX++;
            }
            if(j==0 && i>0 && i<(*newField)->size-2){
                if (letterY==58){
                    letterY = 65;
                }
                (*newField) -> mat[i][j] = letterY++;
            }
        }
    }
}

field allocField(){
    printf("create field\n");
    int dim = setSize();
    field newField = (field)(malloc(sizeof (struct field)));
    newField -> size = dim;
    newField -> mat = (char**)(malloc(sizeof (char*)*dim));
    for (int i=0; i<newField -> size; i++){
        newField -> mat[i] = (char*)(malloc(sizeof (char)*dim));
    }
    for (int i=0; i<newField->size; i++){
        for(int j=0; j<newField->size; j++) {
            if ((i>=0 && i<=newField->size-2 && (j==1 || j==newField->size-1)) || (j>0 && (i==0 ||
            i==newField->size-2)))
                newField->mat[i][j] = WALL;
            else {
                newField->mat[i][j] = EMPTY;
            }
        }
    }
    addNumbers(&newField);
    return newField;
}

void cleanField(field *newField){
    printf("cleanField\n");
    for (int i=0; i<(*newField)->size; i++){
        for(int j=0; j<(*newField)->size; j++){
            if (i==1 || i==(*newField) -> size-1 || j==1 || j==(*newField) -> size-1)
                (*newField) -> mat[i][j] = WALL;
            else if (i==0 || j==0 ){
                (*newField) -> mat[i][j] =(char) i+j;
            }
            else
                (*newField) -> mat[i][j] = EMPTY;
        }
    }
}


