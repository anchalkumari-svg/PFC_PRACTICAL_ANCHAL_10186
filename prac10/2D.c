#include <stdio.h>
int main() {
    //Anchal kumari
    //10186
    int a[10][10], r, c, i, j, max, min;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max)
                max = a[i][j];
            if(a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
//output
//Enter rows and columns: 1 4 5 7
//1 5 6 7
//Maximum = 7
//Minimum = 1