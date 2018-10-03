#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

{
	//deklarasi variabel
	double yard, kaki, inchi, meter;
	cout<<"Masukkan Satuan Meter : "; cin>>meter;
	
		//membuat jarak baris
cout <<endl <<endl;
	
	//menghitung konversi
	inchi = meter * 39.370;
	kaki = meter * 3.2808;
	yard = meter *  1.0936;
	
	//menampilkan hasil konversi
	cout <<" 1 Meter Setara Dengan : " <<endl;
	cout<<yard<< " Yard "<<kaki<<" Kaki "<<inchi<<" inchi ";
	
	return 0;
	
}
