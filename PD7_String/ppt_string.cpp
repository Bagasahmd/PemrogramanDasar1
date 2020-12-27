#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;
int main(){
  int pilih,submenu;
  string ulang;
  while(ulang != "n"){
    system("cls");
    cout << "====================================\n";
    cout << "==         TUGAS PPT STRING       ==\n";
    cout << "====================================\n";
    cout << "1. Input String \n";
    cout << "2. Menghitung panjang string & Membalik string \n";
    cout << "3. Menyalin string \n";
    cout << "====================================\n";
    cout << " Pilih menu : ";
    cin >> pilih;
    system("cls");
    switch(pilih){
      case 1:{
        cout << "--]      Input String     [--\n";
        cout << "1. scanf()\n";
        cout << "2. gets()\n";
        cout << "3. fgets()\n";
        cout << " Pilih menu : ";
        cin >> submenu;
        switch(submenu){
          case 1:{
            char karakter[10];
            printf("Masukkan karakter:");
            scanf("%s", karakter);
            printf("Karakter anda    : %s \n",karakter);
            cout << "Panjang karakter : " << strlen(karakter) << endl;
            
          }break;
          case 2:{
              char karakter[1];
              cin.ignore();
              printf("Masukkan karakter:");
              gets(karakter);
              printf("Karakter anda    : %s \n",karakter);
              cout << "Panjang karakter : " << strlen(karakter) << endl;
              
          }break;
          case 3:{
            cin.ignore();
            char karakter[10];
            printf("Masukkan karakter: ");
            fgets(karakter, sizeof karakter, stdin);
            printf("Karakter anda    : %s \n", karakter);
            cout << "Panjang karakter : " << strlen(karakter) << endl;
            
          }break;
        }
      }
      break;

      case 2:{
        //deklarasi var text bertipe string
        char text[50];
        cin.ignore();                
        int jml;            
        cout << " ===]   Menghitung Jumlah Karakter   [=== \n";
        cout << "Masukkan teks   : ";
        gets(text);   

        //menghitung jml karakter
        jml = strlen(text);
        cout << "Jumlah karakter : " << jml << " karakter" << endl;

        //membalik text
        cout << "-----------------------------------------\n";
        cout << " ===]   Membalik text   [===\n";
        cout << "Sebelum dibalik : " << text << endl;
        cout << "Setelah dibaiik : " << strrev(text) << endl;
      }
      break;

      case 3:{
        cin.ignore();
        int jml;
        char kata1[50];
        cout << "Masukkan text : ";
        gets(kata1);
        char kata2[50];
        //menyalin string dengan fungsi strcpy(destination,source);
        strcpy(kata2,kata1);                    
        cout << "Text asli  : " << kata1 <<endl;
        cout << "Hasil copy : " << kata2 <<endl; 
      }
      break;
    }
    cout << "Kembali ke menu (y/n) ? ";
    cin >> ulang;
    
  }
  return 0;
}