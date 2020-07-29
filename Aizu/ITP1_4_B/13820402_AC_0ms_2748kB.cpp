#include <stdio.h>

int main ()

{
    double r, area, circumference;
     scanf("%lf", &r);
     area=3.141592653589*r*r;
     circumference=2*3.141592653589*r;
     printf("%lf %lf\n", area, circumference);
     return 0;
}
