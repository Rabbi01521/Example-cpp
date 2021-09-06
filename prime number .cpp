#include <stdio.h>

int main(){

    int i;  /* no need to initialize to zero */
    int j;  /* we need a second counter */

    for (i=2;i<1000;i++){        /* start from 2 -- one is not prime            */
         for (j=2;j<i;j++){      /* check for nontrivial divisors               */
             if (i % j == 0) {
                 break;          /* nontrivial divisor found -> not a prime     */
             }
         }
         if (j == i) {           /* this means the cycle above run till end     */
             printf("%d ",i );   /* hence no nontrivial divisors, hence a prime */
         }
    }

    printf("\n");
    return 0;
}
