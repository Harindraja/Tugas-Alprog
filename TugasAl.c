#include <stdio.h>


int D1_1(){
    float debit_1, debit_2, debit;
    int hasil;
    char name[50];
    
    printf("Masukkan nama anda: ");
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|================================================|\n");
    printf("Masukkan debit pemakaian air anda bulan lalu: ");
    scanf("%f", &debit_1);
    printf("Masukkan debit pemakaian air anda bulan ini: ");
    scanf("%f", &debit_2);
    printf("masukkan nama :");

    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = debit * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    
    printf("|================================================|\n");
    printf("|               Hasil Dari Perhitungan           |\n");
    printf("|================================================|\n");
    printf("|nama: %s \n", name);
    printf("|tanggal: \n");
    printf("|Nominal Hasil: %d ", hasil);

    return 0;
}
int D1_2(){
    float debit_1, debit_2, debit;
    int hasil;

    printf("|================================================|\n");
    printf("Masukkan debit pemakaian air anda bulan lalu: ");
    scanf("%f", &debit_1);
    printf("Masukkan debit pemakaian air anda bulan ini: ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = debit * 2060;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2340;
    }else if (debit > 20){
        hasil = debit * 5940;
    }else {
        printf("masukkan nilai dengan benar");
    }
    
    printf("|================================================|\n");
    printf("|               Hasil Dari Perhitungan           |\n");
    printf("|================================================|\n");
    printf("|nama: \n");
    printf("|tanggal: \n");
    printf("|Nominal Hasil: %d ", hasil);

    return 0;
}

// int D2_1(){
//     float debit_1, debit_2, debit;
//     int hasil;
//     char nama[20];

//     printf("|================================================|\n");
//     printf("masukkan nama anda: ");
//     nama = nama();
//     printf("Masukkan debit pemakaian air anda bulan lalu: ");
//     scanf("%f", &debit_1);
//     printf("Masukkan debit pemakaian air anda bulan ini: ");
//     scanf("%f", &debit_2);
//     system("clear");

    
//     debit = debit_1 - debit_2;

//     if(debit >= 0 && debit<= 10){
//         hasil = debit * 2340;
//     }else if (debit >= 11 && debit <= 20){
//         hasil = debit * 2620;
//     }else if (debit > 20){
//         hasil = debit * 6000;
//     }else {
//         printf("masukkan nilai dengan benar");
//     }
    
//     printf("|================================================|\n");
//     printf("|               Hasil Dari Perhitungan           |\n");
//     printf("|================================================|\n");
//     printf("|nama: %s", nama);
//     printf("|tanggal: \n");
//     printf("|Nominal Hasil: %d ", hasil);

//     return 0;
// }

// int D2_2(){
//     float debit_1, debit_2, debit;
//     int hasil;

//     printf("|================================================|\n");
//     printf("Masukkan debit pemakaian air anda bulan lalu: ");
//     scanf("%f", &debit_1);
//     printf("Masukkan debit pemakaian air anda bulan ini: ");
//     scanf("%f", &debit_2);
//     system("clear");
    
//     debit = debit_1 - debit_2;

//     if(debit >= 0 && debit<= 10){
//         hasil = debit * 2620;
//     }else if (debit >= 11 && debit <= 20){
//         hasil = debit * 2900;
//     }else if (debit > 20){
//         hasil = debit * 6060;
//     }else {
//         printf("masukkan nilai dengan benar");
//     }
    
//     printf("|================================================|\n");
//     printf("|               Hasil Dari Perhitungan           |\n");
//     printf("|================================================|\n");
//     printf("|nama: \n");
//     printf("|tanggal: \n");
//     printf("|Nominal Hasil: %d ", hasil);

//     return 0;
// }

// int D3_1(){
//     float debit_1, debit_2, debit;
//     int hasil;

//     printf("|================================================|\n");
//     printf("Masukkan debit pemakaian air anda bulan lalu: ");
//     scanf("%f", &debit_1);
//     printf("Masukkan debit pemakaian air anda bulan ini: ");
//     scanf("%f", &debit_2);
//     system("clear");
    
//     debit = debit_1 - debit_2;

//     if(debit >= 0 && debit<= 10){
//         hasil = debit * 2060;
//     }else if (debit >= 11 && debit <= 20){
//         hasil = debit * 2340;
//     }else if (debit > 20){
//         hasil = debit * 5940;
//     }else {
//         printf("masukkan nilai dengan benar");
//     }
    
//     printf("|================================================|\n");
//     printf("|               Hasil Dari Perhitungan           |\n");
//     printf("|================================================|\n");
//     printf("|nama: \n");
//     printf("|tanggal: \n");
//     printf("|Nominal Hasil: %d ", hasil);

//     return 0;
// }

// int D3_2(){
//     float debit_1, debit_2, debit;
//     int hasil;

//     printf("|================================================|\n");
//     printf("Masukkan debit pemakaian air anda bulan lalu: ");
//     scanf("%f", &debit_1);
//     printf("Masukkan debit pemakaian air anda bulan ini: ");
//     scanf("%f", &debit_2);
//     system("clear");
    
//     debit = debit_1 - debit_2;

//     if(debit >= 0 && debit<= 10){
//         hasil = debit * 2060;
//     }else if (debit >= 11 && debit <= 20){
//         hasil = debit * 2340;
//     }else if (debit > 20){
//         hasil = debit * 5940;
//     }else {
//         printf("masukkan nilai dengan benar");
//     }
    
//     printf("|================================================|\n");
//     printf("|               Hasil Dari Perhitungan           |\n");
//     printf("|================================================|\n");
//     printf("|nama: \n");
//     printf("|tanggal: \n");
//     printf("|Nominal Hasil: %d ", hasil);

//     return 0;
// }

// int D4_1(){

// }

// int D4_2(){

// }

// int D1_3(){

// }

// int D1_4(){
    
// }

// int D2_3(){
    
// }

// int D2_4(){
    
// }

// int D3_3(){
    
// }

// int D3_4(){
    
// }
// int D4_3(){
    
// }

// int D4_4(){
    
// }

// int D5_1(){
    
// }

// int D5_2(){
    
// }

// int D5_3(){
    
// }

// int D5_4(){
    
// }

// //niaga 
// int E1_1(){
    
// }

// int E1_2(){
    
// }

// int E1_3(){
    
// }

// int E1_4(){
    
// }

// int E2_1(){
    
// }

// int E2_2(){
    
// }

// int E2_3(){
    
// }

// int E2_4(){
    
// }

// int E3_1(){
    
// }

// int E3_2(){
    
// }

// int E3_3(){
    
// }

// int E3_4(){
    
// }

int rumah_tangga(){
    int daya, lebar;

    printf("|=================================================================================|\n");
    printf("|                               Perhitungan Rumah Tangga                          |\n");
    printf("|=================================================================================|\n\n");
    printf("|================================================|\n");
    printf("|Berapakah lebar jalan termasuk lebar got        |\n");
    printf("|di depan rumah anda:                            |\n");
    printf("|1. 0 - 3.99 M                                   |\n");
    printf("|2. 4 - 6.99 M                                   |\n");
    printf("|3. 7 - 10 M                                     |\n");
    printf("|4. lebih lebar dari 10 M                        |\n");
    printf("|Masukkan pilihan anda:                          |\n");
    printf("|: ");
    scanf("%d", &lebar);
    system("clear");
    printf("|================================================|\n");
    printf("|Berapakah anda menggunakan daya listrik :       |\n");
    printf("|1. 450 VA                                       |\n");
    printf("|2. 900 VA                                       |\n");
    printf("|3. 1300 VA                                      |\n");
    printf("|4. Lebih dari 1300 VA                           |\n");
    printf("|Masukkan pilihan anda:                          |\n");
    printf("|: ");
    scanf("%d", &daya);
    system("clear");

    if(lebar == 1 && daya == 1){
        D1_1();
    }else if (lebar == 1 &&  daya == 2){
        D1_2();
    }
    //     D2_1();
    // }
    

    return 0;
}

int niaga(){
    int daya, lebar;

    printf("|=================================================================================|\n");
    printf("|                               Perhitungan Rumah Tangga                          |\n");
    printf("|=================================================================================|\n\n");
    printf("|================================================|\n");
    printf("|Berapakah lebar jalan termasuk lebar got        |\n");
    printf("|di depan rumah anda:                            |\n");
    printf("|1. 0 - 6.99 M                                   |\n");
    printf("|2. 7 - 10 M                                     |\n");
    printf("|3. lebih lebar dari 10 M                        |\n");
    printf("|Masukkan pilihan anda:                          |\n");
    printf("|: ");
    scanf("%d", &lebar);
    system("clear");
    printf("|================================================|\n");
    printf("|Berapakah anda menggunakan daya listrik :       |\n");
    printf("|1. 450 VA                                       |\n");
    printf("|2. 900 VA                                       |\n");
    printf("|3. 1300 VA                                      |\n");
    printf("|4. Lebih besar daripada 1300 VA                 |\n");
    printf("|Masukkan pilihan anda:                          |\n");
    printf("|: ");
    scanf("%d", &daya);
    system("clear");

    if(lebar == 1 && daya == 1){
        D1_1();
    }else if (lebar == 1 &&  daya == 2){
        D1_2();
    }else if (lebar == 1 &&  daya == 2){
        D1_2();
    }
    

    return 0;
}


int main(){
    int pilihan;

    printf("|============================================|\n");
    printf("\t    Selamat Datang di     \n");
    printf("\t  Penghitungan Tarif Air  \n");
    printf("|============================================|\n\n");
    printf("|Pilihlah Jenis Kelompok Pelanggan : |\n");
    printf("|1. Rumah Tangga                     |\n");
    printf("|2. Niaga                            |\n");
    printf("|3. Keluar                           |\n");
    scanf("%d", &pilihan);
    system("clear");
    switch (pilihan)
    {
    case 1 :
        rumah_tangga();
        break;
    case 2 :
        niaga();
        break;
    default:
        break;
    }

    // printf("|============================================|\n");
    // printf("\t\tTerimakasih Telah Mencoba    \n");
    // printf("\tProgram ini dibuat oleh : \n");
    // printf("|============================================|\n\n");

}