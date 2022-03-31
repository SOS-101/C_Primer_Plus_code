#include <stdio.h>
//#include <stdint.h>
#include <inttypes.h>

int main(void) {
    int32_t me32;

    me32 = 45933954;
    
    printf("first, assume int32_t is int:");
    printf("me32 = %d\n", me32);
    printf("next, let's not make any assumptions.\n");
    printf("instead, use a \"macro\" form inttypes.h:");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}
