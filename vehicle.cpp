#include<iostream>
using namespace std;

class Vehicle
{
    public:
        virtual void honk()
        {
            cout << "Wurble!" <<endl;
        }
};

class Car : public Vehicle
{
    public:
        void honk()
        {
            cout << "Beep! Beep!" <<endl;
        }
};

class Truck : public Vehicle
{
    public:
        //void honk()
        //{
        //    cout << "Hoooonk!" <<endl;
        //}
};

int main()
{
    Car myVehicle = Car();
    myVehicle.honk();

    Truck myOtherCar = Truck();
    myOtherCar.honk();
}
