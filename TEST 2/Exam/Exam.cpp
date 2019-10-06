//
//  Exam.cpp
//  
//
//  Created by Robert Gaines on 11/29/18.
//

#include <iostream>
#include <iomanip>
#include <string.h>
#include "cmath"
#include "ctype.h"
#include "math.h"

using namespace std;
void validator();
double multiply(double a, double b);
double multiply(double a);
int stringComparison(const string &a, const string &b);
int isPalidrome(const string &word);
int max(int a, int b);
double max(double a, double b);
char max(char a, char b);

const int lineWidth = 60;
const int width1 = 20;

int main()
{
    cout<< setw(lineWidth) << setfill('-') << '-';
    cout<< setw(width1) << right << "Computer Science 1A Test Question #1\n";
    
    validator();
    
    cout<<multiply(2,5)<<endl;
    cout<<multiply(6.0)<<endl;
    cout<<multiply(5.2,2.3)<<endl;
    
    cout<<max(5.4,6.2)<<endl;
    cout<<max(-5,-4)<<endl;
    cout<<max('a','A')<<endl;
    
    cout<<stringComparison("apple", "BANANA")<<endl;
    cout<<stringComparison("water", "WATER")<<endl;
    cout<<stringComparison("watermelon", "WATER")<<endl;
    cout<<stringComparison("pine", "PINEAPPLE")<<endl;
    cout<<stringComparison("CS1A", "cs1a")<<endl;
    
    
}

void validator(){
    cout<<"Enter a value 1-100\n";
    int x = 0;
    cin >> x;
    while(x > 0 && x<=100){
        cout << endl << "Enter another number: ";
        cin >> x;
    }
    
}
int max(int a, int b){
    if(a>b)return a;
    else return b;
}
double max(double a, double b){
    if(a > b)return a;
    else return b;
}
char max(char a, char b){
    if(a > b)return a;
    else return b;
}

double numberMultiplier(double a){
    return a*2;
}
double numberMultiplier(double a, double b){
    return a*b;
}

int stringComparison(const string &a, const string &b){
    for(int i = 0; i < a.length(); i++){
        putchar(tolower(a[i]));
    }
    cout << endl;
    for(int j = 0; j < b.length(); j++){
        putchar(tolower(b[j]));
    }
    cout << endl;
    int i = 0;
    while(i < a.length() && i < b.length()){
        cout << a[i] << "|" << b[i]<< endl;
        if(a[i] > b[i]){
            //cout<<b << " is alphanumerically before " << a << endl;
            return 1;
        }
        
        //CHAR VALUE @ a[i] is less than b[i]
        else if(a[i] < b[i]){
            //cout<<a << " is alphanumerically before " << b << endl;
            return -1;
        }
        i++;
    }
    if(a.length() < b.length())return -1;
    return 0;
}

int isPalidrome(const string &word){
    int len = word.length();
    char backwards[len];
    
    //COPY THE WORD TO THE NEW STRING BACKWARDS
    for(int i = len; i > 0; i--){
        int j = 0;
        backwards[j]=word[i];
        j++;
    }
    
    int z = 0;
    while(z < len){
        if(word[z] != backwards[z])return 0;
    }
    //TO REACH THIS POINT MEANS THE WORD IS A PALIDROME
    return 1;
    
    return 0;
}
