//
//  Fan.hpp
//  Homework-03
//
//  Created by Daniel Portillo on 9/28/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Fan_hpp
#define Fan_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Fan {
    // these are private varibles
    int speed;
    bool on;
    double radius;
public:
    Fan() { // default constructor
        speed = 1;
        on = false;
        radius = 5;
    }
    
    int getSpeed() { // get function for speed
        return speed;
    }
    
    void setSpeed(int hold) { // set function for speed
        speed = hold;
    }
    
    char isOn() { // get function for on/off returns "Y" or "N"
        char onOff;
        if (on == true) {
            onOff = 'Y';
        }
        else {
            onOff = 'N';
        }
        return onOff;
    }
    
    void setOn(bool indicator) { // set function for on
        on = indicator;
    }
    
    double getRadius() { // get function for radius
        return radius;
    }
    
    void setRadius(double hold) { // set function for radius
        radius = hold;
    }
};

#endif /* Fan_hpp */
