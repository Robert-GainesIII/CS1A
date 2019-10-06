#include <iostream> 
using namespace std;

int main(){
 
int dealerCost = 0;
int listedCost = 0;

cout << "ENTER THE LISTED PRICE OF A CAR: ";
cin >> listedCost;
dealerCost = listedCost * (.85) + 500;
cout << endl << "THE LOWEST THE DEALER WILL TAKE FOR THE CAR IS " + dealerCost;
return 0;

}
