#include<stdio.h>
#include <string.h>

int main() {
    char chuoi[100], daoNguoc[100];
    int i, j;
    // Nhap chuoi
    printf("Nhap chuoi: ");
    fgets(chuoi,100, stdin);
    // Loai bo ky tu newline (\n) neu có
    chuoi[strcspn(chuoi, "\n")] = '\0';
    // Ðao nguoc chuoi
    int len = strlen(chuoi);
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        daoNguoc[j] = chuoi[i];
    }
    daoNguoc[j] = '\0';  // Ðam bao chuoi dao nguoc ket thuc dung
    // In chuoi dao nguoc
    printf("Chuoi dao nguoc: %s\n", daoNguoc);

    return 0;
}

