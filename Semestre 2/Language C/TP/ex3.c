#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct Produit{
    char code [30];
    char lib[30];
    float prix;
    int q;
};
int main(){
    struct Produit p[5];
    int i;
    for(i=1;i<=5;i++){
        printf("======= Produit %d =======\n",i);
        printf("Donner le code: ");
        scanf("%s",p[i].code);
        printf("Donner le libeller: ");
        scanf("%s",p[i].lib);
        do{
            printf("Donner le pix du produit: ");
            scanf("%f",&p[i].prix);
        }while(p[i].prix<0);
    }
    return 0;
}
