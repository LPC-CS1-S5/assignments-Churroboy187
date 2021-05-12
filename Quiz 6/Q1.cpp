#include <iostream>
void swapTwoValues(int *n1, int *n2);
void swapTwoValues(float *n1, float *n2);
// forgotten to include the top part be mistake//
int main() {
        
        int a[5] = {1,2,3,4,5};
        // mistakly place in Three which created an error//
        swapTwoValues(&a[2], &a[3]);
        
        for(int i=0;i<5;i++){
                printf("%d ",a[i]);
        }
        
        printf("\n");
        
        float b[5] = {5,4,3,2,1};
        
        swapTwoValues(&b[4], &b[3]);
        
        for(int i=0;i<5;i++){
                printf("%f ",b[i]);
        }
        
        return 1;
}

void swapTwoValues(int *n1, int *n2) {
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;     
}

void swapTwoValues(float *n1, float *n2) {      
        float temp = *n1;
        *n1 = *n2;
        *n2 = temp;
        
}