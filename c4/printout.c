#include <stdio.h>

#define PI 3.14159

int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("the %d contestants ate %f berry pies.\n", number, pies);
    printf("the value of pi is %f.\n", PI);
    printf("farewell! thou art too dear for possessing,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}
