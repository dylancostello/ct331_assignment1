#include <stdio.h>

int main(int arg, char* argc[]) {
	printf("Hello assignment1.\n");

	int a;
	int* b;
	long c;
	double* d;
	char** e;

	printf("Size of int is: %d bytes \n", sizeof(a));
	printf("Size of int* is: %d bytes \n", sizeof(b));
	printf("Size of long is: %d bytes \n", sizeof(c));
	printf("Size of double* is: %d bytes \n", sizeof(d));
	printf("Size of char** is: %d bytes \n", sizeof(e));

	return 0;
}
