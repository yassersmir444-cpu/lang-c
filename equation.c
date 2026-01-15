#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,C;
    double D,x1,x2;
    printf("entrez A:\n");
    scanf("%d",&A);
     printf("entrez B:\n");
    scanf("%d",&B);
     printf("entrez C:\n");
    scanf("%d",&C);
    if(A==0){
        if(B==0){
            if(C==0){
                printf("l'equation appartien a l'ensemble R");}
            else
                printf("l'equation n'admet pas du soluion");}
        else
        {x1= -((double)C/B);
        printf("l'equation du premier degre. solution unique :x1= %.2lf\n ",x1);}
    }
    else
    {
        D= (double)(B*B)-4*A*C;

        if(D>0)
        {x1=(-B-sqrt(D)/2*A);
        x2=(-B+sqrt(D)/2*A);
            printf("l'equation admet deux solution :x1=%.2lf x2=%.2lf\n",x1,x2);}
        else if(D==0)
            {x1=(-B/2*A);
            printf("l'equation admet une solution:x1=%.2lf\n",x1);}
        else
            printf("l'equation n'admet pas du solution\n");
    }
    return 0;
}