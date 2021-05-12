#include <bits/stdc++.h>
using namespace std;
 // making sure that I have the right phrase
#define OUT 0
#define IN 1
 
unsigned countWords(char *str)
{
    int state = OUT;
    unsigned wc = 0; 
 
  //i couldn't figure out how to do the \th 
    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;
 
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
 
        
        ++str;
    }
 
    return wc;
}
 
//figuring out what do here was the most confusing 
int main(void)
{
    char substr[] = "The Python \t 2 language was officially discontinued in 2020 (first planned for 2015), and Python \t 2.7.18 is the \t last Python \t 2.7 release and therefore \t the \t last Python \t 2 release. No more security patches or other improvements will be released for it. With Python \t 2's end-of-life, only Python \t 3.5.x and later are supported. \t thither \t";
    cout<<"No of words : "<<countWords(substr);
    return 0;
}