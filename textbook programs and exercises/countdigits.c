#include <stdio.h>

int main(){
    
    printf("Enter an integer\n");
    int inp;
    scanf("%d",&inp);

    int digitCount = 0;
    int copy = inp;
    while(copy != 0){
        copy/=10;
        digitCount+=1;
    }
    printf("\n%d has %d digits",inp,digitCount);
    


    return 0;
}
