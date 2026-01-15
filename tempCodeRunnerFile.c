#include <stdio.h>
#include <math.h>
int main(void)
{
    float ve,Sl,So,St,Ht,Bs,r;
    const float pi=3.14;
    printf("saisir la valeur de base du triangle:");
    scanf("%f",&Bs);
    printf("saisir la valeur du rayon:");
    scanf("%f",&r);
    Ht=((Bs/2)/tan(pi/6));
    St=Bs*Ht*0.5;
    So=6*St;
    Sl=So-(pi*(r*r));
    ve=Sl*Ht;
    printf("la hauteur du triangle est:%.2f\n ",Ht);
    printf("la surface du triangle est:%.2f\n",St);
    printf("la surface de l'octogone est:%.2f\n",So);
    printf("la surface de l'ecrou est:%.2f\n",Sl);
    printf("le volume de l'ecrou est:%.2f\n",ve);


}