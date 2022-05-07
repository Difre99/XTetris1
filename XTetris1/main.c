#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tetrisField.h"
#include "tetrisFigure.h"
#include "gameManager.h"

////START TETRIS FIELD

////END TETRIS FIELD

int main() {

    ////TEST TETRIS FIELD
    field newField = allocField();
    printField(newField);
    //cleanField(&newField);
    //printField(newField);

    ////TEST TETRIS FIGURE
    figure randomFigure = createFigureO();
    printFigure(randomFigure);

    ////TEST GAME MANAGER
    addFigure(newField,randomFigure);
    printField(newField);
    return 0;
}
