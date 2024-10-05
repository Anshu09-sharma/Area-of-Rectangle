//Calculate Area of Rectangle
#include <stdio.h>
#include <math.h>
int main() 
{
   float length, width, area;
   printf("Enter the length & width of rectangle");
    scanf("%f%f",&length,&width);
    area = length*width;
    printf("area of Rectangle = %0.2f",area);
    return 0;
}

