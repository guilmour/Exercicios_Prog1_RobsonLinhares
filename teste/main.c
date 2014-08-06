/*
 * File:   main.c
 * Author: guilmour.com & Cleisson
 *
 * Created on 3 de Junho de 2014, 10:26
 */

#include <stdio.h>
#include <stdlib.h>
/*
 *
 */
int main() {
    int i, k=0, ant=0, flag, cont=0, cont_aux=0;
    printf("Digite um número aleatorio:");

    while(flag != 0)
    {
        scanf("%d", &k);
        if(k <= 0)
        {
            flag=1;
            break;
        }

        if(k > ant)
        {
            cont++;
        }

        else //ou seja k < ant
        {
            if(cont_aux < cont)
            {
            cont_aux = cont;
            cont = 1;
            }

        }

        ant = k;

    }

    if (cont > cont_aux)
    printf("A maior sequência crescente tem %d números.", cont);

    if (cont < cont_aux)
    printf("A maior sequência crescente tem %d números.", cont_aux);
}
