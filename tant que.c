#include <stdio.h>

int main(void)
{
    int N,SP,SN;
    SP=0;
    SN=0;
    while(N=!0)
    {printf("entrez la valeur de N:");
    scanf("%d",&N);
        if(N>0)
        SP=SP+N;
        printf("la somme positive:%d\n",SP);
       if(N<0)
       SN=SN+N;
        printf("la somme negative:%d\n",SN);
    }


}