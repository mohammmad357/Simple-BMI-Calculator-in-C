/* this is calculating bmi */

#include <stdio.h>
#include <string.h>

int mass;
float height;
float bmi;
char a[20];

int main(void)
{
    printf("Please Inter Your Mass : ");
    scanf("%d" ,  &mass);

    printf("Please Inter Your Height : ");
    scanf("%f" ,  &height);

    bmi = (mass) / (height * height);
    printf("BMI VALUES \nUnderweight :   less than 18.5\nNormal :        between 18.8 and 24.9\nOverweight :    between 24.9 and 29.9\nObese :         30 or greater\nYour BMI : %.2f" , bmi);
    
    if (bmi < 18.5)
    {
        strcpy(a, "underweight");
    }

    else if ( bmi >= 18.5 && bmi <= 24.9)
    {
        strcpy(a, "Normal");
    }

    else if ( bmi >= 24.9 && bmi <= 29.9)
    {
        strcpy(a, "overweight");
    }
    
    printf(" You Are %s" , a);
    
    return 0;
}