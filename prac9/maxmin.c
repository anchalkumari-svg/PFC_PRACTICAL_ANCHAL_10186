#include <stdio.h>
int main() {
    //Anchal kumari
    //10186
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
//output
//Enter number of elements: 1 2 4 5
//Maximum = 2
//Minimum = 2