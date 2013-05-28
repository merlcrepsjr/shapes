/* 
 * File:   Circle.cpp
 * Author: merlcrepsjr
 * 
 * Created on May 27, 2013, 9:14 PM
 */

#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
}

Circle::Circle(const Circle& orig) {
}

Circle::~Circle() {
}

void::Circle::toString(){
    printf("---------CIRCLE---------\n");
    if ( this->filled == true){
        printf("Filled: Yes\n");
    }
    else{
        printf("Filled: No\n");
    }
    printf("Radius: %f\n", this->radius);
}


void::Circle::setRadius(float r){
    this->radius = r;
}

float::Circle::getRadius(){
    return this->radius;
}

bool::Circle::isFilled(){
    return this->filled;
}

void::Circle::setFilled(bool fill){
    this->filled = fill;
}
