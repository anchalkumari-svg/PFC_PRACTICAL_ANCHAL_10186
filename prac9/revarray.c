#include <stdio.h>
int main() {
    //Anchal kumari
    //10186
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
//output
//Enter number of elements: 1 2 3 2
//Enter elements:
//Reversed array:
//2 