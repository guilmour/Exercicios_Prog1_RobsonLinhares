#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*
24. Dada a afirmação:
“A tem o dobro da idade que B tinha quando A tinha a idade que B tem.
Quando B tiver a idade de A, somarão 81 anos.”.

Fazer um programa para calcular as idades
de A e B no método “força bruta” (tentativa e erro com todos os valores inteiros possíveis).


*/

main(){
    int Apas=0, Apre=0, Afut=0, i;
    int Bpas=0, Bpre=0, Bfut=0;

    for(i=1; i < 81; i++)
    {
        Apre = i;
        Bpas = Apre / 2;
        Bfut = Apre;
        Afut = 81 - Bfut;
        Bpre = Apre - Afut + Bfut;
        Apas = Bpre;

        if (Apas - Bpas == Apre - Bpre)
        {
            break;
        }

    }

    printf("A tem %d anos e B tem %d anos\n", Apre, Bpre);
















}

