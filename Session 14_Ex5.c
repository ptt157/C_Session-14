#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000]; // Khai bao chuoi voi kich thuoc lon
    int dem = 0;

    // Nhap chuoi tu nguoi dung
    printf("Nhap mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // Loai bo ky tu xuong dong neu co
    chuoi[strcspn(chuoi, "\n")] = '\0';

    // Duyet chuoi va dem so tu
    int i = 0;
    while (chuoi[i] != '\0') {
        // Bo qua khoang trong dau dong
        while (chuoi[i] == ' ') {
            i++;
        }
        // Neu chua het chuoi va khong phai khoang trong, tang bien dem
        if (chuoi[i] != '\0') {
            dem++;
        }
        // Duyet den het tu (cho den khi gap khoang trong hoac ket thuc chuoi)
        while (chuoi[i] != ' ' && chuoi[i] != '\0') {
            i++;
        }
    }

    printf("So tu trong chuoi: %d\n", dem);
    return 0;
}

