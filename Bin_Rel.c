/* Binary Relations */
#include<stdio.h>

#define SIZE 12

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
			if (relation[i][j] == 1) {

				for (int k = 0; k < SIZE;++k) {
					if ((relation[j][k] == 1) && (relation[i][k] != 1))
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
	int relation[SIZE][SIZE]={0};
	//Definetion RelationShip 
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			if (i % 3 == j % 3) {
				relation[i][j] = 1 ;
			}
		}
	}
	printf("\n");
	printf("Relation : \n");
	printf("----------------------------------\n");
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE;++j) {
			printf("%2d",relation[i][j]);
		}
		printf("\t |\n");
	}
	printf("----------------------------------\n");
	printf("\n");
    // Check RelatinShip   Properties
	if (isReflexive(relation) && isSymmetric(relation) && isTransitive(relation)) {
		printf("The relationship is one of equivalence.\n");
	}
	else {
		printf("The relation is not one of equality \n");
	}


    return 0;
}