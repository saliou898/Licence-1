#include <stdio.h>
#define n 4
int main(){
    int tab[n], i, cptp=0,cptn=0;

    for (i=0; i<n; i++){
        printf("Donner la valeur %d: ", i);
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++){
        printf("%d;" , tab[i]);
    }
    for(i=0;i<n;i++){
        if(tab[i]>0){
            cptp++;
        }else{
            if (tab[i]<0){
                cptn++;
            }
        }
    }
    printf("\n");
    printf("Le nombre d'entier positif: %d\n",cptp);
    printf("Le nombre d'entier negatif: %d", cptn);
}
