#include<iostream>
using namespace std;

class Vehicle
{
    public:
        virtual void honk()
        {
            cout << "Wurble!" <<endl;
        }

        Vehicle()
        {
            cout << "Constructing Vehicle" << endl;
        }
};

class Car : public Vehicle
{
    public:
        Car()
        {
            cout << "Constructing Car" << endl;
        }

        void honk()
        {
            cout << "Beep! Beep!" <<endl;
        }
};

class Truck : public Vehicle
{
    public:
        Truck()
        {
            cout << "Constructing Truck" << endl;
        }
        //void honk()
        //{
        //    cout << "Hoooonk!" <<endl;
        //}
};

int main()
{
    Car myVehicle = Car();
    cout << "Car says: ";
    myVehicle.honk();

    Truck myOtherCar = Truck();
    cout << "Truck says: ";
    myOtherCar.honk();
}
