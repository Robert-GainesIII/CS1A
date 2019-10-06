#include <iostream> 
using namespace std;
int getSurfaceArea(int radius);
int getVolume(int radius);
int PI = 3.14;
int main(){
    
    int radius = 0;
    int surfaceArea = 0;
    int volume = 0;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Surface Area is: " << getSurfaceArea(radius) << " Volume is: " << getVolume(radius);
    
}

int getSurfaceArea(int radius){
     return (radius*radius) * PI * 4;
}
int getVolume(int radius){ 
    return (radius*radius*radius) * 4/3 * PI;
}
