#include <stdio.h>

int main() {
    char chuoi[] = "Lap trinh C la thu vi"; // Khai bao chuoi
    char kyTu;                             // Ky tu nguoi dung nhap
    int dem = 0;                           // Dem so lan xuat hien

    printf("Nhap mot ky tu: ");
    scanf("%c", &kyTu); // Nhan ky tu tu nguoi dung

    // Vong lap dem so lan xuat hien cua ky tu
    int i = 0; // Khai bao bien vong lap ben ngoai
    while (chuoi[i] != '\0') { // Duyet tung ky tu cua chuoi
        if (chuoi[i] == kyTu) {
            dem++;
        }
        i++;
    }

    printf("Ky tu '%c' xuat hien %d lan.\n", kyTu, dem);
    return 0;
}


