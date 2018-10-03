#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

{
	//deklarasi variabel
	double TinggiBadan , BeratBadanIdeal;
	cout<<"Masukkan Tinggi Badan : "; cin >>TinggiBadan;
	
	//membuat jarak baris
cout <<endl <<endl;
	
	//perhitungan berat badan ideal 
	BeratBadanIdeal = TinggiBadan - 100 - (0.1 * (TinggiBadan - 100));
	
	//membuat jarak baris
cout <<endl <<endl;
	
	//menampilkan hasil perhitungan
	cout <<"Berat Badan Ideal : " <<endl;
	cout<<BeratBadanIdeal<< " Kg  Adalah Berat Badan Ideal";
	
	return 0; 
}
