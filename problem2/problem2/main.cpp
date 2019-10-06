//
//  main.cpp
//  problem2
//
//  Created by Robert Gaines on 11/29/18.
//  Copyright © 2018 Robert Gaines. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include "cmath"
#include "math.h"
using namespace std;
typedef double twoDArray[4][3];
void multiplyArray(twoDArray a, twoDArray b, twoDArray &c);
void divideArray(twoDArray a, twoDArray b, twoDArray &c);
void addArray(twoDArray a, twoDArray b, twoDArray &c);
void subtractArray(twoDArray a, twoDArray b, twoDArray &c);
void initlizeArray(twoDArray &array, int val);


int main()
{
    
    int valA=0;
    
    int valB=0;
    
    cout << endl << "Enter the starting value for the first array: ";
    cin >>valA;
    
    cout<< endl <<"Enter the starting value for the second array: ";
    
    cin >>valB;
    
    
    
    twoDArray a;
    twoDArray b;
    twoDArray c;
    
    cout<< endl <<"Array Number One \n--------------------\n";
    initlizeArray(a,valA);
    cout<< endl<<"\nArray Number Two \n--------------------\n";
    initlizeArray(b,valB);
    
    
    
    
    cout << endl <<"what would you like to do these values?\n";
    cout << "(1)add (2)subtract (3)multiply (4)divide\n";
    cout << ">";
    int choice = 0;
    cin  >> choice;
    if(choice == 1){
        addArray(a, b, c);
    }else if(choice == 2){
        subtractArray(a, b,c);
    }else if(choice == 3){
        multiplyArray(a, b, c);
    }else if(choice == 4){
        divideArray(a, b,c);
    }else{
        cout<<"You did not enter a valid input. Exiting program...\n";
    }
    
}

void initlizeArray(twoDArray &array, int val){
    
    for ( int i = 0; i < 4; i++ ){
        for ( int j = 0; j < 3; j++ ) {
            //PRINT OUT EVERY COL IN THE ROW
            array[i][j] = val;
            cout << left << "["<<array[i][j]<<"]";
        }
        //AT END OF ROW YOU PRINT TO NEXT LINE
        cout << endl;
    }
}

void multiplyArray(twoDArray a, twoDArray b, twoDArray &c){
    
}

void divideArray(twoDArray a, twoDArray b, twoDArray &c){
    
}

void addArray(twoDArray a, twoDArray b, twoDArray &c){
    cout<< right << setw(20)<< setfill('*')<< "Adding a + b\n";
    for ( int i = 0; i < 4; i++ ){
        for ( int j = 0; j < 3; j++ ) {
            //PRINT OUT EVERY COL IN THE ROW
            int x = a[i][j];
            int y = b[i][j];
            int z = x + y;
            c[i][j] = z;
            cout << left << "["<<c[i][j]<<"]";
        }
        //AT END OF ROW YOU PRINT TO NEXT LINE
        cout << endl;
    }
}

void subtractArray(twoDArray a, twoDArray b, twoDArray &c){
    
}
