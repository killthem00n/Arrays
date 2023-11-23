#include <stdio.h>
#define N 9

int main(void){
	int matrix[N][N];
	int counter = 1;

	for (int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if (j < N - counter){
				matrix[i][j] = 0;
			}
			else{
				matrix[i][j] = 1;
			}
			
			printf("%d ", matrix[i][j]);
		}
		counter ++;
		printf("\n");
	}
}
