/* 
 * File:   Square.cpp
 * Author: merlcrepsjr
 * 
 * Created on May 27, 2013, 6:29 PM
 */

#include "Square.h"
#include <stdio.h>

Square::Square() {
    printf("Square Initialized\n");
    
    
}

Square::Square(const Square& orig) {
}

Square::~Square() {
    
}

bool::Square::isFilled(){
    return filled;
}

void::Square::setFill(bool fill){
    this->filled = fill;
}

void::Square::setRows(int r){
    this->rows = r;
}

int::Square::getRows(){
    return this->rows;
}

void::Square::setCols(int c){
    this->columns = c;
}

int::Square::getCols(){
    return this->columns;
}

void::Square::toString(){
    printf("---------SQUARE---------\n");
    if ( this->filled == true){
        printf("Filled: YES\n");
    }
    else{
        printf("Filled: NO\n");
    }
    printf("Number of Rows: %i\n", this->rows);
    printf("Number of Rows: %i\n", this->columns);
}

