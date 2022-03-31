#include <stdio.h>

#define SIZE 4

int main(void) {
    
    int some_data[SIZE] = {1492, 1066};
    int index;

    printf("%2s%14s\n", "i", "some_data[i]");
    for (index = 0; index < SIZE; index++) 
        printf("%2d%14d\n", index + 1, some_data[index]);

    return 0;
}
