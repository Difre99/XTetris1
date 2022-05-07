//
// Created by Marco di Fresco on 05/05/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tetrisFigure.h"
#include "tetrisField.h"



void printFigure(figure currentFigure){
    printf("printField\n");
    for (int i=0; i<FIGURE_SIZE; i++){
        for(int j=0; j<FIGURE_SIZE; j++){
            printf("%c",currentFigure->mat[i][j]);
        }
        printf("\n");
    }
}

figure allocFigure(){
    printf("create figure\n");

    figure newFigure = (figure)(malloc(sizeof (struct figure)));
    newFigure -> mat = (char**)(malloc(sizeof (char*)*FIGURE_SIZE));
    for (int i=0; i<FIGURE_SIZE; i++){
        newFigure -> mat[i] = (char*)(malloc(sizeof (char)*FIGURE_SIZE));
    }

    for (int i=0; i<FIGURE_SIZE; i++){
        for(int j=0; j<FIGURE_SIZE; j++){
            newFigure -> mat[i][j] = EMPTY;
        }
    }
    return newFigure;
}
//FIGURE I
//
//
//
//****
figure createFigureI (){
    figure figureI = allocFigure();
    figureI -> figure = 'I';
    for (int i=0; i<FIGURE_SIZE; i++){
        figureI -> mat [FIGURE_SIZE-1][i] = FULL;
    }
    return figureI;
}

//FIGURE L
//
//
//*
//***
figure createFigureL (){
    figure figureL = allocFigure();
    for (int i=0; i<FIGURE_SIZE-1; i++){
        figureL -> mat [FIGURE_SIZE-1][i] = FULL;
    }
    figureL -> mat[2][0] = FULL;
    return figureL;
}
//FIGURE J
//
//
//   *
// ***
figure createFigureJ (){
    figure figureJ = allocFigure();
    for (int i=0; i<FIGURE_SIZE-1; i++){
        figureJ -> mat [FIGURE_SIZE-1][i] = FULL;
    }
    figureJ -> mat[2][0] = FULL;
    return figureJ;
}

//FIGURE O
//
//
//**
//**
figure createFigureO (){
    figure figureO = allocFigure();
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            figureO -> mat [FIGURE_SIZE-i-1][j] = FULL;
        }
    }
    return figureO;
}
////MANCANO FIGURE S T Z
//figure createFigureS (){
//    figure figureO = allocFigure();
//    for (int i=0; i<2; i++){
//        for (int j=0; j<2; j++){
//            figureO -> mat [FIGURE_SIZE-i-1][j] = FULL;
//        }
//    }
//    return figureO;
//}

