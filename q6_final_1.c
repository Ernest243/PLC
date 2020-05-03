#include <stdio.h>

int main(void) {

        int first, second, third;
        int max, mid, min;

        printf("Enter 3 integers: ");
        scanf("%d %d %d", &first, &second, &third);

        //first method:
        max = (first > second ? (first > third ? first : third) :
                (second > third ? second : third));
        min = (first < second ? (first < third ? first : third) :
                (second < third ? second : third));

        mid = (first + second + third) - max - min;

        printf("Max: %d, Min: %d, Mid: %d\n", max, min, mid);
}