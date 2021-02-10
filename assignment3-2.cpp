// Uriel 
#include <iostream>
#include <iomanip>  //for output formatting

using namespace std;


int main()
{
    //declare variables needed
    int males, females, total;
    double percentage;

    //prompt user to enter data then read
    cout << "How many males are there in the class? ";
    cin >> males;

    cout << "How many females are there in the class? ";
    cin >> females;

    //perform calculation for total students
    total = males + females;

    //calculate males percentage then display
    //after formatting output
    percentage = (double)males / total;
    cout << setprecision(2) << "Percentage of males is: ";
    cout << percentage * 100 << "%";

    //do the same for female percentage
    percentage = (double)females / total;
    cout << setprecision(2) << "\nPercentage of females is: ";
    cout << percentage * 100 << "%";

    //return 0 to mark successful termination
    return 0;
}