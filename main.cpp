#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double distance;
    double subtotal = 0.00;
    int carType;
    char peakHour;
    char hasPromo;
    string promoCode;

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
    case 3:
        subtotal = 8.00 + (distance * 2.50);
        cout << "\nGrabPremium Fare = RM "
             << fixed << setprecision(2)
             << subtotal << endl;
        break;
    default:
        cout << "\nError: Invalid vehicle type." << endl;
        return 0;
    }

    cout << "\nPeak Hour? (Y/N): ";
    cin >> peakHour;

    if (peakHour == 'Y' || peakHour == 'y')
    {
        subtotal += 3.00;
    }

    cout << "\nCurrent Fare: RM "
         << fixed << setprecision(2)
         << subtotal << endl;
    
    cout << "\nDo you have a promo code? (Y/N): ";
    cin >> hasPromo;

    if (hasPromo == 'Y' || hasPromo == 'y')
    {
        cout << "\nEnter Promo Code: ";
        cin >> promoCode;

        if (promoCode == "GRAB5")
        {
            subtotal -= 5.00;
            cout << "\nPromo code accepted!" << endl;
        }
        else
        {
            cout << "\nInvalid promo code." << endl;
        }
    }

    if (subtotal < 0)
    {
        subtotal = 0.00;
    }

    cout << "\nCurrent Fare: RM "
         << fixed << setprecision(2)
         << subtotal << endl;

    cout << fixed << setprecision(2);

    cout << "\n========================================" << endl;
    cout << "           GRAB FARE RECEIPT" << endl;
    cout << "========================================" << endl;

    switch (carType)
    {
    case 1:
        cout << "Vehicle Type : GrabBike" << endl;
        break;

    case 2:
        cout << "Vehicle Type : GrabCar" << endl;
        break;

    case 3:
        cout << "Vehicle Type : GrabPremium" << endl;
        break;
    }

    cout << "Distance     : " << distance << " KM" << endl;

    if (peakHour == 'Y' || peakHour == 'y')
        cout << "Peak Hour    : Yes (RM 3.00 additional)" << endl;
    else
        cout << "Peak Hour    : No" << endl;

    if (hasPromo == 'Y' || hasPromo == 'y')
        cout << "Promo Code   : " << promoCode << " (RM 5.00 discount)" << endl;
    else
        cout << "Promo Code   : None" << endl;

    cout << "----------------------------------------" << endl;
    cout << "Estimated Fare : RM " << subtotal << endl;
    cout << "========================================" << endl;

    cin.ignore();
    cin.get();
    return 0;
}
