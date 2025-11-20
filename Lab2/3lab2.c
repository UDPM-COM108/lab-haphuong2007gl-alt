#include <stdio.h>

int main() {
    float r;

    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    float chuviHT = 2 * 3.14 * r;
    float dientichHT = 3.14 * r * r;

    printf("Chu vi HT = %.2f\n", chuviHT);
    printf("Dien tich HT = %.2f\n", dientichHT);

    return 0;
}