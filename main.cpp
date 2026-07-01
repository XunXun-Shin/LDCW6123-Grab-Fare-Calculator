#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double distance;
    double subtotal = 0;
    int carType;

    cout << "============================================" << endl;
    cout << "      WELCOME TO GRAB FARE CALCULATOR" << endl;
    cout << "============================================" << endl;

    cout << "\nEnter Distance (KM): ";
    cin >> distance;

    if (cin.fail() || distance <= 0)
    {
        cout << "Error: Invalid distance." << endl;
        cin.ignore();
        cin.get();
        return 0;
    }
    cout << "\nDistance Accepted: " << distance << " KM" << endl;
    
    cout << "\nSelect Vehicle Type" << endl;
    cout << "1. GrabBike" << endl;
    cout << "2. GrabCar" << endl;
    cout << "3. GrabPremium" << endl;

    cout << "\nEnter Choice: ";
    cin >> carType;
    if (cin.fail() || carType < 1 || carType > 3)
    {
        cout << "Error: Invalid vehicle type." << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    cout << "\nVehicle Selected: ";

    switch (carType)
    {
    case 1:
        cout << "GrabBike" << endl;
        break;
    case 2:
        cout << "GrabCar" << endl;
        break;
    case 3:
        cout << "GrabPremium" << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
    }

    switch (carType)
    {
    case 1:
        subtotal = 2.00 + (distance * 0.80);
        cout << "\nGrabBike Fare = RM "
             << fixed << setprecision(2)
             << subtotal << endl;
        break;
    case 2:
        subtotal = 4.00 + (distance * 1.20);
        cout << "\nGrabCar Fare = RM "
             << fixed << setprecision(2)
             << subtotal << endl;
        break;
    }

    cin.ignore();
    cin.get();
    return 0;
}
