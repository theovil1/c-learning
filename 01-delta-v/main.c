#include <stdio.h>
#include <math.h>

int main(void) {

    // Premières lignes écrites pour tester :
    // int altitude = 400;
    // double vitesse = 27574.2;
    // double masse;


    // printf("Hello from mission control\n");
    // printf("Altitude ISS : %d km, Vitesse %.1f km/h\n", altitude, vitesse);

    // printf("Masse de la fusée (kg) :");
    // scanf("%lf", &masse);
    // printf("Masse reçue : %.1f kg\n", masse);


    // return 0;

    double exhaustVelocity;
    double initialMass;
    double finalMass;
    double deltaV;

    printf("Merci de renseigner les valeurs ci-dessous.\n");
    printf("Vitesse d'éjection des gaz (m/s) : \n");
    scanf("%lf", &exhaustVelocity);
    printf("Masse initiale (kg) : \n");
    scanf("%lf", &initialMass);
    printf("Masse finale (kg) :\n");
    scanf("%lf", &finalMass);

    if (finalMass > initialMass || finalMass == 0) {
        printf("Erreur : données invalides, veuillez réessayer. \n");
        return 0;
    }

    deltaV = exhaustVelocity * log(initialMass / finalMass);

    printf("Résultat de l'équation de Tsiolkovski : %.1f m/s\n", deltaV);

    return 0;

}