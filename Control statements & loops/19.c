#include <stdio.h>

int main() {
    for (int x = 1; x < 50; x++) {
        for (int y = x + 1; y < 50; y++) {
            for (int z = y + 1; z < 50; z++) {
                if (x*x + y*y == z*z)
                    printf("(%d, %d, %d)\n", x, y, z);
            }
        }
    }
    return 0;
}

