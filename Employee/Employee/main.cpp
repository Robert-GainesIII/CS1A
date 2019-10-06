//
//  main.cpp
//  Employee
//
//  Created by Robert Gaines on 10/29/18.
//  Copyright © 2018 Robert Gaines. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

string first, last;
double salary;
double increase;

string fileLoc = "/Users/robertgaines/Desktop/Devolpment/CS1A/CS1AHW/Weight/";

ifstream inFile;
ofstream outFile;

int main() {
    

        inFile.open(fileLoc + "CH3_Ex5Data.txt");
        outFile.open(fileLoc + "CH3_Ex5Output.txt");
    
    for(int i = 0; i < 3; i++){
        inFile >> first >> last >> salary >> increase;
        salary = salary + (salary * increase);
        outFile << first << " "<< last << " " << salary;
    }
    return 0;
}
