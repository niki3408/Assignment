#include <stdio.h>
int main() {
    int height;
    printf("Enter height in cm: ");
    scanf("%d", &height);
    if(height < 150)
        printf("Short");
    else if(height >= 150 && height <= 165)
        printf("Average height");
    else
        printf("Tall");
    
}
