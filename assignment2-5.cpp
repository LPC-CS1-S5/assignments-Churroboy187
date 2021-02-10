#include <iostream>
using namespace std;

int main(){
    //declare and initialize float variable for cost of meal
    float mealCost = 88.67;

    //declare variables to store tax, tip and total amount
    float tax, tip, total;

    //calculate these amounts according to percentages given
    tax = 0.0675 * mealCost;
    tip = 0.2 * (mealCost + tax);
    total = mealCost + tax + tip;

    //display information on screen
    cout << "Meal Cost is $" << mealCost << endl;
    cout << "Tax amount is $" << tax << endl;
    cout << "Tip amount is $" << tip << endl;
    cout << "Total Bill is $" << total << endl;

    return 0;

}