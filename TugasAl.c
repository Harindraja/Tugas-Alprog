#include <stdio.h>

int main(void){
    int pilihan;

    printf("|==========================|\n");
    printf("|    Selamat Datang di     |\n");
    printf("|  Penghitungan Tarif Air  |\n");
    printf("|==========================|\n\n");
    
    printf("|1. Non Niaga Bersubsidi (Rumah Tangga Memiliki daya listrik 450 VA - 900 VA)   |\n");
    printf("|2. Non Niaga Tidak Bersubsidi (Rumah Tangga Memiliki daya listrik >=1300)      |\n");
    printf("|3. Niaga                                                                       |\n\n");

    printf("Pilihlah Jenis Kelompok Pelanggan : ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1:
            NonNiagaBersubsidi();
            break;
        case 2:
            break;
        case 3:
            break;
        default:
    }
    return 0;
}
 
int NonNiagaBersubsidi(){
    printf("\n=========== Non Niaga Bersubsidi ===========\n");
    
}