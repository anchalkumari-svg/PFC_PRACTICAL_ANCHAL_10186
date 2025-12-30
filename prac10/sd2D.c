#include <stdio.h>
int main() {
    //Anchal kumari
    //10186
    int a[10][10], n, i, j, sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
//output
//Enter order of matrix: 1 4 5 6
//Sum of diagonal elements = 4