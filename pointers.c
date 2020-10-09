#include <stdio.h>

int main() {
    // 1
    char c = 'c';
    int i = 1;
    long l = 1;

    // 2
    printf("&c hex = %p\n", &c);
    printf("&c decimal = %lu\n", &c);

    printf("&i hex = %p\n", &i);
    printf("&i decimal = %lu\n", &i);

    printf("&l hex = %p\n", &l);
    printf("&l decimal = %lu\n", &l);
    printf("\n");

    // 3
    char *cp = &c;
    int *ip = &i;
    long *lp = &l;

    // 4
    printf("*cp = %c\n", *cp);
    printf("*ip = %d\n", *ip);
    printf("*lp = %lu\n", *lp);
    printf("\n");

    //5
    *cp = 'a';
    *ip = 8;
    *lp = 89;

    printf("*cp = %c\n", *cp);
    printf("*ip = %d\n", *ip);
    printf("*lp = %lu\n", *lp);
    printf("\n");

    // 6
    unsigned int u = 123456789;
    int *up_int = &u;
    char *up_char = &u;

    // 7
    printf("up_int = %p *up_int points to %d\n", up_int, *up_int);
    printf("up_char = %p *up_chat points to %d\n", up_char, *up_char);
    printf("\n");

    // 8
    printf("u decimal = %u\n", u);
    printf("u hex = %x\n", u);
    printf("\n");

    // 9
    printf("Bytes in decimal: \n");
    int j;
    for (j = 0; j < 4; j++){
        printf("%d : %hhu\n", j + 1, *(up_char + j));
    }
    printf("Bytes in hex: \n");
    for (j = 0; j < 4; j++){
        printf("%d : %hhx\n", j + 1, *(up_char + j));
    }
    printf("\n");

    // 10
    for (j = 0; j < 4; j++) {
        *(up_char + j) += 1;
        printf("u decimal = %u\n", u);
        printf("u hex = %x\n", u);
    }
    printf("New bytes in decimal: \n");
    for (j = 0; j < 4; j++){
        printf("%d : %hhu\n", j + 1, *(up_char + j));
    }
    printf("New bytes in hex: \n");
    for (j = 0; j < 4; j++){
        printf("%d : %hhx\n", j + 1, *(up_char + j));
    }
    printf("\n");

    // 11
    u = 123456789;
    *up_char = &u;

    for (j = 0; j < 4; j++) {
        *(up_char + j) += 16;
        printf("u decimal = %u\n", u);
        printf("u hex = %x\n", u);
    }
    printf("New bytes in decimal: \n");
    for (j = 0; j < 4; j++){
        printf("%d : %hhu\n", j + 1, *(up_char + j));
    }
    printf("New bytes in hex: \n");
    for (j = 0; j < 4; j++){
        printf("%d : %hhx\n", j + 1, *(up_char + j));
    }
}