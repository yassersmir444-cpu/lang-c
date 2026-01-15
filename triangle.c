#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float x,y,z;
    printf("entrez les valeur de x");
    scanf("%f",&x);
     printf("entrez les valeur de y");
    scanf("%f",&y);
     printf("entrez les valeur de z");
    scanf("%f",&z);
    if(x+y>z && x+z>y && y+z>x)
    printf("le triangle est equilateral");
    else if(x==y || y==z || x==z)
    printf("le triangle est isocele");
    else if(pow(x,2)==pow(y,2)+pow(z,2) || pow(y,2)==pow(x,2)+pow(z,2) || pow(z,2)==pow(x,2)+pow(y,2))
    printf("le triangle est rectangle");
    else if(x!=y || y!=z || x!=z)
    printf("le triangle est scalene");
    }