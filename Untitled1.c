#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int votantes, voto;
    printf("\n-----Junta Central Electoral-----\n");

    int contadorvotantes = 0;
    char segundavuelta;
    int vueltas=0;

    do
    {
        printf("\nIngresa la cantidad de votantes: \n");
        scanf("%d", &votantes);

        int meta = (votantes / 2) + 1;
        contadorvotantes = 0;
        int partidoA = 0, partidoB = 0, partidoC = 0;


        printf("\n--Existen 3 partidos--\n");
        printf("\n A=1, B=2, C=3 \n");

        while (contadorvotantes < votantes)
        {
            printf("\n Elije tu voto \n");
            scanf("%d", &voto);

            if (voto >= 1 && voto <= 3)
            {
                if (voto == 1)
                {
                    partidoA++;
                }
                else if (voto == 2)
                {
                    partidoB++;
                }
                else
                {
                    partidoC++;
                }
            }
            else
            {
                printf("\nPartido invalido!!!\n");
            }
            contadorvotantes++;
        }

        if (partidoA >= meta)
        {
            printf("\n !!!---El ganador es el partido A con %d votos!!!---\n", partidoA);
        }
        else if (partidoB >= meta)
        {
            printf("\n !!!---El ganador es el partido B con %d votos!!!---\n", partidoB);
        }
        else if (partidoC >= meta)
        {
            printf("\n !!!---El ganador es el partido C con %d votos!!!---\n", partidoC);
        }
        else
        {
            printf("\n-----Ningun partido gano!-----\n");

            do
            {
                printf("\nQuieres ir a una segunda vuelta? [N/S]\n");
                scanf(" %c", &segundavuelta);

                segundavuelta = toupper(segundavuelta);
                if (segundavuelta == 'S')
                {
                    break;
                }
                else if (segundavuelta == 'N')
                {
                    return 0;
                }
            }
            while (segundavuelta != 'S' && segundavuelta != 'N');
        }

    }
    while (1);
    vueltas++;

    printf("\n -----Valvaro! Se hicieron %d vueltas, aprende a perder!!!-----\n");

    return 0;
}
