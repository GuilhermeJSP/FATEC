#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (void)
{
    char repet, Jogador1[21], Jogador2[21], Escolha, Vencedor[21], Resultado;
    int Mao1, Mao2, Soma;

    printf("Vamos jogar Par ou Impar? [S/N]\n\t\t\t   ");
    scanf(" %c", &repet);

    while (repet == 'S' || repet == 's')
    {
        system("cls");
        printf("Quem sera o jogador inicial?\n\t\t\t");
        scanf(" %[^\n]s", Jogador1);
        printf("\nE quem sera o outro jogador?\n\t\t\t");
        scanf(" %[^\n]s", Jogador2);

        printf("\n%s escolha par ou impar [P/I]\n\t\t\t", Jogador1);
        scanf(" %c", &Escolha);

        if (Escolha == 'P' || Escolha == 'p')
            Escolha = 'P';
        else if (Escolha == 'I' || Escolha == 'i')
            Escolha = 'I';
        else
        {
            printf("\t\tEscolha Invalida!\n");
            printf("\t\tAperte Enter para reiniciar");
            getchar(); //pega a quebra de linha
            getchar(); //espera o comando enter
            continue; //reinicia o programa
        }

        printf("\n%s jogue seu numero \n\t\t\t", Jogador1);
        scanf("%i", &Mao1);
        printf("\n%s jogue seu numero \n\t\t\t", Jogador2);
        scanf("%i", &Mao2);

        //soma para ver se o valor é par ou impar
        Soma = Mao1 + Mao2;

        //verifica se o resto da divisao por 2 é igual a 0, ou seja, par
        if (Soma % 2 == 0)
            Resultado = 'P';
        else
            Resultado = 'I';

        if (Resultado == Escolha)
            strcpy (Vencedor, Jogador1);
        else
            strcpy (Vencedor, Jogador2);



        printf("\n\O jogador %s venceu\n", Vencedor);
        printf("\nVamos jogar outra partida? [S/N]\n\t\t\t");
        scanf(" %c", &repet);
    }
    printf("\n\nAte logo!\n\n");
    system("pause");
    return 0;
}
