#include <stdio.h>
#include <string.h>

#define PRAISE "you are an extraordinary being."

int main(void) {
    char name[40];

    printf("what's your name?");
    scanf("%s", name);
    printf("hello, %s, %s\n", name, PRAISE);
    printf("your name of %zd letters occupies %zd memory cells.\n",
            strlen(name), sizeof name);
    printf("the phrase of praise has %zd letters",
            strlen(PRAISE));
    printf(" and occupies %zd memory cells.\n", sizeof PRAISE);

    return 0;
}
