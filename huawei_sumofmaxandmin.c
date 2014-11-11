/*
 * problem: print the sum of max and min value of a integer array, 
 * array length is 0 ~ 50 
 * if array only one element, then max and min value were both the element 
 */

#include <stdio.h>

int main()
{
	int n = 0;		/* length of array */
	printf("Plese input the length of array !\n");
	scanf("%d",&n);
	
	/* get array elements */
	int array[n], i = 0;
	printf("Please input elements of array !\n");
	for (i = 0; i< n; i++)
		scanf("%d", &array[i]);
	
	/* get max and min value of array */
	int max = array[0]; 
	int min = array[0];
	for (i = 0; i<n; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
		
		if (array[i] < min)	{
			min = array[i];
		}
	}
	
	printf("Sum of max and min for array is: %d\n", max+min);
	
	return 0;	
}
 