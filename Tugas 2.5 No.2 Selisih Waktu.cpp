#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

{

	//deklarasi variabel
		int jam, menit, detik, jamkedua, menitkedua, detikkedua, selisihjam, selisihmenit, selisihdetik;
		
	cout <<"Masuk kan waktu pertama" <<endl;
	cout <<" Jam : "; cin >>jam;
	cout <<" Menit : "; cin >>menit;
	cout <<" Detik : "; cin >>detik;
	
	//membuat jarak baris
cout <<endl <<endl;
	
	
	cout <<"masukan waktu ke dua" <<endl;
	cout <<" Jam : "; cin >>jamkedua;
	cout <<" Menit : "; cin >>menitkedua;
	cout <<" Detik : "; cin >>detikkedua;
	
	//perhitungan selisih jam
	selisihjam = jamkedua - jam;
	
	//perhitungan selisih menit
	selisihmenit = menitkedua - menit;
	
	//perhitungan selisih detik
	selisihdetik = detikkedua - detik;	
	
	//membuat jarak baris
cout <<endl <<endl;
	
	//menampilkan hasil perhitungan
	cout <<"Selisih Waktu" <<endl;
	cout<<selisihjam<< " Jam ";
	cout<<selisihmenit<< " menit ";
	cout<<selisihdetik<< " detik ";
	
	return 0; 
}
	


