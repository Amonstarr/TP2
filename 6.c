/*Buatlah sebuah program untuk memeriksa huruf yang terdapat 
pada kata “GLORY” tanpa menggunakan perulangan (tidak perlu 
memasukkan kata "GLORY", langsung buat perbandingan antar huruf)!*/


#include <stdio.h>

int main(){
    char input;

    printf("Masukkan Huruf : ");
    scanf("%c", &input);

    switch (input){
        case 'G':
        case 'L':
        case 'O':
        case 'R':
        case 'Y':

        printf("Huruf %c terdapat pada \"GLORY\"\n", input);
            break;

        default:
        printf("Huruf %c tidak terdapat pada \"GLORY\"\n", input);
    }
    return 0;
}