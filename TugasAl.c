#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void outro(){
    printf("|============================================|\n");
    printf("\t\tTerimakasih Telah Mencoba    \n");
    printf("\tProgram ini dibuat oleh : \n");
    printf("|============================================|\n\n");
}

int D1_1(){
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        D1_1();
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D1_2(){ 
    float debit_1, debit_2, debit; //belum di edit broo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        D1_1();
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D2_1(){
    float debit_1, debit_2, debit; //belum di edit broo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        D1_1();
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D2_2(){
    float debit_1, debit_2, debit; //belum di edit broo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        D1_1();
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D3_1(){
    float debit_1, debit_2, debit; //belum di edit broo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        D1_1();
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D3_2(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D4_1(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D4_2(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D1_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D1_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D2_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D2_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D3_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D3_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}
int D4_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D4_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D5_1(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D5_2(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D5_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int D5_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

//niaga 
int E1_1(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E1_2(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E1_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E1_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E2_1(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E2_2(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E2_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E2_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E3_1(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E3_2(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E3_3(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int E3_4(){
    float debit_1, debit_2, debit; //belum di edit brooo
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;            
    bulan = local->tm_mon + 1;      
    tahun = local->tm_year + 1900;   

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");
    
    debit = debit_1 - debit_2;

    if(hari < 10){
        if(debit >= 0 && debit<= 10){
        hasil = 10 * 1780;
    }else if (debit >= 11 && debit <= 20){
        hasil = debit * 2060;
    }else if (debit > 20){
        hasil = debit * 5880;
    }else {
        printf("masukkan nilai dengan benar");
    }
    }else{
        if(debit >= 0 && debit<= 10){
        hasil = (10 * 1780) + 1000;
    }else if (debit >= 11 && debit <= 20){
        hasil = (debit * 2060)+1000;
    }else if (debit > 20){
        hasil = (debit * 5880)+1000;
    }else {
        D1_1();
    }
    }
    

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit penggunaan bulan lalu: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if(validasi == 1){
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal:  %02d/%02d/%d\n", hari,bulan,tahun);
        printf("|Nominal Hasil:Rp %d,- ", hasil);
    }else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if(ulangi == 1){
            D1_1();
        }else if (ulangi == 2)
        {
            outro();
        }else {
            printf("anda memasukkan angka yang salah");
        }
    }
    else{
        outro();
    }
    return 0;
}

int rumah_tangga(){
    int daya, lebar;




    printf("|=================================================================================|\n");
    printf("|                               Perhitungan Rumah Tangga                          |\n");
    printf("|=================================================================================|\n\n");
    printf("|================================================|\n");
    printf("|Berapakah lebar jalan termasuk lebar got        |\n");
    printf("|di depan rumah anda:                            |\n");
    printf("|1. 0 - 3.99 m                                   |\n");
    printf("|2. 4 - 6.99 m                                   |\n");
    printf("|3. 7 - 10 m                                     |\n");
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
    }else
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
    printf("|1. 0 - 6.99 m                                   |\n");
    printf("|2. 7 - 10 m                                     |\n");
    printf("|3. lebih lebar dari 10 m                        |\n");
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

    

}