#include <stdio.h>
#include <string>

struct employee {
  int id;
  char name[100];
  int age;
  float salary;
};

int maxlnfemployee e[], int size {
  int maxlnd=0;
  for(int i = 0; i < size; ++i){
    if(e[i].salary > e[maxlnd].salary) {
      maxlnd=i;
    }
  }

  return maxlnd;
}
 int main (){
   // enter 10 employee details
   employees e[10];
   int i, size = 10;
   
 }