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

void unionSets(int set1[], int size1, int set2[], int size2)
{
    printf("Union  :");
    for (int i = 0; i < size1; ++i) {
        printf("%d ", set1[i]);
    }
    for (int i = 0; i < size2;++i) {
        int exits = 0;
        for (int j = 0; j < size1; ++j){
            if (set1[i] == set2[j]) {
                exits = 1;
                break ;
            }
        }
            if(!exits)printf("%d ", set2[i]);
     }
     printf("\n");
}
int dt_or[] = {
    0,0,0,
    0,1,1,
    1,0,1,
    1,1,1,
};
int dt_xor[] = {
    0,0,0,
    0,1,1,
    1,0,1,
    1,1,0,
};
int dt_and[] = {
    0,0,0,
    0,1,0,
    1,0,0,
    1,1,1,
};
#define SIZEOF(dt) sizeof(dt) / sizeof(dt[0])
int main() {
	int A = True ;
    int B = False ;
    
	printf(" A And B = %2d \n", A && B );
    printf(" A Ore B = %2d \n", A || B );
    printf(" Not A = %2d \n", !A);
    unionSets (dt_or, SIZEOF(dt_or), dt_and, SIZEOF(dt_and));
    unionSets(dt_or, SIZEOF(dt_or), dt_xor, SIZEOF(dt_xor));
    unionSets(dt_xor, SIZEOF(dt_xor), dt_and, SIZEOF(dt_and));
    
	return 0;
}