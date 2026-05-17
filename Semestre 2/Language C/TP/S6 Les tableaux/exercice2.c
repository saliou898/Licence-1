#include <stdio.h>
#define L 2
#define C 5
int main(){
    int tab[L][C];
    int i,j,cpt,val;

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("Donner le valeur de la cellule [%d] [%d] : ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }
    printf("Donner la valeur rechercher: ");
    scanf("%d",&val);

    cpt=0;
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%4d",tab[i][j]);

            if(tab[i][j]==val){
                cpt++;
            }

        }
        printf("\n");
    }
    printf("La valeur %d est present dans la matrice %d fois ",val,cpt);
    return 0;
}
