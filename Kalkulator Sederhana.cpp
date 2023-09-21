#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int a;
    float num1, num2, tmbh, krg, kl, bg;

    cout<<"SELAMAT DATANG DI KALKULATOR BUATAN"<<endl;
    cout<<"==================================================================="<<endl;
    cout<<"Jenis-jenis operator yang tersedia:\n"<<endl;
    cout<<"1. Jumlah\n2. Kurang\n3. Kali\n4. Bagi"<<endl;
    cout<<""<<endl;
    cout<<"Pilih operator anda yang inginkan: ";
    cin>>a;

    cout<<"Masukan angka pertama yang anda inginkan: ";
    cin>>num1;
    cout<<"Masukan angka kedua yang anda inginkan: ";
    cin>>num2;

    if(a==1)
    {
        tmbh=num1+num2;
        cout<<"Hasil yang anda dapatkan adalah: "<<tmbh<<endl;
    }

    else if(a==2)
    {
        krg=num1-num2;
        cout<<"Hasil yang anda dapatkan adalah: "<<krg<<endl;
    }
    else if(a==3)
    {
        kl=num1*num2;
        cout<<"Hasil yang anda dapatkan adalah: "<<kl<<endl;
    }
    else if(a==4)
    {
        bg=num1/num2;
        cout<<"Hasil yang anda dapatkan adalah: "<<bg<<endl;
    }
    else
    {
        cout<<"Operator tidak terdaftar"<<endl;
    }


}