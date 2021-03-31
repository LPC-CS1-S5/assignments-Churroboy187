#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void gerRandnum(int &n1,int &n2,int &n3,int &n4,int &n5){
        srand((unsigned int)time(NULL));
        n1=rand()%100;
        n2=rand()%100;
        n3=rand()%100;
        n4=rand()%100;
        n5=rand()%100;
}
int findMin(int n1,int n2,int n3,int n4,int n5){
        if(n1<n2 && n1<n3)
                return n1;
        else if(n2<n3)
                return n2;
        else
                return n3;
}
void printResult(int n1,int n2,int n3,int n4, int n5,int min){
        cout<<"Num1: "<<n1<<endl;
        cout<<"Num2: "<<n2<<endl;
        cout<<"Num3: "<<n3<<endl;
        cout<<"Num4: "<<n4<<endl;
        cout<<"Num5: "<<n5<<endl;
        cout<<"Minimum is: "<<min<<endl;
        
}
int main(){
        int n1,n2,n3,n4,n5,min;
        gerRandnum(n1,n2,n3,n4,n5);
        min=findMin(n1,n2,n3,n4,n5);
        printResult(n1,n2,n3,n4,n5,min);
}