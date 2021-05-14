#include <iostream>
#include <string>

struct employee {
  int id;
  char name[100];
  int age;
  float salary;
};

int maxInd(employee e[], int size) {
  int maxInd=0;
  for(int i = 0; i < size; ++i){
    if(e[i].salary > e[maxInd].salary) {
      maxInd=i;
    }
  }

  return maxInd;
}
 int main (){
   // enter 10 employee details
   employees e[10];
   int i, size = 10;
   for (i = 0; i < size; ++i) {

     
   }

 }