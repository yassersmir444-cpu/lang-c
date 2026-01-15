#include <stdio.h>
#include <math.h>

void main()
{
    int j,h,th=0,i;
    float S,ph=20;


    printf("entrez le nombre de jour travailler:");
    scanf("%d",&j);
  for ( i = 1; i <= j; i++)
{
    printf("%d-le nombre d'heure:",i);
    scanf("%d",&h);
    th+=h;
}
S=th*ph;
if(th>160){
S+=S*0.10;
}
printf("le salaire total est:%.2f dh\n",S);

}