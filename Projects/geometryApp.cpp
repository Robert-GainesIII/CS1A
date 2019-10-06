#include  <iostream>
#include <cstdlib>
using namespace std;

int main(){

    double squareLength;
    double rectangleWidth;
    double rectangleHeight;
    double aOfSquare;
    double pOfSquare;
    double aOfRectangle;
    double pOfRectangle;
    double aOfCircle;
    double pOfCircle;

    double PI = 3.14;

    bool quit = false;

      //GATHER AND PROMPT USER INPUT

    cout << "hello there user!" << endl << "Welcome to Geometry App v1.0 enter values below to begin" << endl;
    while (quit == false){
    cout << "Enter a length for the side of a Square: ";
    cin >> squareLength;
    cout <<endl << "Now enter the width for a Rectangle: ";
    cin >> rectangleWidth;
    cout << endl << "Now the height of the Rectangle: ";
    cin >> rectangleHeight;

      //COMPUTE SQUARE
    aOfSquare = squareLength * squareLength;
    pOfSquare = squareLength * 4;

     //COMPUTE RECTANGLE
    aOfRectangle = rectangleWidth * rectangleHeight;
    pOfRectangle = 2*rectangleWidth + 2*rectangleHeight;

     //COMPUTE CIRLCE
    aOfCircle = PI * squareLength * squareLength;
    pOfCircle = 2 * PI * squareLength;


    //OUTPUT COMPUTED NUMBERS
    cout << endl << "The NUMBERS have been crunched!!.." << endl;
    cout << "The perimeter of a square with a length of " << squareLength << " is: " << pOfSquare << endl;
    cout << "The area of a square with a length of " << squareLength << " is: " << aOfSquare << endl << endl;
    cout << "The perimeter of a rectangle with a Width of " << rectangleWidth << " and Height of " << rectangleHeight << " is: "<< pOfRectangle << endl;
    cout << "The area of a rectangle with a Width of " << rectangleWidth << " and Height of " << rectangleHeight << " is: "<< aOfRectangle << endl;
    cout << "The perimeter and area of a cirlce with diameter of " << squareLength << " is as follows" << endl;
    cout << "Perimeter: " << pOfCircle << endl  << "Area: " << aOfCircle << endl;


    //PROMPT USER TO CONTINUE OR QUIT
    cout << "Would you like to compute more? (y)es or (n)o : ";

    char confirmation;

    cin >> confirmation;

    //DETERMINE USERS DECISION IF QUIT THEN PRINT GOODBYE
    if(confirmation == 'n'){
      quit = true;
      cout <<endl << "Thanks for using the GeometryAppv1.0! Goodbye." << endl;
    }
    //ELSE PRINT SPACE BETWEEN NEW NUMBERS AND OLD NUMBERS
    else {
      cout << string(16 , '\n');
    }
  }
    return 0;
}
