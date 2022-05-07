//
// Created by Marco di Fresco on 05/05/22.
//

#ifndef XTETRIS1_TETRISFIELD_H
#define XTETRIS1_TETRISFIELD_H

#define WALL  '@'
#define EMPTY ' '
#define FULL '*'

typedef struct field{
    char **mat;
    int size;
}*field;


int setSize();

void printField(field currentField);

field allocField();

void addNumbers (field *newField);

void cleanField(field *newField);
#endif //XTETRIS1_TETRISFIELD_H

