#include <iostream>
using namespace std;
void rightTriangle(int a, int b, int c);

int main(){

  int num1 =0;
  int num2 =0;
  int num3 =0;
  int sideA =0;
  int sideB =0;
  int hypo = 0;

  cout<< "ENTER THE FIRST SIDE: ";
  cin >> num1;
  cout<<endl<<"ENTER THE SECOND SIDE: ";
  cin >> num2;
  cout <<endl << "ENTER THE THIRD SIDE: ";
  cin >> num3;

  if(num1 > num2 && num1 > num3){
    hypo = num1;
    sideA = num2;
    sideB = num3;
  }
  else if (num2 > num1 && num2 > num3){
    hypo = num2;
    sideA = num1;
    sideB = num3;
  }
  else{
    hypo = num3;
    sideA = num1;
    sideB = num2;
  }

  rightTriangle(sideA,sideB,hypo);

}

void rightTriangle(int sideA, int sideB, int hypo){
  int a2 = sideA * sideA;
  int b2 = sideB * sideB;
  int c2 = hypo * hypo;
  if((a2 + b2) == c2){
    cout<<endl<<"This is a right triangle!"<<endl;
  }
  else {
    cout<<endl<<"Not a right triangle"<<endl;
  }
}
