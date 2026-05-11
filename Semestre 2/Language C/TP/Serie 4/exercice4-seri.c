#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NB_EMPLOYES 10

typedef struct {
    char nom[50];
    char prenom[50];
    char code[20];
    float salaire;
    char fonction[50];
    int nb_enfants;
} Employe;

int main()
{
    Employe employes[NB_EMPLOYES];
    int compte_gaye = 0;

    // Saisie des données
    for (int i = 0; i < NB_EMPLOYES; i++) {
        printf("\n--- Saisie Employé %d ---\n", i + 1);
        printf("Code : ");
        scanf("%s", employes[i].code);
        printf("Nom : ");
        scanf("%s", employes[i].nom);
        printf("Prénom : ");
        scanf("%s", employes[i].prenom);
        printf("Salaire : ");
        scanf("%f", &employes[i].salaire);
        printf("Fonction : ");
        scanf("%s", employes[i].fonction);
        printf("Nombre d'enfants : ");
        scanf("%d", &employes[i].nb_enfants);

        // Vérification du nom "GAYE" (insensible à la casse)
        if (strcasecmp(employes[i].nom, "GAYE") == 0) {
            compte_gaye++;
        }
    }

    printf("\n======================================================\n");
    printf("EMPLOYÉS (Prénom > 5 car. et se terminant par 'E' ou 'e') :\n");
    printf("======================================================\n");

    int trouve = 0;
    for (int i = 0; i < NB_EMPLOYES; i++) {
        int len_prenom = strlen(employes[i].prenom);
        char dernier_car = employes[i].prenom[len_prenom - 1];

        // Condition : longueur > 5 ET finit par 'e' ou 'E'
        if (len_prenom > 5 && (dernier_car == 'e' || dernier_car == 'E')) {
            printf("Code: %s | Nom: %s | Prénom: %s | Salaire: %.2f | Fonction: %s\n",
                   employes[i].code, employes[i].nom, employes[i].prenom,
                   employes[i].salaire, employes[i].fonction);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun employé ne correspond aux critères du prénom.\n");
    }

    printf("\n------------------------------------------------------\n");
    printf("Nombre d'employés dont le nom est GAYE : %d\n", compte_gaye);
    printf("------------------------------------------------------\n");

    return 0;
}
