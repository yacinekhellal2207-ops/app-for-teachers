#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    float M,sum=0,ave=0,pp=0,pn=0,pos=0,neg=0,mm=0,MM=0,vect[60];
    char name[20],fname[20];
    printf(" Cette application affiche :\n\n");
    printf(" la moyenne de la classe.\n le pourcentage et le nombre des \x82l\x8Aves ayant la moyenne superieure \x85 10.\n le pourcentage et le nombre des \x82l\x8Aves ayant la moyenne inferieure \x85 10.\n\n");
    printf(" Entrez le nombre d'\x82l\x8Aves d'une seule classe (max 60):");
    do{
    scanf("%d",&n);
    if(n>=60 || n<=0){printf(" \n erreur! nombre invalide redonnez un nombre(max 60)\n\n");}
      }while(n>60 || n<=0);
    for(i=1;i<=n;i++){
        printf("Entrez le nom et le pr\x82nom de l'\x82l\x8Ave %d: ",i);
        scanf("%s %s",&name,&fname);
        printf("Entrez la note de %s %s :\n",name,fname);
    do{
        scanf("%f",&M);
    if(M>20 || M<0){printf(" erreur! note invalide , redonnez la note de %s %s: \n\n",name,fname);
     scanf("%f",&M);}
      }while(M>20 || M<0);
             sum=sum+M;
             ave=sum/n;
             if (M>=10){pos++;}
             else{neg++;}
             pp=(pos*100/n);
             pn=(neg*100/n);
             }
        printf("la moyenne de toute la classe est : %.2f \n\n\n",ave);
        printf(" %.1f%% ont eu plus de 10 (%.0lf \x82l\x8Aves)\n",pp,pos);
        printf(" %.1f%% ont eu moins de 10 (%.0lf \x82l\x8Aves)\n",pn,neg);

return 0;
}
