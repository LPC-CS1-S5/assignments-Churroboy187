#include <iostream>
#include <istream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
   string heading1, heading2, heading3, heading4;
   ifstream cinfile;


  
  
   string fname;
   int exam1, exam2;
   char letterGradeForStudent;
   double avg;

   int highGrade=0;
   int lowGrade=0;
   double test1_total=0;
   double test2_total=0;
   double class_avg=0;
   int total_students=0;

   //Open file for reading
   cinfile.open("student.txt");
   cout <<left<<setw(20) << "Name"
       << setw(10) << "Test1"
       << setw(10) << "Test2"
       << setw(10) << " Average "
       << setw(10) << " Letter " << endl;
   cinfile >> fname >> exam1 >> exam2;
   //assume exam1 is lowgrade and highgrade initially
   lowGrade=100;
   highGrade=0;
   //read until file not end of file
   while (!cinfile.eof())
   {
       //increment the total_students by 1
       total_students++;

       //calculate avg value of two exam scores
       avg = ( exam1+ exam2) / 2;

       if(avg>highGrade)
           highGrade=avg;

       if(avg<lowGrade)
           lowGrade=avg;

       //add exam1 score to test1_total
       test1_total+=exam1;
       //add exam2 score to test2_total
       test2_total+=exam2;

       if (avg >= 90 && avg <= 100)
       {
           letterGradeForStudent = 'A';
       }
       else if(avg >= 80) {
           letterGradeForStudent = 'B';
       }
       else if(avg >= 70) {
           letterGradeForStudent = 'C';
       }
       else if (avg >= 60) {
           letterGradeForStudent = 'D';
       }
       else
           letterGradeForStudent = 'F';

       cout << fixed << setprecision(2)
           << left<<setw(20) << fname + " "
           << setw(10) << exam1
           << setw(10) << exam2
           << setw(10) << avg
           << setw(10) << letterGradeForStudent << endl;
       cinfile >> fname >> exam1 >> exam2;
   }
   cout << "-------------------------------------------------------------------------" << endl;
  
   cout<<"Loweset Grade : "<<lowGrade<<endl;
   cout<<"Highest Grade : "<<highGrade<<endl;
   cout<<"Average of Test1 : "<<test1_total/total_students<<endl;
   cout<<"Average of Test2 : "<<test2_total/total_students<<endl;

   //calculate class average
   class_avg=(test1_total+test2_total)/(2*total_students);

   cout<<"Class average : "<<class_avg<<endl;
   system("pause");
   return 0;
}