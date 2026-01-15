#include <stdio.h>
#include <math.h>

int main(void)
{
    int coiff1,coiff2,coiff3;
    float note1,note2,note3,moyg;
    
    printf("entrez les trois notes:");
    scanf("%f %f %f",&note1,&note2,&note3);
    printf("entrez les coiff:");
    scanf("%d %d %d",&coiff1,&coiff2,&coiff3);
    
    moyg=(note1*coiff1+note2*coiff2+note3*coiff3)/(coiff1+coiff2+coiff3);
    printf("la moyenne generale est:%.2f\n",moyg);
    if(moyg>10)
    printf("semestre valide");
    else if(moyg>5 && moyg<10)
    printf("ratrrapage dans cette matiere");
    else
    printf("redoublement");
}