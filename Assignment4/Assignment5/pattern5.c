
// 01010 
// 01010 
// 01010 
// 01010 
// 01010 


#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }

    return 0;
}