#include <stdio.h>
int main() {
    int a,b,min;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    min = (a < b) ? a : b;
    while (1) {
        if (min % a == 0 && min % b == 0) {
            a = min;
            break;
        }
        min++;
    }
    printf("Boi chung nho nhat(BCNN): %d\n", a);
    return 0;
}