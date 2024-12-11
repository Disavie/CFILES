#include <stdio.h>

int main(){

	int age = 10;
	int * const  agePtr = &age;
	printf("address of age : %p \n",&age);
	printf("value of age : %p \n",agePtr);

	(*agePtr)+=1;

	printf("value of age : %d \n",*agePtr);
	return 0;
}
