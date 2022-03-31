//two_func.c one file includes two functions
//
#include<stdio.h>

void butler(void);

int main(void) {
    printf("I will summon the butle function.\n");
    butler();
    printf("yes, bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) {
    printf("you rang, sir?\n");
}
