#include <stdio.h>
#include <math.h>

int main(void)
{
    int N,P,A,K,exp;
    printf("entrez N:");
    scanf("%d",&N);
    A=N;
    P=2;
    K=0;
    while(A>1)
    {
    exp=0;
    while(A%P==0)
    {
        A=A/P;
        exp++;
    }
    if(exp>0)
    {
        printf("%d^%d",P,exp);
        K++;
    }
    P++;
    }
    printf("\n");
    if(K==1 && exp==1)
    {
    printf("%d est un nombre premier");
    printf("%dest un nombre non premier");
    }
}
