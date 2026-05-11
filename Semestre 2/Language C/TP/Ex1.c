#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char txt[20];
    int n,i,cpt;

    do{
        printf("Donner votre texte: ");
        gets(txt);
        n=strlen(txt);
        if(n>20){
            printf("La longueur max est: 20 Caracteres !\n");
        }
    } while((n>20));
    printf("Votre texte contient: %d caracteres\n",n);
    cpt=0;
    for(i=0;i<n;i++){
        if (isspace(txt[i])){
            cpt++;
        }
    }
    printf("Le texte contient %d mots\n",cpt+1);

    for (i=0;i<n;i++){
        if(isupper(txt[i])){
           txt[i]= tolower(txt[i]);


           }

    }
    printf("Texte apres modification: %s", txt);

    return 0;
}
