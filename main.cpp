#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    cout << "============================================" << endl;
    cout << "      WELCOME TO GRAB FARE CALCULATOR" << endl;
    cout << "============================================" << endl;

    double distance;
    cout << "\nEnter Distance (KM): ";
    cin >> distance;
    if (cin.fail() || distance <= 0)
    {
        cout << "Error: Invalid distance." << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    cin.get();
    return 0;
}
