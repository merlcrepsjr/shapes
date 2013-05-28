/* 
 * File:   Circle.h
 * Author: merlcrepsjr
 *
 * Created on May 27, 2013, 9:14 PM
 */

#ifndef CIRCLE_H
#define	CIRCLE_H

class Circle {
public:
    Circle();
    Circle(const Circle& orig);
    virtual ~Circle();
    
    void setRadius(float);
    float getRadius();
    
    void setFilled(bool);
    bool isFilled();
    
    void toString();
    
    double radius;
    bool filled;
private:

};

#endif	/* CIRCLE_H */

