
#include <iostream>
using namespace std;
void promptUser();
void calculate();
void showResults();


string name = "";
int salary = 0;
bool valid = false;

int main(){
  promptUser();
  calculate();
  showResults();
}

void promptUser(){
  cout<<"================================================="<<endl;
  cout<<"Welcome to Federal Turbo Tax Mission Viejo       "<<endl;
  cout<<"Please enter your name > ";
  cin>>name;
  cout<<name <<", enter your annual salary > ";
  cin>>salary;
      while(!valid){
      if(!cin || salary < 0){
        cin.clear();
        cin.ignore(1000, '\n');
        salary = 0;
        cout<<endl<<"INVALID ENTRY(ENTER POSITIVE INT FROM 0 to INFINITY)"<<endl;
        cout<<"Enter salary > ";
        cin>>salary;
      }
      else{
        valid = true;
      }
    }
}

void calculate(){
  cout<<"Calculating"<<endl;
}

void showResults(){
  cout<<"End program."<<endl;
  cout<<"================================================="<<endl;
}
