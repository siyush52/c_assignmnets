#include <stdio.h>

union SampleUnion {
    int integer;
    float floatingPoint;
    char character;
};

int main() {
    union SampleUnion myUnion;

    printf("Size of the union: %lu bytes\n", sizeof(union SampleUnion));

    return 0;
}