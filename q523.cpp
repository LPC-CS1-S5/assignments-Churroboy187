2#include<iostream>
using namespace std;
int main(){
  
int num1,num2;

cout<<"Enter two numbers: ";
cin>>num1>>num2;

cout <<"The list of Prime numbers between " <<num1<<" and "<<num2<<" : ";
for (int i=num1; i<num2; i++)
{
bool prime=true;
for (int j=2; j*j<=i; j++)
{
if (i % j == 0)
{
prime=false;
break;
}
}   
if(prime)
cout << i << " ";
}
  

return 0;


}