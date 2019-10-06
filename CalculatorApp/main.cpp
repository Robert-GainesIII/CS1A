#include <iostream>
using namespace std;
int add(int a, int b);
int multiply(int a, int b);
int expo(int a, int b);

int main(){
  int x = expo(6,7);
  cout <<""<< x<< endl;

  return 0;
}

int add(int a, int b){
  while(b>0){a++;b--;}
  return a;
}

int multiply(int a, int b){
  int total = 0;
  while(b>0){
    total = add(total, a);
    b--;
  }
  return total;
}

int expo(int base, int power){
if(power == 0)return 1;
 int total = base;
 while(power > 1) {
   total = multiply(total, base);
   power --;
 }
 return total;
}
