#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void) {
    float fahrenheit, celsius;

    printf("Enter Fahrenheir temperature: ");
    scanf("%f",&fahrenheit);
    celsius = (SCALE_FACTOR * (fahrenheit - FREEZING_POINT));
    printf("Celsius equivalent: %.1f\n",celsius);

    return 0;
}