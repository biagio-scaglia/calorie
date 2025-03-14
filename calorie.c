#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NUM_GIORNI 7

int main(void) {
    double calorie_per_settimana[NUM_GIORNI] = {0.0};
    double media_calorie = 0.0;

    for (int i= 0; i < NUM_GIORNI; i++) {
        printf("Queste sono le calorie del giorno %d.\n", i + 1);
        do {
            printf("Inserire un valore positivo:\n ");
            scanf("%lf", &calorie_per_settimana[i]);
        } while (calorie_per_settimana[i] < 0.0);
        media_calorie += calorie_per_settimana[i];
    }

    printf("La media delle calorie assunte è: %lf\n", media_calorie / NUM_GIORNI);
}
