#include <stdio.h>
int main() {
    int x=5, y=9;
    if(x > 0 && y > 0)
        printf("Quad I");
    else if(x == 0)
        printf("Y-axis");
    else
        printf("X-axis");
}
