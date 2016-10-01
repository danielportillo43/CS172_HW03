//
//  Algebra.hpp
//  Homework-03
//
//  Created by Daniel Portillo on 9/28/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef Algebra_hpp
#define Algebra_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation { // the private variables are defined in the class here...
    int a;
    int b;
    int c;
    
public:
    QuadraticEquation() {
    
    }
    // get functions for a, b, c
    int getA() {
        return a;
    }
    
    int getB() {
        return b;
    }
    
    int getC() {
        return c;
    }
    // creates the discriminant
    double getDiscriminant() {
        return b * b - 4 * a * c;
    }
    // find roots 1 and 2
    double getRoot1() {
        if (getDiscriminant() < 0) {
            return 0;
        }
        else {
            return (-b + sqrt(getDiscriminant())) / (2 * a);
        }
    }
    
    double getRoot2() {
        if (getDiscriminant() < 0)
            return 0;
        else {
            return (-b - sqrt(getDiscriminant())) / (2 * a);
        }
    }
};

#endif /* Algebra_hpp */