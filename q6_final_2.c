#include <stdio.h>

int main()
{
     int first, second, third;
        int max, mid, min;

        printf("Enter 3 integers: ");
        scanf("%d %d %d", &first, &second, &third);
        
     if (first > third) {
                int x = first;
                first = third;
                third = x;
        }
        if (first > second) {
                int x = first;
                first = second;
                second = x;
        }
        if (second > third) {
                int x = second;
                second = third;
                third = x;
        }

        // Now a, b, c are in order:
        max = third;
        mid = second;
        min = first;

        printf("Max: %d, Min: %d, Mid: %d\n", max, min, mid);
        return 0;
}