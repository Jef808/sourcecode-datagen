#include <stdio.h>
#include <stdlib.h>

int hello_world(int n) {
    // Some comment
    for (int i=0; i < n; ++i) {
        printf("Hello World\n");
    }

    if (n & 1) {
        printf("n is odd1");
        return 1;
    }
    else {
        printf("n is even!");
        return 2;
    }

    return 0;
}

int main(int argc, const char *argv[]) {
    const int n = argc > 1 ? atoi(argv[1]) : 1;

    hello_world(n);

    return 0;
}
