//Progam Operasi dengan operasi operasi yang diminta
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	int x,y,pil;
	float hasil;
	string operasi;
	
	cout<<"\t Operasi Aritmatika"<<endl;
	cout<<"\n";
	
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"\n";
	
	cout<<"Pilih Operasi = "; cin>>pil;
	cout<<"Bilangan Pertama = "; cin>>x;
	cout<<"Bilangan Kedua = "; cin>>y;
	
	switch (pil)
	{
		case 1 : hasil = x+y;
		operasi = '+';
		break;
		
		case 2 : hasil = x-y;
		operasi = '-';
		break;
		
		case 3 : hasil = x*y;
		operasi = '*';
		break;
		
		case 4 : hasil = x/y;
		operasi = '/';
		break;
		
		case 5 : hasil = x%y;
		operasi = '%';
		break;
		
		default :
			cout<<"Can't Indentified"<<endl;
				
	}
	
	cout<<""<<x<<operasi<<y<<"="<<hasil<<endl;
	
	getch();
}
