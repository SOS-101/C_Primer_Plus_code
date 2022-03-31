#include <stdio.h>

int main(void) {
    int ten = 10;
    int two = 2;

    printf("doing it right:");
    printf("%d minus %d is %d\n", 2, ten, ten -two);
    printf("doing it wrong:");
    printf("%d minus %d is %d\n", ten);

    return 0;
}
