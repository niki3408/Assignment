#include <stdio.h>
#include <unistd.h> // for sleep()
int main() {
    int h = 0, m = 0, s = 0;
    for(int i = 0; i < 10; i++) {
        printf("%02d:%02d:%02d\n", h, m, s);
        s++;
        if(s == 60) { s = 0; m++; }
        if(m == 60) { m = 0; h++; }
        sleep(1); // Delay of 1 second
    }
    return 0;
}
