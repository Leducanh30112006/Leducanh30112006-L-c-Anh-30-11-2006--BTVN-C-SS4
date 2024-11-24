#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);
    // Ki?m tra xem s? th? 3 có n?m trong kho?ng gi?a s? th? 2 và s? th? nh?t không
    if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
        printf("%d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("%d khong nam trong khoang giua %d va %d.\n", num3, num1, num2);
}
    return 0;
}


