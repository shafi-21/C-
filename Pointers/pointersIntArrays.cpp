#include<stdio.h>

void doubleArray(int *a, int size){
	//printf("%d\n", size);
	for (int i = 0; i < size; i++){
		printf("Value %d at index %d -  ",a[i], i);
		printf("%d \n",&a[i]);
		a[i] *= 2;
	}
}

int main(){
	int a[] = {1,2,3,4,5};

	printf("Address of a[0]= %d\n", a);
	int size = sizeof(a)/sizeof(a[0]);
	doubleArray(a,size);
	
	for (int i = 0; i < size; i++){
		printf("Value %d at index %d - ", a[i]);
		printf("%d\n", (a + i));
	}
}