//Progam Konversi Nilai Huruf dari Nilai Input !
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int nilai;
	string grd;
	
	cout<<"Konversi Nilai"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Nilai Anda : "<<endl;
	cin>>nilai;
	cout<<"\n";
	
	switch(nilai){
		case 80 ... 100: grd="A";
		break;
		case 65 ... 79: grd="B";
		break;
		case 50 ... 64: grd="C";
		break;
		case 35 ... 49: grd="D";
		break;
		case 0 ... 34: grd="E";
		break;
		
		deafault: cout<<"Nilai anda tidak dapat dijangkau"<<endl;
	}
	
	cout<<"Tabel Nilai"<<endl;
	cout<<"|---------------------------|"<<endl;
	cout<<"|        A -> 80-100        |"<<endl;
	cout<<"|        B -> 65-79         |"<<endl;
	cout<<"|        C -> 50-64         |"<<endl;
	cout<<"|        D -> 35-49         |"<<endl;
	cout<<"|        E -> 0-34          |"<<endl;
	cout<<"|---------------------------|"<<endl;
	cout<<"\n";
	
	cout<<"Hasil Pengkoversian Nilai : "<<grd;
	
	getch();
	
}
