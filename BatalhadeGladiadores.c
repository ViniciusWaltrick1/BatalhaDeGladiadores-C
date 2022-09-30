#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
Gladiador com caracteristicas
criar 6 gladiadores aleatoriamente, com as caracteristicas aleatorias.
Vetor de 6 gladiadores com os valores aleatorios
fazer formula do poder (poder = forca * peso * resistencia / altura * agilidade)
antes de batalhar imprimir as caracteristicas e o poder dos personagens
selecione aleatoriamente um gladiador para combater contra os outros aleatoriamente um por vez.
Quem vence e quem tem mais poder
Nao batalhar contra o mesmo gladiador 2 vezes. E nao batalhar contra seu proprio gladiador.
*/

typedef struct
{

    int resistencia, peso, forca, altura, agilidade;
    int poder;

    char nome[100];

} Caracteristicas;

int main()
{
    // variavel personagem principal
    int personagem;

    srand(time(NULL));

    Caracteristicas car[6];

    // caracteristicas aleatorias e calculo do poder
    for (int c = 0; c < 6; c++)
    {
        car[c].altura = (rand() % (210 - 150 + 1)) + 150;
        car[c].peso = (rand() % (120 - 50 + 1)) + 50;
        car[c].forca = (rand() % (100 - 10 + 1)) + 10;
        car[c].resistencia = (rand() % (100 - 10 + 1)) + 10;
        car[c].agilidade = (rand() % (100 - 10 + 1)) + 10;
        strcpy(car[0].nome, "Gladiador 1");
        strcpy(car[1].nome, "Gladiador 2");
        strcpy(car[2].nome, "Gladiador 3");
        strcpy(car[3].nome, "Gladiador 4");
        strcpy(car[4].nome, "Gladiador 5");
        strcpy(car[5].nome, "Gladiador 6");
        car[c].poder = car[c].forca * car[c].peso * car[c].resistencia / car[c].altura * car[c].agilidade;
        printf("O %s tem as caracteristicas: Altura: %d, Peso: %d, Forca: %d, Resistencia: %d, Agilidade: %d, e poder de %d.\n", car[c].nome, car[c].altura, car[c].peso, car[c].forca, car[c].resistencia, car[c].agilidade, car[c].poder);
    }
    // decidindo o gladiador principal
    personagem = rand() % 6; // numero aleatorio de 0 a 5
    if (personagem == 0)
    {
        printf("O Gladiador 1 e o principal!\n");
    }
    else if (personagem == 1)
    {
        printf("O Gladiador 2 e o principal!\n");
    }
    else if (personagem == 2)
    {
        printf("O Gladiador 3 e o principal!\n");
    }
    else if (personagem == 3)
    {
        printf("O Gladiador 4 e o principal!\n");
    }
    else if (personagem == 4)
    {
        printf("O Gladiador 5 e o principal!\n");
    }
    else
    {
        printf("O Gladiador 6 e o principal!\n");
    }
    // combate aleatorio e criacao da variavel aleatoria ca(CombateAleatorio)
    for (int ca = 0; ca <= 5; ca++)
    {
        if (ca != personagem)
        {
            if (car[ca].poder > car[personagem].poder)
            {
                printf("%d x %d = Derrota!\n", personagem + 1, ca + 1);
            }
            else
            {
                printf("%d x %d = Vitoria.\n", personagem + 1, ca + 1);
            }
        }
    }

    return 0;
}