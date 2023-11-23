#include <stdio.h>
#define N 9

int main(void){
	int matrix[N][N];
	int filler = 1;
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			matrix[i][j] = filler;
			filler ++;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
}
