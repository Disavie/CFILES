#include <stdio.h>

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0 ; i < 10; i++){
        printf("%d \t",nums[i]);
    }


    int N = 10;
    int nums2[N];

    printf("Enter %d numbers",N);

    int i = 0;
    while( i < N ){
        scanf("%d",&nums2[i]);
        i++;
    }
    printf("\n");
    for(int i = 0 ; i < N ; i++){

        printf("%d \t",nums2[i]);

    }
    return 0;

}