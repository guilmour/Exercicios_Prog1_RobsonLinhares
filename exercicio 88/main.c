/* 
 * File:   main.c
 * Author: Guilmour Rossi
 *
 * Created on 22 de Julho de 2014, 09:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int matriz[20][20], i, j;

    for(i=0; i <20; i++){
        for(j=0; j<20; j++){
        matriz[i][j]= 0;
        printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }




    return (EXIT_SUCCESS);
}

