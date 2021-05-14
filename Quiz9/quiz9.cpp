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
 return maxlnd;