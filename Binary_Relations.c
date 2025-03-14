/* Binary Relations */
#include<stdio.h>

#define SIZE 3

// Reflexive : Each element is linked to itsef .  (انعكاسي)
int isReflexive(int relation[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; ++i) {
		if (relation[i][i] != 1) {
			return 0; // Not Reflaxive 
		}
	}
     return 1; // Reflexive 
}

// Symmetric :If (a,b) is in the relation, then (a,b) is also in the relation (متماثل)

int isSymmetric(int relation[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			if (relation[i][j] != relation[j][i]) {
				return 0; // Not Symmetric 
			}
		}
	}
	return 1; // is Symmetric
}

// Transitive :  If (a,b)and (b,c) are in the relation, then (a,b) and (b,c) is also in the relation (متعد)

int isTransitive(int relation[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE;++j) {
		       if (relation[i][j] == 1){
				
					for (int k = 0; k < SIZE;++k) {
						if (relation[j][k] == 1 && relation[i][k] != 1)
						{
							return 0; // Not Transitive
						}
					}
			
               }
		}
	}
	return 1;// Transitive
}

int main() {
	int relation[SIZE][SIZE] = {
			{1, 1, 0},
			{0, 1, 1},
			{0, 0, 1}
	};


    //Check relationShip Properties 
	printf("Relation :\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%d ", relation[i][j]);
		}
		printf("\n");
	}
    
	if (isReflexive(relation)) {
	printf(" The Relationship is Reflexive\n");
	}
	else {
		printf(" The Relationship is not Reflexive\n");
	}

	if ( isSymmetric(relation)) {
		printf("The Relationship is  Symmetric\n");
	}
	else {
		printf("The Relationship is not Symmetric\n");
	}

	if (isTransitive(relation)) {
		printf("The Relationship is Transitive \n");
	}
	else {
		printf("The Relationship is not Transitive \n");
	}

	return 0;
}
