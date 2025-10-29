#include <stdio.h>
int main() {
    int n;
    if (n <= 0 || n > 10) {
        do {
            printf("Nhap so nguyen duong (1-10): ");
            scanf("%d", &n);
            if (n <= 0 || n > 10) {
                printf("Loi:Khong phai la so hop le. Vui long nhap lai.\n");
            }
        } while (n <= 0 || n > 10);
    }
// In ra bang cuu chuong tuong ung voi n
    int i;
    printf("Bang cuu chuong cua %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
   
    
