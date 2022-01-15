#include<stdio.h>

/*string in C should be terminated with null character and 
henc the length of char array will always be 1 more than 
the number of chcaracters. But the strlen() will give the 
proper character length*/


void print(char *c){
	
	while(*c != '\0'){
		printf("%c", *c);
		c++;
	}
	
}

int main(){
	char c[20] = "Hello";
	print(c);
}