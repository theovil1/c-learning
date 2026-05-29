#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main(void) {

    char *steps[] = {"Début de la séquence automatique", "Allumage moteur principal", "Décollage !"};
    // enum Step { STEP_LAUNCH, STEP_ENGINE, STEP_LIFTOFF };
    double altitude = 0;
    int acceleration = 30;

    for (int i = 10; i >= 0; i--) {

        if (i == 10) 
        {
            printf("T-10 : %s\n", steps[0]); // steps[STEP_LAUNCH]
        } else if (i == 5) 
        {
            printf("T-5 : %s\n", steps[1]); // steps[STEP_ENGINE]
        } else if (i == 0)
        {
            printf("T-0 : %s\n", steps[2]); // steps[STEP_LIFTOFF]
        } else 
        {
            printf("T-%d\n", i);
        }
        
        sleep(1);

    }

    for (int j = 1; j < 6; j++) {

        altitude = 0.5 * acceleration * pow(j, 2.0f); // Mieux que pow() pour un carré : j * j et 0.5 * acceleration = règle de promotion implicite, le plus "petit" est promu vers le plus grand
        printf("Altitude T+%d : %.1f m\n", j, altitude);
        
        sleep(1);

    }

    printf("KABOOM !\n");


    return 0;

}