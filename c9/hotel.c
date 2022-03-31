#include <stdio.h>
#include "hotel.h"

int menu(void) {
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("enter the number of the desired hotel:\n");
    printf("1) fairfield arms       2) hotel olymplic\n");
    printf("3) chertworthy plaza    4) the stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 ||
            (code < 1 || code > 5)) {
        if (status != 1) 
            scanf("%*s");
        printf("enter an integer form 1 to 5, please.\n");
    }

    return code;
}

int getnights(void) {
    int nights;

    printf("how many nights are needed? ");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s");
        printf("enter an integer form 1 to 5, please.\n");
    }

    return nights;
}

void showprice(double rate, int nights) {
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;
    printf("the total cost will be $%0.2f.\n", total);
}

