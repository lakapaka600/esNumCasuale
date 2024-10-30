#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int MIN = 10;
    const int MAX = 20;
    int numCasuale, i, numero;
    int tentativo = 0;
    int numeroIndovinato = 0;
    printf("-- indovina il mio numero sapendo che il range tra %d e %d -- ", MIN, MAX);
    printf("\n");


    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        numCasuale = rand() % (MAX - MIN + 1) + MIN;
        printf("inserisci il numero");
        scanf("%d", &numero);
        printf("il numero generato e:%d\n", n);
        if (numero <= MAX && numero >= MIN) {
            if (numero == numCasuale) {
                printf("bravo hai indovinato il numero \n");
                numeroIndovinato++;
                break;

            } else {
                tentativo++;
                printf("attenzione hai sbagliato!\n");
                if (tentativo > 3) {
                    printf("troppi tentativi\t");
                    break;
                }
            }
        } else {
            printf("non sei entrato nel range\n");
        }
    }
    if (numeroIndovinato > 0) {
        printf("hai indovinato il numero  in %d tentativi \n", tentativo);
    } else {
        printf("non sei riuscito ad indovinare nessun numero ");
    }
    return 0;
}
