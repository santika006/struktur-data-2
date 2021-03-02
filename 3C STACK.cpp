#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

struct Tumpukan
    {

    char isi[25];
    int atas;

    }T;

void push (char x){
    if(T.atas==25){

        cout<<"Tumpukan sudah penuh";
        getch();
    }else{

        T.atas=T.atas+1;
       T.isi[T.atas]=x;
    }
}
char pop(){
    char hasil;
    if(T.atas == 0){
    cout<<"Tumpukan sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.isi[T.atas];
      T.atas = T.atas - 1;
   }
   return hasil;
}

int main()
{
    int i;
    char kalimat[25];
    system("CLS");
    T.atas=0;

    cout<<"Masukan Kalimat : ";cin.getline(kalimat,sizeof(kalimat));

    system("CLS");
    cout<<"Kalimat Asli : "<<kalimat;

     for(i=0; i<strlen(kalimat); i++)
      {
        push(kalimat[i]);
      }
    cout<<"\nKalimat Setelah di Balik : ";

    for(i=0; i<strlen(kalimat); i++)
    {
        cout<<pop();
    }
    cout<<endl;
	return 0;
}
