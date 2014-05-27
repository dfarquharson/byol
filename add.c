#include <stdio.h>

typedef struct {
    float x;
    float y;
} point;

int add(int x, int y) {
    return x + y;
}

int main(int argc, char** argv) {
    printf("%d\n", add(1, 1));
    return 0;
}
