#include<stdio.h>
#include<math.h>
int main (){

double A; 
double B;
double C;

printf("Enter the side A: ");
scanf("%lf", &A);

printf("Enter the side B: ");

scanf("%lf", &B);

C = sqrt(A*A + B*B);

printf("The Hypotenuse in Triangle with side A : %.2lf and side B: %.2lf is %.4lf ", A, B, C);

    return 0;
}