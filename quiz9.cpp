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
   employee e[10];
   int i, size = 10;
   for (i = 0; i < size; ++i) {
    printf("Enter Employee %d details\n", i+1);
    printf("Id: ");
    scanf("%d",& (e[i].id));
    printf("Name: ");
    scanf("%s",(e[i].name));
    printf("Age: ");
    scanf("%d", e[i].age);
    printf("Salary: ");
    scanf("%f", & (e[i].salary));
   }
  //Print max employee
  i = maxInd(e, size);
  printf("Employee with highest salary is: %s with id: %d, age: %d and salary of: $%f\n", e[i].id, e[i].age, e[i].salary);
  retrun 0;
 }