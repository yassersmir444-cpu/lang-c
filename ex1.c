#include <stdio.h>
#include <math.h>

void main()

{
   /* int N;
do
{
    printf("entrez un nombre N:");
    scanf("%d",&N);
    
} 
    while (N>1 && N<=30);


    

}
    */

   /* int N;
    do {
    printf("entrez N:");
    scanf("%d",&N);
    
    if(N>20){
    printf("plus petit!\n");
    }
    else if(N<10){
    printf("plus grand!\n");
    }
 
}
    while(N<10 || N>20);

    printf("congratulation\n");
}
*/
/*int N,i,S=0,P=1,M,x;
do
{
("entrez N:");
scanf("%d",&N);
} while ( N <= 0 ) ;

for ( i = 1 ; i <=N; i++)
{
    scanf("%d",&x);
    S+=x ;
    P*=x ;
}
     M=S/(float)N;
     printf("la somme est:%d\n",S);
     printf("le produit est %d\n",P);
     printf("la moyenne est:%.2f\n",M);

}
*/
 /*int n,i,S=0,x=1;
do{
printf("entrez n:");
scanf("%d",&n);
}while(n<0);

for ( i = 0; i <n; i++)
{
 x*=(n-i);
}
printf("la fractionnelle de %d est:%d\n",n,x);
}
*/
/*int N,i;

printf("entrez N:");
scanf("%d",&N);
printf("table de %d est:\n",N);
for(i=1;i<=10;i++)
printf("%d*%d=%d\n",N,i,N*i);
}
*/
/* int U,U1=1,U2=2,i,k;
  printf("entrez k:");
  scanf("%d",&k);
    if(k==1){
  printf("U1=1\n");}
  else if(k==2){
  printf("U2=2\n");}
  else{
  for(i=3;i<=k;i++){
   U=U1+U2;
   U1=U2;
   U2=U;
  }
   printf("U%d=%d\n",k,U);
}
}
*/
 /* int V=2,k,i,S=2;
  
  printf("enrez k:");
  scanf("%d",&k);
   
  for(i=1;i<=k;i++){
  if(k%2==0)
  V+=2;
  else 
  V+=4;
  S+=V;
  }
  printf("la somme des %d est:%d\n",k+1,S);
}
  */
 /* int n=1;
 float U;
do{
    U=1.0/(2*n);
    printf("U%d=%.6f\n",n,U);
    n++;
}
while(n>=0.0001);
}
*/
/*int N,i,ma=1,nots=0;
float note,max;
printf("entrez les notes:");
scanf("%d",&N);
printf("la note num 1 est :");
scanf("%f",&note);
max=note;
if(note>=10)
nots++;
for(i=2;i<=N;i++){
printf("entrez la note %d\n",i);
scanf("%f",&note);
if(note>=10)
nots++;

 if(note>max){

 max=note;
 ma=i;
}
}
printf("le nombre de note sup ou egale a 10 est:%d\n",nots);
printf("la note max est:%.2f\n",max);
printf("la note num %d",ma);
}
*/
 /*int N,i;
float S=0;

printf("entrez N nombre:");
scanf("%d",&N);

for(i=1;i<=N;i++){

S+=1.0+(1.0/i);
}
printf("la somme est:%.2f",S);
}
*/
/*int N,i,max,pos=1,maxpos;
printf("entrez un nombre positive:");
scanf("%d",&N);
max=N;
while(N>=0){
if(N>max){
max=N;
maxpos=pos;
}
pos++;
printf("entrez un nombre positive:");
scanf("%d",&N);
}
printf("le plus grand nombres est:%d\n",max);
printf("sa position est:%d\n",maxpos);
}
*/

/*int N,i,S;
printf("entrez N:");
scanf("%d",&N);
for ( i = 0; i <=10; i++)
{
    S=N*i;
    printf("%d*%d=%d\n",N,i,S);
}
}
*/
 /*int N,max=0,posmax,pos=0,i;
 float note;
do
{
  printf("entrez un nombre positive:");
 scanf("%d",&N);  
} while (N<=0);

 max=N;
 for ( i = 1; i <=N ; i++)
 {
 do{
    printf("entrez la note:");
   scanf("%f",&note);
    while(N<=0):
   if(note>max){
   max=note;
   posmax=i;}
   if(note>=10){
   pos=pos+1;
 }
 }
 printf("le nombre de note sup ou egale a 10 est:%d\n",note);
 printf("la note max est:%d\n",max);
 printf("la note num:%d\n",posmax);
}
 */
 /*int N,i,cpt=0;
printf("entrez N:");
scanf("%d",&N);

for(i=2;i<=N-1;i++)
{
    if(N%i==0)
    {
        cpt++;
        printf("%d/%d=%d\n",N,i,N/i);
    }
}
if(cpt>=1){
    
printf("c'est pas un nombre premier");}
else{
printf("c'est un nombre premier");}
}
*/
     /*   int N,min,nbr,cpt=0,inv=0,p=0,S,M,n;
        do
    {
        printf("entrez N:");
        scanf("%d",&N);
    }   while (N<=0);
    nbr=N;
        while(N!=0){
         nbr=N%10;
        N=N/10;
        cpt++;
        if(nbr<min){
            min=nbr;
        }
        if(nbr%2==0){
    S=S+nbr;
    p++;
    }
    inv=inv*10+nbr;
    }
     if(n==inv){
    printf("palidrome");
      } else{
    printf("n est.........");}
    
        printf("le nombbre des chiffre est:%d\n",cpt);
        printf("le min est:%d\n",min);
        printf("le nombre des paire sont:%d\n",p);
        printf("l'inverse est:%d\n",inv);
        printf("la moyenne est:%.2f\n",M,S,p,(float)S/p);
    }
        */
       int N,i,k;
       do
       {
        printf("entrez N");
        scan
       } while (N>=0);
       






 



  
  





