#include <stdio.h>
#define L 5
#define C 11
int main(){
    int tab[L][C];
    int i,j,k,l,t;

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("Donner la valeur pour la cellule [%d][%d] : ",i,j);
            scanf("%d",&tab[i][j]);

        }
    }

    printf("Matrice avant tri: \n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%4d",tab[i][j]);

        }
        printf("\n");
    }

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            for(k=0;k<L;k++){
                for(l=0;l<C;l++){
                    if (tab[i][j]<tab[k][l]){
                        t=tab[i][j];
                        tab[i][j]=tab[k][l];
                        tab[k][l]=t;
                    }


                }
            }
        }
    }
    printf("Matrice apres tri ordre croissant: \n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%4d",tab[i][j]);

        }
        printf("\n");
    }




    return 0;
}
