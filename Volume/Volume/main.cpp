//
//  main.cpp
//  Volume
//
//  Created by Robert Gaines on 10/29/18.
//  Copyright © 2018 Robert Gaines. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

double mass =0;
double density =0;
double volume =0;
int main() {
    // insert code here...
    cout << "Enter Mass of object: ";
    cin>>mass;
    cout<< "Enter the density now: ";
    cin>>density;
    
    volume = mass/density;
    
    cout << fixed << setprecision(2) << "The volume of the object is: " << volume << " cm^3\n";
    
    return 0;
}
