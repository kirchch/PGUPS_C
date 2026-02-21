#include <stdio.h>
  
int main(void)
{
    double f = 0.0;
    printf("Enter the size in feet: ");
    scanf("%lf", &f);
     
    printf("Size in meters: %lf\n", f / 3.281);
    
    return 0;
}