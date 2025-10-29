#include <stdio.h>
// Nhap vao 2 so bat ky
// Viet chuong trinh hien thi menu va thuc hien cac chuc nang theo yeu cau:
//******MENU******
// 1. Tong 2 so
// 2. Hieu 2 so
// 3. Tich 2 so
// 4. Thuong 2 so
// 5. Thoat ung dung    
// Lua chon cua ban:
#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    // Nhập hai số từ người dùng
    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    do {
        // Hiển thị menu
        printf("\n========== MENU ==========\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("==========================\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Xử lý lựa chọn
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Tong = %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Hieu = %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Tich = %.2f\n", result);
                break;
            case 4:
                if (num2 != 0)
                    printf("Thuong = %.2f\n", num1 / num2);
                else
                    printf("Loi: Khong the chia cho 0!\n");
                break;
            case 5:
                printf("Cam ơn ban đã sử dụng chương trình!5\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }

    } while (choice != 5);

    return 0;
}

