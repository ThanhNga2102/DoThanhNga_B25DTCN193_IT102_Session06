#include <stdio.h>
int main() {
    //Nhap so nguyen duong
    while (1) {
        int numbern;
        printf("Nhap N = ");
        scanf("%d", &numbern);
    // Tinh tong tu 1 den N
        if (numbern > 0) {
            int sum = 0;
            for (int i = 1; i <= numbern; i++) {
                sum += i;
            }
            printf("Tong %d = %d\n", numbern, sum);
            break; // Thoat vong lap neu nhap dung
        } else {
            printf("Vui long nhap so nguyen duong!\n");
        }
    }
    return 0;
}