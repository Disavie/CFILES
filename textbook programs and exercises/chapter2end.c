#include <stdio.h>

int main(){

    /*Formula 
    *
    * 3x^5+2x^4-5x^3-x^2+7x-6
    * or
    * ((((3x+3)x-5)x-1)x-6
    */
    int x;
    printf("Enter value for x:\n");
    scanf("%d",&x);
    int result = ((((3*x+3)*x-5)*x-1)*x+7)*x-6;
    printf("Result is %d",result);


    return 0;
}
