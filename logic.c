/* logic.c */ 
/*
---

**Introduction to the Logical Operations Program:**

 This program, written in the C programming language,
 demonstrates the fundamental concepts of logic operations.
 Logical operations are essential in computer science and programming,
 as they form the basis for decision-making processes. In this program, 
 we evaluate three core operations: AND, OR, and NOT. 

 The program takes two logical inputs,
 represented as `1` (True) and `0` (False),
 and computes the results of the operations.
 By experimenting with various input combinations,
 users can better understand how logical expressions work and how they are applied in real-world scenarios,
 such as control statements and algorithms.

---

*/
#include <stdio.h>

#define True  1
#define False 0


int main() {
	int A = True ;
    int B = False ;
    
	printf(" A And B = %2d \n", A && B );
    printf(" A Ore B = %2d \n", A || B );
    printf(" Not A = %2d \n", !A);

	return 0;
}