#include<iostream>
using namespace std;

class Car;
class Truck;

class Freeway
{
public:
    Freeway()
    {
        cout << "Constructing Freeway" << endl;
    }

    Car* camry;
    Truck* big_red;
};

class Vehicle
{
private:
    int doors;
public:
    virtual void honk()
    {
        cout << "Wurble!" <<endl;
    }

    Vehicle()
    {
        doors = 4;
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

    void honk() override {
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
};

int main()
{
    Car myVehicle = Car();
    cout << "Car says: ";
    myVehicle.honk();

    Truck myOtherCar = Truck();
    cout << "Truck says: ";
    myOtherCar.honk();

    cout <<endl<<endl;

    Freeway i95;

    i95.camry = &myVehicle;
    i95.big_red = &myOtherCar;
    
}
