/* 
 * File:   main.c
 * Author: a1559648
 * Created on 5 de Junho de 2014, 10:06
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {

    int NF=0, NPT1=0, NE1=0, NPF1=0, NPT2=0, NE2=0, NPF2=1 ; 
    int i=1, j=1, k=1, media;
    float RESTA;
    
    printf("Digite a nota de sua primeira prova (máx. 40): ");
    scanf("%d", &NPT1);
    printf("Digite a nota de sua primeira lista (máx. 10): ");
    scanf("%d", &NE1);
    printf("Digite a nota de sua primeira entrega de trabalho (máx. 40): ");
    scanf("%d", &NPF1);
    
    NF = (NPT1 + NE1)*(NPF1/40) + (NPT2 + NE2)*(NPF2/40);
    
    for(NPT2=0; NPT2<10; NPT2++)
    {
        for(NE2=0; NE2<40; NE2++)
        {
            for (NPF2=0; NPF2<60; NPF2++)
            {
                media = ((NPT1 + NE1)*(NPF1/40) + (NPT2 + NE2)*(NPF2/40));
                
                if(media  == 60 )
                {
                 printf("________\nNota Segunda Prova: %d \nNota Lista 2: %d \nNota Projeto Final 2: %d\n",NPT2, NE2, NPF2);  
                }
                    
            }
        }
        
    }
    
    

    
    
    
    
    
    
    printf("%d", NF);

    return (EXIT_SUCCESS);
}

