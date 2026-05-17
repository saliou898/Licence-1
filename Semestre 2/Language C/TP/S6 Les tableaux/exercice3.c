#include <stdio.h>"
#include <stdbool.h>

#define n 15
int main(){
    int tab[n][n];
    int i,j,val,dval;
    bool trouve;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Donner la valeur de la cellule [%d] [%d]: ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }

    printf("Donner la valeur a changer: ");
    scanf("%d",&val);
    trouve=false;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(tab[i][j]==val){
                trouve=true;

            }
        }
    }
    if(trouve==true){

        printf("Donner la valeur pour modifier: ");
        scanf("%d",&dval);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(tab[i][j]==val){
                    tab[i][j]=dval;
            }

        }
    }

    }else{
        printf("La valeur %d ne se trouve pas dans la matrice !!!\n",val);
        printf("\n");

    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",tab[i][j]);
        }
        printf("\n");
    }



}
