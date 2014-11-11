/* merge 2 sorted integer array to a new array */

#include <stdio.h>

/* get array elements from input */
void getArray(int * array, int len)
{
	int i;
	printf("Please input elements for array:\n");
	for(i = 0; i< len; i++)
		scanf("%d", &array[i]);	
}

/* display array elements to screen */
void displayArray(int * array, int len)
{
	int i;
	for(i = 0; i < len; i++)
		printf("%4d",array[i]);
		
	printf("\n");
}

/* merge 2 array to a new array */
void mergeArray(int * arrayA, int lenA, int * arrayB, int lenB, int *array)
{
	int i = 0;
	int j = 0;
	int n = 0;
	
	for(; i < lenA, j < lenB; ) {
	
		if (arrayA[i] < arrayB[j]) {

			array[n++] = arrayA[i++];
			
		} else if (arrayA[i] > arrayB[j]) {
		
			array[n++] = arrayB[j++];
			
		} else {
		
			array[n++] = arrayB[j++];
			i++;
		}
	}
	
	if(i = lenA) {
		
		while(j < lenB) {
			array[n++] = arrayB[j++];
		}
	} else if (j = lenB) {
	
		while(i < lenA) {
			array[n++] = arrayA[i++];
		}
	}
}

/* main */
int main()
{
	int lenA = 0;
	printf("Please input len of array A:\n");
	scanf("%d",&lenA);
	
	int arrayA[lenA];
	getArray(arrayA, lenA);
	
	int lenB = 0;
	printf("Please input len of array B:\n");
	scanf("%d",&lenB);
	
	int arrayB[lenB];
	getArray(arrayB, lenB);
	
	int array[lenA+lenB];
	mergeArray(arrayA, lenA, arrayB, lenB, array);
	
	printf("The merged array is: \n");
	displayArray(array, lenA+lenB);
	
	return 0;
}
