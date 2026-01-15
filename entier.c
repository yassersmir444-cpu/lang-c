#include <stdio.h>

void main()
{
   int m,j,a,nbjr;
   printf("entrez j:");
   scanf("%d",&j);
    printf("entrez m:");
   scanf("%d",&m);
    printf("entrez a:");
   scanf("%d",&a);
if(m==1|| m==3|| m==5|| m==7|| m==10|| m==12)
   nbjr=31;
 else if(m==4|| m==6|| m==8|| m==9|| m==11)
   nbjr=30;
   else
   nbjr=28;

   if(j<nbjr)
   j=j+1;
   else
   j=1;
   if(m<12)
   m=1+m;
   else
   m=1;
   a=a+1;
   printf("la date du lendemain est:%d/%d/%d\n",j,m,a);
}
