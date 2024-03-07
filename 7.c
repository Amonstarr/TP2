#include <stdio.h>
#include <string.h>

struct murid{
    char nama[30];
    int nilai, nim;
};

char* Indeks_Kelulusan(int nilai) {
    if (nilai > 80 && nilai <= 100)
        return "A";
    else if (nilai > 70)
        return "AB";
    else if (nilai > 65)
        return "B";
    else if (nilai > 60)
        return "BC";
    else if (nilai > 50)
        return "C";
    else
        return "D";
}

void Menampilkan_Indeks(char* indeks) {
    if (strcmp(indeks, "A")  || strcmp(indeks, "AB") || strcmp(indeks, "B") )
        printf("Keterangan\t: LULUS");
    else 
        printf("Keterangan\t: TIDAK LULUS");
}

int main() {
    struct murid murid;

    printf("Nama\t: ");
    gets(murid.nama);
    printf("NIM\t: ");
    scanf("%d", &murid.nim);
    printf("Nilai\t: ");
    scanf("%d", &murid.nilai);

    char* indeks = Indeks_Kelulusan(murid.nilai);

    printf("\nNama\t\t: %s\n", murid.nama);
    printf("NIM\t\t: %d\n", murid.nim);
    printf("Nilai\t\t: %d\n", murid.nilai);
    printf("Indeks Nilai\t: %s\n", indeks);
    Menampilkan_Indeks(indeks);
    return 0;
}