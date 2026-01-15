
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N=1,A=0,B=0;
   
    while( N!=0){
         printf("entrez N:");
    scanf("%d",&N);
        if(N%2==0 && N!=0){
        A++;}
        if(N%2!=0 && N!=0){
        B++;}
    }
    printf("les nombres paires sont:%d\n",A);
     printf("les nombres impaires sont:%d\n",B);
}