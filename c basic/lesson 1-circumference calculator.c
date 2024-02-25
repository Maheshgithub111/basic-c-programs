#include<stdio.h>
int main(){

const double PI = 3.14159265;
double radius;
double circumference;

printf("Enter the value of radius: ");
scanf("%lf", &radius);

circumference= 2*PI*radius;

printf("\nThe Circumference of a circle with radius %.2lf is : %lf\n", radius, circumference);

    return 0;
}