#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main() 

{
	
 int huruf;

cout<<"Masukkan Huruf Kecil : "; 
cin>>huruf;
cout<<endl;

//seleksi pembanding OR, salah satu kondisi bernilai benar 

if((huruf = 'a') || (huruf = 'i') || (huruf = 'u') || (huruf = 'e' ) || (huruf = '0')) 
{
	 cout<<"Anda memasukkan huruf vokal ";
} 

else {
      cout<<"Yang Anda masukkan adalah huruf konsonan";
}
 
 
return 0;
}
