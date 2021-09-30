//Menentukan Tahun Kabisat dari Input Tahun
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int tahun;
	
	cout<<"Menetukan Tahun Kabisat"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Tahun : ";
	cin>>tahun;
	
	if (tahun%400==0){
		cout<<"Merupakan Tahun Kabisat"<<endl;
	}
	else if (tahun%4==0){
		cout<<"Merupakan Tahun Kabisat"<<endl;
	}
	else if (tahun%100==0){
		cout<<"Bukan Merupakan Tahun Kabisat"<<endl;
	}
	else if (tahun%400!=0){
		cout<<"Bukan Merupakan Tahun Kabisat"<<endl;
	}
	cout<<"\n";
	
	cout<<"Terima kasih telah menggunakan progam ini"<<endl;
	cout<<"Semoga hari anda menyenangkan"<<endl;
	
	getch();
}
