#include <stdio.h>

main() {
	int arr[100], n,min,max, sum;
	float average;
	printf("How many digitals in array? :  ");
	scanf("%i", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%i", &arr[i]);
		sum+=arr[i];
	}
		for(int i=0; i<n; i++) {
		printf("%2i", arr[i]);
	}
	min=max=arr[0];
	for(int i=0; i<n; i++) {
		if(arr[i]<min) {
			min = arr[i];
		}
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("\n");
	printf("max = %i;  min = %i; sum = %i;  average = %f", max, min,sum, average = (float)sum/(float)n);
	
}
