//
// Created by Marco di Fresco on 05/05/22.
//

#ifndef XTETRIS1_TETRISFIGURE_H
#define XTETRIS1_TETRISFIGURE_H

#define FIGURE_SIZE 4
#define FIGURE_I 'I'
#define FIGURE_J 'J'
#define FIGURE_L 'L'
#define FIGURE_O 'O'
#define FIGURE_S 'S'
#define FIGURE_T 'T'
#define FIGURE_Z 'Z'



typedef struct figure{
    char **mat;
    char figure;
    int rotation;
}*figure;

void printFigure(figure currentFigure);

figure allocFigure();

figure createFigureI();
/**
 * crea figura I, funziona
 * @return figure
 */

figure createFigureL();
/**
 * crea figura I, funziona
 * @return figure
 */

figure createFigureJ();

figure createFigureO();
/**
 * crea figura O, funziona
 * @return figure
 */

figure createFigureS();

figure createFigureT();

figure createFigureZ();

#endif //XTETRIS1_TETRISFIGURE_H
