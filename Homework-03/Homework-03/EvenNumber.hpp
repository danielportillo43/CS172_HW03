//
//  EvenNumber.hpp
//  Homework-03
//
//  Created by Daniel Portillo on 9/29/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef EvenNumber_hpp
#define EvenNumber_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class EvenNumber {
    int value;
    
    EvenNumber(){
        value = 0;
    }
    
    int getValue() {
        return value;
    }
    
    int getNext(int next) {
        next = value + 2;
        return next;
        
    }
};


#endif /* EvenNumber_hpp */
