#include <stdio.h>

int main(void) {
   int CG,CS,NA;
   float TCG,TCS,TA,THT,T,TTC;
   printf("entrez le nombre de consultation generales:\n");
   scanf("%d",&CG);
    printf("entrez le nombre de consultation specialisees:\n");
   scanf("%d",&CS);
    printf("entrez le nombre d'analyse:\n");
   scanf("%d",&NA);

   TCG=CG*150;
   TCS=CS*250;
   TA=NA*200;
   THT=(TCG+TCS)+TA;
   T=0.2*THT;
   TTC=THT-T;
   printf("le total des consultations generales est:%.2f\n",TCG);
   printf("le total des consultations specialisees est:%.2f\n",TCS);
   printf("le total des analyses est:%.2f\n",TA);
   printf("le total de profits hors taxe est:%.2f\n",THT);
   printf("le taxe est:%.2f\n",T);
   printf("le profits toute taxe est:%.2f\n",TTC);



}
