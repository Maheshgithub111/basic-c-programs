#include<stdio.h>
int findMax(int x, int y){
if(x>y) 
{
   return x;  
}
 
else{ 
    return y;  
}

}


int main(){

int x ;
int y ;
printf("Finding the maxium value of numbers\n");
printf("Enter the value of x : ");
scanf("%d",&x);
printf("\n Enter the value of y :");
scanf("%d", &y);

int max =  findMax(x,y);
printf("The maxium value between x and y is : %d", max);


    return 0;
}