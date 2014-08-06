/* 
 * File:   main.c
 * Author: guilmour.com
 *
 * Created on 5 de Junho de 2014, 09:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int time_a, time_b;
    int aposta_a, aposta_b;
    int pontos = 0;
    int vencedor = 0 ; // 0 time a ~1 time b
    
    printf("Qual seu palpite sobre o placar do jogo?\nTime A vs Time B\n");
    scanf("%d", &aposta_a);
    printf("x\n");
    scanf("%d", &aposta_b);
    
    printf("Qual será o placar do jogo?\nTime A vs Time B\n");
    scanf("%d", &time_a);
    printf("x\n");
    scanf("%d", &time_b);
    
    if (time_a > time_b) //define quem ganhou
        vencedor = 0;
    if (time_b > time_a)
        vencedor = 1;
    if (vencedor == 0 && aposta_a > aposta_b)
        pontos = pontos + 10;
    if (vencedor == 1 && aposta_b > aposta_a)
        pontos = pontos + 10;
    
    if (aposta_a == time_a)
        pontos = pontos + 5;
    if (aposta_b == time_b)
        pontos = pontos + 5;
    
        printf("--------------------\n Sua pontação no bolão foi:%d Pontos", pontos);
    
    
    
    

    
    
        
        

    

    return (EXIT_SUCCESS);
}

