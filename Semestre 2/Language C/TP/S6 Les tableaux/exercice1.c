#include <stdio.h>
#define n 5
int main(){
    int tab[n][n];
    int i,j,cptp,cptn;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Donner la valeur de le cellule [%d] [%d] : ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }
    cptn=0;
    cptp=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",tab[i][j]);
            if(tab[i][j]>0){
                cptp++;
            }
            if(tab[i][j]<0){
                cptn++;
            }

        }
        printf("\n");
    }
    printf("Le nombre de valeur positif: %d\n",cptp);
    printf("Le nombre de valeur negatif: %d\n",cptn);



    return 0;
}
