#include <stdio.h>

int main(void){
    int pilihan;

    printf("|==========================|");
    printf("|    Selamat Datang di     |");
    printf("|  Penghitungan Tarif Air  |");
    printf("|==========================\n\n|");
   
    printf("|Pilihlah Jenis Kelompok Pelanggan : |");
    
    printf("|1. Non Niaga Bersubsidi (Rumah Tangga Memiliki daya listrik 450 VA - 900 VA)   |");
    printf("|2. Non Niaga Tidak Bersubsidi (Rumah Tangga Memiliki daya listrik >=1300)      |");
    printf("|3. Niaga                                                                       |");
    scanf("%d", &pilihan);
}