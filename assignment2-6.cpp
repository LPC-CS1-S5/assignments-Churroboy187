#include <iostream>
using namespace std;

int main(){
    double var1, var2, var3, var4, var5; //declaring 5 different variables for the values
    double sum; //declare variable to store the sum of the 5 values
    double average; //declare variable to store the average of the values
    //all variables are declared as double because that is what the book suggests

    var1 = 28;  //store the values of the exercise inside the variables we declared
    var2 = 32;
    var3 = 37;
    var4 = 24;
    var5 = 33;

    sum = var1 + var2 + var3 + var4 + var5; //add the values stored inside the variables to get the sum
    average = sum/5; //divide the sum we found by 5, so as to get the desired average
    cout << "The average is: " << average; //print the average on the screen
    return 0;
}