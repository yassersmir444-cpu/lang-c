#include <stdio.h>
#include <math.h>

int main(void)
{
int dure;
char tp;
float dst,prkl,prini,prfinal=0,reduction=0,aug=0;
printf("entrez la distance:");
scanf("%f",&dst);
printf("le type de voiture:");
scanf(" %c",&tp);
printf("entrez la duree en j:");
scanf("%d",&dure);
if(dst<100)
prkl=2.0;
else if(dst<300)
prkl=1.8;
else if(dst<500)
prkl=1.5;
else
prkl=1.2;
prini=prkl*dst;
switch (tp)
{
case 'L':
case 'l':
    aug=prini*0.20;
    break;
    case 'S':
    case 's':
    aug=prini*0.10;
    break;
    case 'E':
    case 'e':
    aug=0;
    break;
    default:
    printf("voiture invalide");
    break;
    prfinal=prini+aug;
}
 if ( dure < 0 )
    {
      printf("Erreur \n");
    }
    else if ( dure > 5 )
    {
      reduction = prini * 0.1 ;
    }
    else
    {
      reduction = 0 ;
      printf("aucune reduction \n");
    }
    prfinal = prini + aug - reduction ;
    printf("le prix initiale est:%.2f dh\n",prini);
    printf("l'augmentation est:%.2f dh\n",aug);
    printf("la reduction est:%.2f dh\n",reduction);
    printf("le prix final est:%.2f dh\n",prfinal);
}