#include <stdio.h>

int main() {
    int ram, shyam, ajay;
    printf("Enter ages of Ram, Shyam, and Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if (ram < shyam && ram < ajay)
        printf("Ram is the youngest\n");
    else if (shyam < ram && shyam < ajay)
        printf("Shyam is the youngest\n");
    else
        printf("Ajay is the youngest\n");

    return 0;
}
