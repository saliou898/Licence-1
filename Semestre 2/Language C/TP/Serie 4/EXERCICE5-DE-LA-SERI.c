#include <stdio.h>
#include <string.h>

#define MAX_MATIERES 100

typedef struct {
    char nom[20]; // On prévoit un peu plus pour la saisie avant vérification
    int coefficient;
    float note;
} Matiere;

int main()
 {
    int N;
    Matiere matieres[MAX_MATIERES];
    float somme_notes = 0;
     do{
    printf(" saisir le nombre de matiere ");
    scanf("%d", &N);
    }while(N<=0);

    for (int i = 0; i < N; i++)

      {
        printf("\n--- Saisie Matière ", i + 1);

        // Validation du nom (max 7 caractères)
        do {
            printf("Nom de la matière  : ");
            scanf("%s", matieres[i].nom);
            if (strlen(matieres[i].nom) > 7)
            {
                printf("Erreur : Le nom est trop long !\n");
            }
          } while (strlen(matieres[i].nom) > 7);

        // Validation du coefficient (1 à 6)
        do {
            printf("Coefficient : ");
            scanf("%d", &matieres[i].coefficient);
            if (matieres[i].coefficient < 1 || matieres[i].coefficient > 6)
            {
                printf("Erreur : Le coefficient doit être entre 1 et 6.\n");
            }
         } while (matieres[i].coefficient < 1 || matieres[i].coefficient > 6);

        // Validation de la note (0 à 20)
        do {
            printf("Note (0-20) : ");
            scanf("%f", &matieres[i].note);
            if (matieres[i].note < 0 || matieres[i].note > 20)
            {
                printf("Erreur : La note doit être entre 0 et 20.\n");
            }
         } while (matieres[i].note < 0 || matieres[i].note > 20);

        somme_notes += matieres[i].note;
    }

    // Affichage des résultats
    printf("\n==========================================\n");
    printf("MATIÈRES AVEC COEFFICIENT >= 2 :\n");
    printf("------------------------------------------\n");

    int trouve = 0;
    for (int i = 0; i < N; i++)
    {
        if (matieres[i].coefficient >= 2)
        {
            printf("- %s (Coef: %d, Note: %.2f)\n",
                   matieres[i].nom, matieres[i].coefficient, matieres[i].note);
            trouve = 1;
        }
    }

    if (!trouve)
    {
        printf("Aucune matière n'a un coefficient supérieur ou égal à 2.\n");
    }

    if (N > 0)
    {
        printf("\nMOYENNE GÉNÉRALE DES NOTES : %.2f\n", somme_notes / N);
    }
    printf("==========================================\n");

    return 0;
}
