#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

int main()

{

                int n; //to hold user entered number

                cout<<"Enter a number: "; //ask user to enter a number

                cin>>n; //store it in n

               

                srand(time(NULL)); //random number generator

                int i, r, sum; //i to iterate, r to hold random number and sum to hold sum of random numbers

                sum = 0; //initialize sum to 0

                cout<<endl<<"Random numbers: ";

                //generate random n numbers

                for(i=0;i<n;i++)

                {

                                r = rand()%100 + 1; //to generate values between 1 to 100

                                sum = sum + r; //add it to sum

                                cout<<r<<" "; //print random number

                }

                //print sum and average

                cout<<endl<<"Sum of random numbers is "<<sum<<endl;

                cout<<"Average of random numbers is "<<(double)sum/n<<endl;

                return 0;

}