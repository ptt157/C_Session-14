#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];

    // Nhap chuoi tu nguoi dung
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // Loai bo ky tu xuong dong neu co
    chuoi[strcspn(chuoi, "\n")] = '\0';

    // In ra chuoi vua nhap
    printf("Chuoi vua nhap la: %s\n", chuoi);

    // Tinh va in do dai cua chuoi
    printf("Do dai cua chuoi la: %lu\n", strlen(chuoi));

    return 0;
}

