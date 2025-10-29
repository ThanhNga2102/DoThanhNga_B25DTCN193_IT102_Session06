#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, digit, divisor;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &n);
    // Xử lý trường hợp số âm
    if (n < 0) {
        printf("So am: -\n");
        n = -n;
    }
    temp = n;
    divisor = 1;
    // Tìm ước chia lớn nhất (lớn nhất là 10^(số chữ số - 1))
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    printf("Cac chu so tu trai sang phai la: ");
    while (divisor > 0) {
        digit = n / divisor;      
        printf("%d ", digit);     
        n = n % divisor;          
        divisor /= 10;         
    }
    printf("\n");
    return 0;
}
