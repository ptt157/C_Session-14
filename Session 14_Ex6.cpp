#include <stdio.h>

int main() {
    char chuoi[1000];  
    int dem = 0;  

    printf("Nhap mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin); 

    for (int i = 0; chuoi[i] != '\0'; i++) {
        
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            dem++;  
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", dem);

    return 0;
}

