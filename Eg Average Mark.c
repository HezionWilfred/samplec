#include<stdio.h>
int main()
{
    float a,b,c,d,e,tol,avg;
    printf("Enter Tamil Mark:");
    scanf("%f",&a);
    printf("Enter English Mark:");
    scanf("%f",&b);
    printf("Enter Maths Mark:");
    scanf("%f",&c);
    printf("Enter Physics Mark:");
    scanf("%f",&d);
    printf("Enter Chemistry Mark:");
    scanf("%f",&e);
    tol=a+b+c+d+e;
    printf("Total Marks:%2f",tol);
    avg=tol/5;
    printf("\nAverage:%f",avg);
    return 0;
}
