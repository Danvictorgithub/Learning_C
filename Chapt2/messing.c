#include <stdio.h>

int main(void) {
    int height,width,length, volume, weight;
    height = 10;
    width = 12;
    length = 8;

    volume = height * width * length;
    weight = (volume + 165)/166;
    printf("%d\n", weight);

    return 0;
}