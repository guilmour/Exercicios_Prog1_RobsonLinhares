//guilmour

#include <math.h>
#include <stdlib.h>

movParabolico(float h, v0, teta){


}



bhaskara(int a, int b, int c){
    float delta=0, x1=0, x2=0 ;

    //printf("Digite a, b, c: ");
    //scanf("%d %d %d", &a, &b, &c);

    delta = (float) sqrt((pow(b,2))- (4 * a * c));
    printf("delta: %f\n", delta);
    x1 = ( -b + delta) / (2 * a);
    printf("x1: %f\n", x1);
    x2 = ( -b - delta) / (2 * a);
    printf("x2: %f\n", x2);

    if(x1 > 0 && x2 < 0){
    return x1;
    }

    if(x2 > 0 && x1 < 0){
    return x2;

    }



}


main(){


printf("\n%f", bhaskara(0 , 0 , 0));







}
