#include <stdio.h>
#include <math.h>
#define N 9

int main(void){
	int matrix[N];
	printf("Enter array:\n");
	
	for (int i = 0; i < N; i++){
		scanf("%d", &matrix[i]);
	}
	
	for (int i = 0; i < floor(N / 2); i++){
		int intermediate = matrix[i];
		matrix[i] = matrix[N - i - 1];
		matrix[N - i - 1] = intermediate;
	}
	
	printf("Reversed array: ");
	
	for (int i = 0; i < N; i++){
		printf("%d ", matrix[i]);
	}
	
	printf("\n");
}
