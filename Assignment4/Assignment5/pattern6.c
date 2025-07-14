    
// 12345 
// 12345 
// 12345 
// 12345 
// 12345 


#include <stdio.h>

int main() {
    int i, j,n;

    printf("Enter a no of rows");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

