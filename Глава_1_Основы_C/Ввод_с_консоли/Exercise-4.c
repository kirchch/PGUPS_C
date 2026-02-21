#include <stdio.h>
  
int main(void)
{
    float h = 0, w = 0;
    printf("Enter the height: ");
    scanf("%f", &h);
    printf("Enter the width: ");
    scanf("%f", &w);
     
    printf("Rectangle area: %f\n", h * w);
    return 0;
}