#include <stdio.h>
//Anchal kumari
//10186
void printRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= i; j++) {   
            printf("*");
        }
        printf("\n");                     
    }
}
int main() {
    int height = 5;
    printRightTriangle(height);
    return 0;
}
//output
// *
// **
// ***
// ****
// *****