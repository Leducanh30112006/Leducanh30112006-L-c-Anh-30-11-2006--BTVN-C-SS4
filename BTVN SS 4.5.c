#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    // Ki?m tra xem s? th? 3 c� n?m trong kho?ng gi?a s? th? 2 v� s? th? nh?t kh�ng
    if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
        printf("%d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("%d khong nam trong khoang giua %d va %d.\n", num3, num1, num2);
}
    return 0;
}


