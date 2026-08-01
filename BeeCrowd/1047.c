#include <stdio.h>
int main()
{
    int horaInicial, minutoInicial, horaFinal, minutoFfinal, hora, minuto, duracao;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFfinal);

    horaInicial = (horaInicial * 60) + minutoInicial;
    horaFinal = (horaFinal * 60) + minutoFfinal;

    duracao = horaFinal - horaInicial;

    if(duracao <= 0)
    {
        duracao = duracao + 1440;   
    }  

    hora = duracao / 60;
    minuto = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto); 

    return 0;
}