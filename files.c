#include <stdio.h>

int main(){
	//writing to file
	FILE * f = fopen("test.txt", "w");
	fprintf(f,"This is writing!");
	fclose(f);


	f = fopen("test.txt","r");
	char buffer[255];
	// location to write to, max size bytes, pointer to file
	fgets(buffer,255,f); // <-- gets one line at a time
	printf("This is from the file: \n %s \n",buffer);
	fclose(f);

	return 0;
}
