//Arnulfo Santillan
//CSC-341

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int *values;
	int i;

	values = (int *)malloc(sizeof(int)*5);

	for(i = 0;i < 5;i++){
		values[i] = i;
		printf("values[%d] = %d with address %p \n",i,values[i],&values[i]);
	}

	printf("argc: %p\n",&argc);
	printf("Stack variables: %p\n",&i);
	printf("Heap variables: %p\n",values);
	printf("unintialized data: %p\n",&x);
	printf("initialized data: %p\n",&y);

	return 0;
}
