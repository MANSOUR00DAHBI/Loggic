/* Induction  Recursion */
#include <stdio.h>
int memo[6]={-1,-1, -1, -1, -1, -1};
int Fabonatchy(int n ) {
	if (memo[n] != -1) {
		return memo[n];
	}
	if (n == 0) {
		return memo[n]= 0;
	}
	else if (n == 1) {
		return  memo[n]= 1 ;
	}
	else {
		return  memo[n]= Fabonatchy(n - 1) + Fabonatchy(n - 2);
	}
    
}
int Factorial(int n) {
	if (n == 0 ) {
		return 1;
	}
	else
		return n + Factorial(n - 1);
}
int Factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	 }else 
		return n * Factorial(n - 1);
}
int Permutations(int n, int size) {
	return Factorial(n)/Factorial(n - size);
}

int Combinations(int n, int size) {
	return Factorial(n) / ( Factorial(size) * Factorial(n - size)) ;
}

int main() {
	for (int i = 5; i > 0; --i) {
		printf( "%2d " ,Fabonatchy(i));
	}
	printf("\n");
	for (int i = 1; i <= 5; ++i) {
		printf("%2d ", memo[i]);
	}
     printf("\n");
	 printf("%d \n", Factorial(5));
	 printf("%d \n", Factorial(5-3));
     printf("result Permutations betwn five boll tree color defronte is : %2d  \n",
            Permutations(5,3));
	 printf("%d \n", Factorial(5));
	 printf("%d \n", Factorial(3) * Factorial(5 - 3));
	 printf("Ruselt Combination btwen 10 form 3 : %d \n", Combinations(5,3));
	return 0;
}