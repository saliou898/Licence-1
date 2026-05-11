#include <stdio.h>
#include <string.h>
int main(){
    char chaine [20];
    char nom [20];
    char line[80];
    printf("Donner votre prenom: ");
    scanf("%s",chaine);
    printf("Donner votre nom: ");
    scanf("%s", nom);
    strncat(chaine,nom,2);

    printf("Vous avez donner: %s\n",chaine);
    int log= strlen(chaine);
    strcpy(line,"teste l'initialisation d'une chaine en C");
    printf("Taille: %d\n", log);
    printf("%s",line);
    return 0;
}
