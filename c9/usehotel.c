#include <stdio.h>
#include "hotel.h"

int main(void) {
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT) {
        switch (code) {
            case 1:
                hotel_rate = HOTE1;
                break;
            case 2:
                hotel_rate = HOTE2;
                break;
            case 3:
                hotel_rate = HOTE3;
                break;
            case 4:
                hotel_rate = HOTE4;
                break;
            default:
                hotel_rate = 0.0;
                printf("oops!\n");
                break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("thank you and goodbye.\n");

    return 0;
}
