#include <stdio.h>
#include <string.h>

int main()
{
    char choice = 0 ;
    float celsius = 0.0f;
    float fahernheit = 0.0f;
    printf("Temperature Conversion Program \n");
    printf("C.Celsius to Fahernheit \n");
    printf("F. Fahernheit to Celsius \n");
    printf("Is the temp is Celsius(C) or Fahernheit(F) : ");
    scanf("%c",&choice);
    if(choice == 'C'){
      //Celsius to Fahernheit
       printf("Enter the value in Celsius : ");
       scanf("%f",&celsius);
       fahernheit = (celsius * 9/5)+ 32;
       printf("%.2f Celsius converted to %.2f Fahernheit ",celsius , fahernheit);
    } 
    else if (choice == 'F')
    {
      //Fahernheit to Celsius
      printf("Enter the value in Fahernheit : ");
       scanf("%f",&fahernheit);
       celsius = (fahernheit - 32) * 5 / 9 ;
       printf("%.2f Fahernheit is converted to %.2f Celsius",fahernheit,celsius);

    }
    else
    {
       printf("Invalid Choice !");
    }

    return 0;
}
