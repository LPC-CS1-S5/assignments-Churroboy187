#include <iostream>

using namespace std;

void printPrimeList(int a, int b) //Printing Prime numbers between a range
{
int flag;
cout << "Prime Numbers between "<<a<<" and "<<b<<":\n";
for (int i = a; i <= b; i++) //Traverse each number in the interval
{
if (i == 1 || i == 0) //Skip 0 and 1 as they are neither prime nor composite
continue;
flag = 1; //flag variable to tell if i is prime or not
for (int j = 2; j <= i / 2; ++j) //Iterate to check if i is prime or not
{
if (i % j == 0)
{
flag = 0;
break;
}
}
if (flag == 1) //flag = 1 means i is prime and flag = 0 means i is not prime
cout << i << " ";
}
}

void getListprime(int begin)
{
printPrimeList(begin , 100); //calling printPrimeList(int ,int) from begin to 100
}

void getListprime()
{
printPrimeList(0,100); //calling printPrimeList(int ,int) from 0 to 100
  
}

void getListprime(int begin,int end)
{
printPrimeList(begin, end); //calling printPrimeList(int ,int) from begin to end
}

int main()
{
int begin, end;
cout << "Enter two positive integers: \n";
cin >> begin >> end; //Taking inputs from the user
if(begin <= 0 || end <=0) //checking both the numbers are positive or not
cout << "Invalid";
else
{
if(begin == end)
getListprime(begin);
else if(begin > end)
getListprime();
else
getListprime(begin,end);
}
return 0;
}