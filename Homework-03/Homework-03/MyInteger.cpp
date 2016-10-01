//
//  MyInteger.cpp
//  Homework-03
//
//  Created by Daniel Portillo on 9/30/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "MyInteger.hpp"

int main()
{
    MyInteger n1(5);
    cout << "n1 is even? " << n1.isEven() << endl;
    cout << "n1 is prime? " << n1.isPrime() << endl;
    cout << "5 is prime? " << MyInteger::isPrime(5) << endl;
}
