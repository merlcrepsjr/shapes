/* 
 * File:   Square.h
 * Author: merlcrepsjr
 *
 * Created on May 27, 2013, 6:29 PM
 */

#ifndef SQUARE_H
#define	SQUARE_H

class Square {
public:
    Square();
    Square(const Square& orig);
    virtual ~Square();
    bool isFilled();
    void setFill(bool);
    
    void setRows(int);
    int getRows();
    
    void setCols(int);
    int getCols();
    
    void toString();
    
    int rows, columns;
    bool filled;
    
private:

};

#endif	/* SQUARE_H */

