	// Name: William Pierce
	// CSU ID: 2643343 
	// CIS 340: HW 1
	// Description: Matrix Multiplacation Program
#include <stdio.h>
int main(void)
{ 
	int n,kA,kB,m,i,j,k,sum;
	//int *matA[];
	//int *matB[];
	printf("Input dimensions for Matrix A seperated by a space\n");
		scanf("%d %d",&n,&kA);
		int matA[n][kA];
	printf("Enter the elemnets of matrix A with dimensions %d x %d\n",n,kA);
		for(i = 0; i < n; i++){
			for(j = 0; j < kA; j++){
				scanf("%d",&matA[i][j]);
			}
		}
		//creating matrix B
	printf("Input dimensions for Matrix B seperated by a space\n");
		scanf("%d %d",&kB,&m);
		int matB[kB][m];
			
	printf("Enter the elemnets of matrix B with dimensions %d x %d\n",n,kB);
		for(i = 0; i < kB; i++){
			for(j = 0; j < m; j++){
				scanf("%d",&matB[i][j]);
			}
		}
		
		//if kA != kB print Matrix of 0's
		if(kA != kB){
			printf("Invalid matrix dimensions: Aborting process\n");
				int MultiMatrix[0][0];
		return 0;
	}
		else{
			int MultiMatrix[n][m];
	//Multiplying matrix A and B
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				sum = 0;
				for(k=0; k < kA; k++){
					sum = sum + (matA[i][k]*matB[k][j]);
				}
				MultiMatrix[i][j] = sum;
			}
		}
//printing matrix
    for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				printf("%d\t",MultiMatrix[i][j]);

			}
			printf("\n");
		}
	}
		return 0;
}