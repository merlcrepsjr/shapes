/* 
 * File:   main.cpp
 * Author: merlcrepsjr
 *
 * Created on May 27, 2013, 6:27 PM
 */

#include <cstdlib>
#include <stdio.h>
#include "Square.h"
#include "Circle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Hello\n");
    
    Square s;
    s.setFill(true);
    s.setCols(10);
    s.setRows(5);
    s.toString();
    
    Circle c;
    c.setRadius(1.0);
    c.setFilled(false);
    c.toString();
    
    return 0;
}

