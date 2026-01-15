#include <stdio.h>
#include <math.h>

void main()

{
  /*  int S,K,z;
    do
    {
    printf("depot d'argent:");
    printf("retrait d'arent:");
    printf("le solde:");
    printf("quitter");
    scanf("%d",&K);
    switch (K)
    {
    case 1:
    printf("le montant a deposer est:")
    scanf("%d",&z);
    S=0;
    if (z>0)
    {
    S=S+z;
    printf("le montant deposer est:\n");
    }
    else
    { 
    printf("erreur");
    }
    printf("le solde actuelle est:%d\n",S);
    break;

    case 2:
    printf("le retrait pris est:");
    scanf("%d",&z);
    if (z>0 && z<=5)
    {
        S-=z;
        printf("le montant prend est:DH\n");
    }
        else
        { 
        printf("erreur:");
    }
    printf("solde actuele est :%dDH\n",S);
        break;

        case 3:
        printf("le solde est :%ddh\n",S);  

        default:
        printf("\nquitter\n");
        break;
    }

    } while (K!=4);
    
}
*/

int S,K,z;
    S=0;
    do
    {
    printf("depot d'argent: \n");
    printf("retrait d'arent: \n");
    printf("le solde: \n");
    printf("quitter \n");
    printf("choix : \n");
    scanf("%d",&K);
    switch (K)
    {
    case 1:
    printf("le montant a deposer est:");
    scanf("%d",&z);

    if (z>0)
    {
    S=S+z;
    printf("le montant deposer est :\n");
    }
    else
    { 
    printf("erreur");
    }
    printf("le solde actuelle est: %d\n",S);
    break;

    case 2:
    printf("le retrait pris est:");
    scanf("%d",&z);
    if (z>0 && z<=S)
    {
        S-=z;
        printf("le montant prend est:DH\n");
    }
    else
    { 
        printf("erreur:");
    }
        printf("solde actuele est :%dDH\n",S);
        break;

    case 3:
        printf("le solde est :%ddh\n",S);  

    default:
        printf("\nquitter\n");
        printf("le solde est :%ddh\n",S); 
        break;
    }

    } while (K!=4);
}



