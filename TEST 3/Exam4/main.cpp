//
//  main.cpp
//  Exam4
//
//  Created by Robert Gaines on 11/29/18.
//  Copyright © 2018 Robert Gaines. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string.h>
#include "cmath"
#include "ctype.h"
#include "math.h"

using namespace std;
void validator();
double multiply(double a);
double multiply(double a, double b);
int stringComparison(const string &a, const string &b);
int isPalidrome(const string &word);
int max(int a, int b);
double max(double a, double b);
char max(char a, char b);
void numberAnalysis(int data[]);

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
    
    cout<<endl;
    
    cout<<max(5.4,6.2)<<endl;
    cout<<max(-5,-4)<<endl;
    cout<<max('a','A')<<endl;
    
    cout<<endl;
    
    cout<<stringComparison("apple", "BANANA")<<endl;
    cout<<stringComparison("water", "WATER")<<endl;
    cout<<stringComparison("watermelon", "WATER")<<endl;
    cout<<stringComparison("pine", "PINEAPPLE")<<endl;
    cout<<stringComparison("CS1A", "cs1a")<<endl;
    
    cout<<endl;
    
    cout<< isPalidrome("mom")<<endl;
    cout<< isPalidrome("abcabc")<<endl;
    cout<< isPalidrome("abcdcba")<<endl;
    
    cout<<endl;
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    numberAnalysis(data);
    
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


double multiply(double a){
    return a*2;
}
double multiply(double a, double b){
    return a*b;
}


int stringComparison(const string &a, const string &b){

    int length = (a.length() > b.length() ? b.length(): a.length());
    int i = 0;
    while(i < length){
        if(tolower(a[i]) < tolower(b[i])){
            return -1;
        }
        
        //CHAR VALUE @ a[i] is less than b[i]
        if(tolower(a[i]) > tolower(b[i])){
            return 1;
        }
        i++;
    }
    if(a.length() == b.length())return 0;
    else if(a.length() < b.length())return -1;
    else if(a.length() > b.length())return 1;
    else return -1;
}

int isPalidrome(const string &word){
    char backwards[word.length()];
    //COPY THE WORD TO THE NEW STRING BACKWARDS
    int j = 0;
    for(int i = word.length(); i >= 0; i--){
        backwards[j]=word[i];
        j++;
    }
    for(int i = 0; i < sizeof(backwards); i++){
        if(backwards[i] != word[i])return 0;
    }
    
  
    //TO REACH THIS POINT MEANS THE WORD IS A PALIDROME
    return 1;
}

void numberAnalysis(int data[]){
    int sum = 0;
    int x = sizeof(data);
    for(int i = 0; i < x; i++){
        sum += data[i];
    }
    cout<<"Sum is: " << sum;
    cout<<"Average is: " << sum/x;
}
