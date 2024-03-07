#include <stdio.h>

int main(){
    int menu;
    float angka1, angka2, hasil;

    printf("MENU\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");

    printf("\nPilih Menu: ");
    scanf("%d", &menu);

    printf("Input Angka 1: ");
    scanf("%f", &angka1);
    printf("Input Angka 2: ");
    scanf("%f", &angka2);
    printf("\n");

    switch (menu) {
    case 1:
        hasil = angka1 + angka2;
        printf("Hasil dari %f + %f adalah %f\n", angka1, angka2, hasil);
        break;
    case 2:
        hasil = angka1 - angka2;
        printf("Hasil dari %f - %f adalah %f\n", angka1, angka2, hasil);
        break;
    case 3:
        hasil = angka1 * angka2;
        printf("Hasil dari %f * %f adalah %f\n", angka1, angka2, hasil);
        break;
    case 4:
        hasil = angka1 / angka2;
        printf("Hasil dari %f / %f adalah %f\n", angka1, angka2, hasil);
        break;
    default:
        printf("Pilihan Tidak Valid");
    }

    return 0;

}