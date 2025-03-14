/* even number */
#include <stdio.h>

int main() {
	int number ;
    printf("\nEntre Intiger Number :   ");
    scanf("%d",&number);
    if (number == 0) {
        printf("The Number : %2d Is Ziro \n",number);
    }
    else if ((number % 2) == 0) {
        printf(" The Number : %2d is even and divisible by 2 \n",number);
    }else {
        printf(" The Number : %2d is Not Even  \n",number);

    }
  
	return 0;
}