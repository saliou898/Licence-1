#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nom[50];
    char prenom[50];
    char matricule[20];
    float moyenne;
} Etudiant;


int main() {
    int K;
    Etudiant e;
    int indice_max = 0, indice_min = 0;
    do{
    printf("Entrez le nombre d'étudiants (K) : ");
    scanf("%d", &K);
    }while(K<=0);

    for (int i = 0; i < K; i++)
        {
        printf("\n--- Étudiant %d ---\n", i + 1);
        printf("Nom : ");
        scanf("%s", e.nom);
        printf("Prénom : ");
        scanf("%s", e.prenom);
        printf("Moyenne : ");
        scanf("%f", &e.moyenne);



        // Mise à jour des indices min et max
        if (e.moyenne > etuddiant[indice_max].moyenne)
        {
            indice_max = i;
        }
        if (e.moyenne < e.indice_min.moyenne)
        {
            indice_min = i;
        }
    }
    void generer_matricule(Etudiant *e)
{
    char debut_nom[4];
    int len_nom = strlen(e->nom);
    int len_prenom = strlen(e->prenom);
    int somme_len = len_nom + len_prenom;

    // Gestion des 3 premiers caractères du nom
    if (len_nom >= 3)
    {
        strncpy(debut_nom, e->nom, 3);
    }
    else
    {
        // Si le nom a moins de 3 caractères
        strncpy(debut_nom, e.nom, len_nom);
        for(int i = len_nom; i < 2; i++)
        {
            debut_nom[i] = e->nom[i]; // Copie ce qui existe
        }
        debut_nom[2] = '@'; // Remplace le 3ème par @
    }
    debut_nom[3] = '\0';

    // Format : 1er car. prénom - 3 car. nom - (somme longueurs)
    sprintf(e.matricule, "%c-%s-%d", e.prenom[0], debut_nom, somme_len);
}


    // Affichage des résultats
    printf("\n==========================================");
    printf("\nÉTUDIANT AYANT LA PLUS GRANDE MOYENNE :");
    printf("\nNom : %s", etudiants[indice_max].nom);
    printf("\nPrénom : %s", etudiants[indice_max].prenom);
    printf("\nMatricule : %s", etudiants[indice_max].matricule);
    printf("\nMoyenne : %.2f", etudiants[indice_max].moyenne);

    printf("\n\nÉTUDIANT AYANT LA PLUS PETITE MOYENNE :");
    printf("\nNom : %s", etudiants[indice_min].nom);
    printf("\nPrénom : %s", etudiants[indice_min].prenom);
    printf("\nMatricule : %s", etudiants[indice_min].matricule);
    printf("\nMoyenne : %.2f", etudiants[indice_min].moyenne);
    printf("\n==========================================\n");

    return 0;
}
