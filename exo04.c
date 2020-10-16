#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

#define FFLUSH_STDIN() {int _c; while ((_c = getchar()) != '\n' && _c != EOF){}} 

int main(int argc, char *argv[])
{
    //Exo 4.1
    srand(time(NULL));
    
    int x;
    char c;
    bool found = false;
    do
    {
        found = false;
        int secret = rand() % 11;
        while (!found)
        {
            printf("Veuillez entrer un nombre : ");
            scanf("%d", &x);
            printf((x > secret) ? "Plus petit\n" : (x < secret) ? "Plus grand\n" : "Vous avez gagné\n" );

            if(x == secret)
            {
                found = true;
            }
        }
        printf("Voulez-vous recommencer ? (o/n) : ");
        FFLUSH_STDIN();
        scanf("%c", &c);
    } while (c == 'o');

    //Exo 4.2 (Impossible aucun type numérique ne peut stocker correctement au dela du 94eme (long double))
    long double nb1 = 1, nb2 = 1, fibo;

    printf("1 : %.0Lf\n", nb1);
    printf("2 : %.0Lf\n", nb2);
    for (int i = 0; i < 98; i++, nb1 = nb2, nb2 = fibo)
    {
        fibo = nb1 + nb2;
        printf("%d : %.0Lf\n", i + 3, fibo);
    }

    //Exo 4.3
    int nombre;
    printf("Veuillez entrer un nombre : ");
    scanf("%d", &nombre);

    long factoriel = nombre;

    for(int i = nombre - 1; i > 1; i--)
    {
        factoriel *= i;
    }
    printf("le factoriel de %d est : %ld\n", nombre, factoriel);

    //Exo 4.4
    int primeCount;

    printf("Combien de nombre premier voulez-vous : ");
    scanf("%d", &primeCount);

    for (int count = 0, value = 2; count < primeCount; value++)
    {
        bool isPrime = true;
        int racine = (int)sqrt(value);
        for (int diviseur = 2; diviseur <= racine && isPrime; diviseur++)
        {
            if(value % diviseur == 0)
                isPrime = false;
        }

        if(isPrime)
        {
            printf("%d : %d\n", count + 1, value);
            count++;
        }        
    }

    //Exo 4.5
    for (float i = 0; i < 20.0; i+= .0625)
    {
        printf("%f\n", i);
    }

    return EXIT_SUCCESS;
}