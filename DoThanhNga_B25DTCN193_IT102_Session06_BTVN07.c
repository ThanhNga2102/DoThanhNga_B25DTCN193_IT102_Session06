#include <stdio.h>
int main() {
    int a,b,max;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    max = (a > b) ? a : b;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("Uoc chung lon nhat(UCLN): %d\n", a);
    return 0;
}