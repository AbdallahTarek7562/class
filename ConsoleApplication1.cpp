#include <iostream>
using namespace std;
#include "car.h"
int main()
{
    cout << "hello world" << endl;
    car c1;
    c1.setmaker("honda");
    c1.setcolour("black");
    c1.setmodel(1998);
    cout << "this car is " << c1.getmaker() << endl;
    cout << "this car is model " << c1.getmodel() << endl;
    cout << "the colour of this car is " << c1.getcolour() << endl;
    car b3;
    b3.setmaker("BME");
    cout << "the car type is " << b3.getmaker() << endl;

}


