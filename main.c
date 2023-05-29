#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double G = 9.81;
float z;
float m;


int calcul();

int main(){
    int choix;
    printf("\nBienvenue dans le programme de calcul de vitesse d'objets !\n");
    do{
        printf("\n1 - Calculer l'énergie potentielle de pesanteur d'un objet en fonction de sa masse et de sa hauteur.\n");
        printf("\n2 - Quitter le programme.\n\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch(choix){
            case 1:
                calcul();
                break;
            case 2:
                printf("Au revoir !");
                break;
            default:
                printf("\nErreur : veuillez entrer un nombre valide.\n\n");
                break;
        }
    }while (choix != 2); 
   }

int calcul(){
    printf("\nEntrer la hauteur (en mètres) : ");
    scanf("%f", &z);
    printf("Entrer la masse de l'ojet (en kg) : ");
    scanf("%f", &m);
    printf("\nÀ %fm, l'objet d'une masse de %fkg possède une énergie potentielle de pesanteur de %fN.", z, m, m*G*z);
    printf("\n\nQuand la hauteur tend vers 0m, juste avant l'impact, l'objet possède une énergie cinétique identique (dans le cas d'une chute libre sans frottements) à l'énergie potentielle de pesanteur.");
    printf("\n\nEn effectuant un calcul assez simple, on trouve que, quand la hauteur tend vers 0m, l'objet possède une vitesse de %fm.s^-1, soit une vitesse de %fkm.h^-1.\n\n", sqrt(2*G*z), sqrt(2*G*z)*3.6);
    return 0;
}