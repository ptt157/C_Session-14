#include <stdio.h>
#include <string.h>

int main() {
    // Khai bao va gan gia tri cho chuoi
    char chuoi[] = "HelloWorld";
    int i; // Khai bao bien vong lap

    // In chuoi da khai bao
    printf("Chuoi da khai bao: %s\n", chuoi);

    // In tung ky tu, moi ky tu cach nhau 1 dau cach
    printf("Cac ky tu trong chuoi: ");
    for (i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }
    printf("\n");

    return 0;
}

