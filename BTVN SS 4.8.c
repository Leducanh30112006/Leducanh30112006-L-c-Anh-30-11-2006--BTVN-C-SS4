#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap canh thu ba: ");
    scanf("%f", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }
    return 0;
}

