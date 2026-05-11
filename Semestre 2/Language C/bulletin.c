
#include <stdio.h>

// fonction pour calculer une matière
float calcul_matiere(float devoir, float examen) {
    return devoir * 0.4 + examen * 0.6;
}

int main() {

    float d, e;

    // ===== UE1 =====
    printf("=== UE1 : Algorithmique et Programmation ===\n");

    printf("Algo - Devoir : "); scanf("%f", &d);
    printf("Algo - Examen : "); scanf("%f", &e);
    float algo = calcul_matiere(d, e);

    printf("Langage C - Devoir : "); scanf("%f", &d);
    printf("Langage C - Examen : "); scanf("%f", &e);
    float c = calcul_matiere(d, e);

    float UE1 = (algo * 4 + c * 4) / 8;

    // ===== UE2 =====
    printf("\n=== UE2 : Web & Base de données ===\n");

    printf("HTML - Devoir : "); scanf("%f", &d);
    printf("HTML - Examen : "); scanf("%f", &e);
    float html = calcul_matiere(d, e);

    printf("BDD - Devoir : "); scanf("%f", &d);
    printf("BDD - Examen : "); scanf("%f", &e);
    float bdd = calcul_matiere(d, e);

    printf("Git/GitHub - Devoir : "); scanf("%f", &d);
    printf("Git/GitHub - Examen : "); scanf("%f", &e);
    float git = calcul_matiere(d, e);

    float UE2 = (html * 3 + bdd * 2 + git * 2) / 7;

    // ===== UE3 =====
    printf("\n=== UE3 : Architecture et Systèmes ===\n");

    printf("Architecture - Devoir : "); scanf("%f", &d);
    printf("Architecture - Examen : "); scanf("%f", &e);
    float archi = calcul_matiere(d, e);

    printf("Systeme - Devoir : "); scanf("%f", &d);
    printf("Systeme - Examen : "); scanf("%f", &e);
    float sys = calcul_matiere(d, e);

    printf("Reseaux - Devoir : "); scanf("%f", &d);
    printf("Reseaux - Examen : "); scanf("%f", &e);
    float res = calcul_matiere(d, e);

    float UE3 = (archi * 2 + sys * 2 + res * 2) / 6;

    // ===== UE4 =====
    printf("\n=== UE4 : Mathématiques ===\n");

    printf("Analyse - Devoir : "); scanf("%f", &d);
    printf("Analyse - Examen : "); scanf("%f", &e);
    float analyse = calcul_matiere(d, e);

    printf("Statistiques - Devoir : "); scanf("%f", &d);
    printf("Statistiques - Examen : "); scanf("%f", &e);
    float stats = calcul_matiere(d, e);

    float UE4 = (analyse * 2 + stats * 2) / 4;

    // ===== UE5 =====
    printf("\n=== UE5 : Connaissances générales ===\n");

    printf("Anglais - Devoir : "); scanf("%f", &d);
    printf("Anglais - Examen : "); scanf("%f", &e);
    float anglais = calcul_matiere(d, e);

    printf("Outils - Devoir : "); scanf("%f", &d);
    printf("Outils - Examen : "); scanf("%f", &e);
    float outils = calcul_matiere(d, e);

    printf("Citoyennete - Devoir : "); scanf("%f", &d);
    printf("Citoyennete - Examen : "); scanf("%f", &e);
    float citoyen = calcul_matiere(d, e);

    float UE5 = (anglais * 2 + outils * 2 + citoyen * 2) / 6;

    // ===== Moyenne générale =====
    float moyenne = (UE1 * 8 + UE2 * 7 + UE3 * 6 + UE4 * 4 + UE5 * 6) / 31;

    // ===== Affichage =====
    printf("\n===== RESULTATS =====\n");

    printf("UE1 = %.2f %s\n", UE1, (UE1 >= 10) ? "Valide" : "Non valide");
    printf("UE2 = %.2f %s\n", UE2, (UE2 >= 10) ? "Valide" : "Non valide");
    printf("UE3 = %.2f %s\n", UE3, (UE3 >= 10) ? "Valide" : "Non valide");
    printf("UE4 = %.2f %s\n", UE4, (UE4 >= 10) ? "Valide" : "Non valide");
    printf("UE5 = %.2f %s\n", UE5, (UE5 >= 10) ? "Valide" : "Non valide");

    printf("\nMoyenne generale = %.2f\n", moyenne);

    if (moyenne >= 10)
        printf("Semestre valide ✅\n");
    else
        printf("Semestre non valide ❌\n");

    return 0;
}
