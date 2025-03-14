/*truth.c*/
#include <stdio.h >

int main() {
	int p , q ;
    /* Print Table Truth for OR*/
     printf(" P | q | p OR q \n");
     printf("-----------------\n");
     for (int p = 0; p <= 1; ++p) {
         for (int q = 0; q <= 1;++q) {
             printf("%2d | %2d | %2d \n",p,q,p || q );
         }
     }
printf("\n");
     printf(" P | q | p And q \n");
     printf("-----------------\n");
     for (int p = 0; p <= 1; ++p) {
         for (int q = 0 ; q <= 1;++q) {
             printf("%2d | %2d | %2d \n", p,q , p && q );
         }
     }
     printf("\n");
     printf(" P | q | p XOR q \n");
     printf("-----------------\n");
     for (int p = 0; p <= 1; ++p) {
         for (int q = 0; q <= 1;++q) {
             printf("%2d | %2d | %2d \n",p,q,(p || q) && !(p && q ));
         }
     }
     printf("\n");
     printf(" P | NOT P \n");
     printf("-----------------\n");
     for (int p = 0; p <= 1; ++p) {
         printf("%2d | %2d |\n",p,!p );
     }
     printf("\n");
     printf(" q | NOT q \n");
     printf("-----------------\n");
      for (int q = 0; q <= 1;++q) {
          printf("%2d | %2d\n",q , !q);
      }

        return 0;
}