#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void) {
    int num;

    printf("this program calculates factorials.\n");
    printf("enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &num) == 1) {
        if (num < 0) 
            printf("no negative numbers, please.\n");
        else if (num > 12) 
            printf("keep input under 13.\n");
        else {
            printf("loop: %d factorial = %ld\n",
                    num, fact(num));
            printf("recursion: %d factorial = %ld\n",
                    num, rfact(num));
        }
        printf("enter a value in the range 0-12 (q to quit):\n");
    }

    printf("bye.\n");

    return 0;
}

long fact(int n) {
    long number = 1;
    while (n > 0) {
        number *= n--;
    }

    return number;
}

long rfact(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * rfact(n - 1);
    }

}
