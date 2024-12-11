#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(){

    printf("Enter temp in Farenheit");
    float farenheit;
    float celsius;

    scanf("%f",&farenheit);

    celsius = (farenheit- FREEZING_PT) * SCALE_FACTOR;

    printf("\n%f in Celcius is %0.1f\n",farenheit,celsius);

    return 0;
}
