//Progam Menghitung Gaji Karyawan
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	char nama[120], nik[16];
	int jeniskelamin,status,kendaraan;
	long int gajipokok,uangmakan,tunjangan,transportasi,gajikotor,pajak,gajibersih;
	
	cout<<"Layanan Progam Menghitung Gaji Karyawan"<<endl;
	cout<<"\n";
	
	cout<<"Nama : "; cin>>nama; 
	cout<<"NIK : "; cin>>nik;
	cout<<"Jenis Kelamin (0=perempuan, 1=laki-laki) : "; 
	cin>>jeniskelamin;
	cout<<"Status Pernikahan (0=single, 1=menikah) : "; 
	cin>>status;
	cout<<"Kendaraan (0=motor, 1=mobil) : ";
	cin>>kendaraan;
	cout<<"Gaji Pokok = Rp. "; cin>>gajipokok;
	cout<<"Uang Makan = Rp. "; cin>>uangmakan;
	cout<<"\n";
	
	if((jeniskelamin==1)&&(status==1)){
		tunjangan=500000;
	}
	else{
		tunjangan=0;
	}
	if(kendaraan==1){
		transportasi=1000000;
	}
	else if(kendaraan==0){
		transportasi=500000;
	}
	else{
		transportasi=0;
	}
	gajikotor=gajipokok+tunjangan+uangmakan+transportasi;
	pajak=(0.05*gajikotor);
	gajibersih=gajikotor-pajak;
	
	cout<<"Tunjangan = Rp. "<<tunjangan<<endl;
	cout<<"Uang Transportasi = Rp. "<<transportasi<<endl;
	cout<<"Gaji Kotor = Rp. "<<gajikotor<<endl;
	cout<<"Pajak = Rp. "<<pajak<<endl;
	cout<<"Gaji Bersih = Rp. "<<gajibersih<<endl;
	cout<<"\n";
	
	cout<<"Terimakasih Telah Menggunakan Layanan Ini"<<endl;
	cout<<"Semoga Hari Anda Cerah:)"<<endl;
	
	getch();
	
}
