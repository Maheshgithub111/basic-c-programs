#include <stdio.h>
#include <ctype.h>

int main()
{
   char unit;
   float temp;
   printf("\n Is the temperature in (F) or (c)?:");
   scanf("%c", &unit);

   unit = toupper(unit);

   if (unit == 'C')
   {
      printf("\n Enter the temp in celsius:");
      scanf("%f", &temp);
      temp = (temp * 9 / 5) + 32;
      printf("The temp in farenheit is: %.1f", temp);
   }

   else if (unit == 'F')
   {
      printf("\n Enter the temp in farenthite:");
      scanf("%f", &temp);
      temp = ((temp - 32) * 5) / 9;
      printf("The temp in celsius is: %.1f", temp );
   }
   else
   {
      printf("%c is not valid unit of measuremet.", unit);
   }
   return 0;
}
