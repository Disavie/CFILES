#include <stdio.h>
#include <math.h>


int main(){
    int width = 12;
    int height = 10;
    int length = 8;
    int volume = width*height*length;
    float weight = (volume/166.0);

    printf("Dimensions : %d x %d x %d ",width,height,length);
    printf("\n");
    printf("Volume : %d",volume);
    printf("\n");
    printf("Dimensional weight : %f",weight);

    return 0;
}
