#include <stdio.h> 
 
int main(void) { 
	int a,b,c; 
	printf("Enter three number\n"); 
	scanf("%d %d %d",&a,&b,&c); 
   //finding maximum number 
	if (a >= b ) {  
        if (a >= c)  
            printf("%d is the maximum number\n", a);  
        else 
            printf("%d is the maximum number\n", c);  
    }  
    else {  
        if (b >= c)  
            printf("%d is the maximum number\n", b);  
        else 
            printf("%d is the maximum number\n", c);  
    }  
    //finding minimum number 
    if (a <= b ) {  
        if (a <= c)  
            printf("%d is the minimum number\n", a);  
        else 
            printf("%d is the minimum number\n", c);  
    }  
    else {  
        if (b <= c)  
            printf("%d is the minimum number\n", b);  
        else 
            printf("%d is the minimum number\n", c);  
    }  
   
    return 0;  
} 