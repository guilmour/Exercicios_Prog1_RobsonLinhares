/* 
 * File:   main.c
 * Author: guilmour.com
 *
 * Created on 3 de Junho de 2014, 07:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int v[52], i, sorteado, k=0, flag=0;
    srand (time(NULL));
    
    //inicia vetor com valores 0
    for(i=0; i<51; i++){
        v[i]=0;
       
    }
    
    //atribui valores aleatorios ao vetor e testa se este valor já existe;
    for(i=0; i<51; i++){
        flag=0;
        sorteado = rand()%52;
        
        
        for(k=0; k<= i; k++)
        {
            if(sorteado == v[k])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            i= i-1;
        }
        
        if(flag == 0 )
        {
            v[i]= sorteado;
            
        }
        
    
    }
    
    for(i=0; i<51; i++){
        printf("%d ", v[i]);
       
    }
    
    return (EXIT_SUCCESS);
}

