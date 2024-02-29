#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char carChoice = 'y';
    int carCount = 0;
    double cost = 0.00;
    double insurance = 0.00;
    double mpg = 0.00;
    double maxCost = 0.00;
    double maxInsurance = 0.00;
    double maxMpg = 0.00;
    double totalCost = 0.00;
    double totalInsurance = 0.00;
    double totalMpg = 0.00;
    double avgCost = 0.00;
    double avgInsurance = 0.00;
    double avgMpg = 0.00;
    
    cout << "Welcome to the car calculator!\n" << endl;
    
    do {
        carCount += 1;
        cout << "Car " << carCount << " cost: ";
        cin >> cost;
        if (cost > maxCost) {
            maxCost = cost;
        }
        cout << "Car " << carCount << " monthly insurance: ";
        cin >> insurance;
        if (insurance > maxInsurance) {
            maxInsurance = insurance;
        }
        cout << "Car " << carCount << " MPG: ";
        cin >> mpg;
        if (mpg > maxMpg) {
            maxMpg = mpg;
        }
        totalCost += cost;
        totalInsurance += insurance;
        totalMpg += mpg;
        
        cout << "Do you own another car? (y/n): ";
        cin >> carChoice;
        cout << endl;
    }
    while (carChoice == 'y');

    avgCost = totalCost / carCount;
    avgInsurance = totalInsurance / carCount;
    avgMpg = totalMpg / carCount;
    
    cout << fixed << setprecision(2);
    cout << "Total cost of all cars: $" << totalCost << endl;
    cout << "Total monthly insurance: $" << totalInsurance << endl;
    cout << "\nMost expensive car: $" << maxCost << endl;
    cout << "Most expensive insurance: $" << maxInsurance << endl;
    cout << "Worst MPG: " << maxMpg << endl;
    cout << "\nAverage cost of all cars: $" << avgCost << endl;
    cout << "Average cost of all insurance: $" << avgInsurance << endl;
    cout << "Average MPG: " << avgMpg << endl;
    
    cout << "\nThanks for using the car calculator!\n" << endl;
    
    return 0;
}
