#include <stdio.h>

#define SIZE 4

int main(void) {
    
    int no_data[SIZE]; 
    int index;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (index = 0; index < SIZE; index++) 
        printf("%2d%14d\n", index + 1, no_data[index]);

    return 0;
}
