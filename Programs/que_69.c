#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
    return 0;
}
