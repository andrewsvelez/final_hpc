/* Merge sort in C */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int limit_array=15;
int limit_numbers=100;

void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; 

	mid = n/2;  

	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; 
	for(i = mid;i<n;i++) R[i-mid] = A[i]; 

	MergeSort(L,mid);  
	MergeSort(R,n-mid);  
	Merge(A,L,mid,R,n-mid);  
        free(L);
        free(R);
}

int main() {

	int i,j,r, numberOfElements;
  
  
  int a[limit_array];
  
  
  for(j=0;j<limit_array;j++){
    r = rand() % limit_numbers;
    a[j]=r;
  }

	numberOfElements = sizeof(a)/sizeof(a[0]); 

	MergeSort(a,numberOfElements);
.
	for(i = 0;i < numberOfElements;i++) printf("%d ",a[i]);
	return 0;
}
