#include<stdio.h>  
  
int main()  
{  
    const float POUND = 2.20462;  
    float kg;  
  
    printf("Enter weight in Kilograms\n");  
    scanf("%f", &kg);  
  
    printf("Weight in Pounds is %f\n", (kg * POUND));  
  
    return 0;  
}  