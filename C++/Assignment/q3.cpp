#include <iostream>
using namespace std;
class TollBooth
{
private:
    /* data */
    int totalVehicles = 0;
    int totalRevenue = 0;

public:
    void reset();
    void vehiclePayingToll(int vehicleType, double tollAmount);
    int getTotalVehicles();
    double getTotalRevenue();
};

void TollBooth::reset()
{
    this->totalVehicles = 0;
    this->totalRevenue = 0;
}

void TollBooth::vehiclePayingToll(int vehicleType, double tollAmount)
{
    totalVehicles++;
    switch (vehicleType)
    {
    case 1:
        /* code */
        totalRevenue += tollAmount;
        break;

    case 2:
        /* code */
        totalRevenue += tollAmount;
        break;

    case 3:
        /* code */
        totalRevenue += tollAmount;
        break;

    default:
        break;
    }
}

int TollBooth::getTotalVehicles()
{
    return this->totalVehicles;
}

double TollBooth::getTotalRevenue()
{
    return this->totalRevenue;
}

int main()
{
    TollBooth t;
    int choice;
    do
    {
        cout << "\n1. Standard Car. Toll Collection." << endl;
        cout << "2. Truck. Toll Collection." << endl;
        cout << "3. Bus. Toll Collection." << endl;
        cout << "4. Display Total Cars." << endl;
        cout << "5. Total Revenue Collected." << endl;
        cout << "6. Reset." << endl;
        cout << "7. Exit!" << endl;
        cout << "Enter Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            t.vehiclePayingToll(1, 2);
            break;
        case 2:
            t.vehiclePayingToll(2, 5);
            break;
        case 3:
            t.vehiclePayingToll(3, 10);
            break;
        case 4:
            cout << "Total Vehicles passed: " << t.getTotalVehicles() << endl;
            break;
        case 5:
            cout << "Total Revenue generated: " << t.getTotalRevenue() << endl;
            break;
        case 6:
            t.reset();
            break;
        case 7:
            cout << "Exiting!!" << endl;
            break;
        default:
            cout << "Invalid Output!!" << endl;
            break;
        }
    } while (choice != 7);
}