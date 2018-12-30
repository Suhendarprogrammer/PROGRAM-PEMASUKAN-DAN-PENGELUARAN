#include <iostream>

using namespace std;

int main()
{
    int pemasukan, max=7000;
    cout<<"**********PROGRAM MENGHITUNG PEMASUKAN/PENGELUARAN**********\n";
    cout<<"============================================================\n";
    cout<<"\nMasukkan Nilai Pemasukan : ";
    cin>>pemasukan;
    if (pemasukan>max)
        cout<<"\nPemasukan Lebih Besar Dari Pengeluaran : ";
    else
        cout<<"Pemasukan Lebih Kecil Dari Pengeluaran : ";
    return 0;
}
