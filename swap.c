#include <stdio.h>
#include <string.h>

int main(){

	int x = 1;
	int y = 2;
	char word1[] = "davis";
	char word2[] = "stermer";
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	printf("%s",word1);
	printf("%s",word2);
	printf("\n");
	printf("NOW SWAPPING \n");
	int temp = x;
	x = y;
	y = temp;	

	char * buffer;
	buffer = &word1;
	word1=&word2;
	word2=buffer;

	printf("x = %d\n",x);
	printf("y = %d\n",y);

	return 0;
}
