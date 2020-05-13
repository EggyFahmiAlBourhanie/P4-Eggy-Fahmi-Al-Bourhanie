#include <iostream>
using namespace std;
int total_pembelian=0;
int diskon_pembelian(){
	int diskon;
	diskon=0.1*total_pembelian;
	cout << "\ndiskon "<<diskon;
	total_pembelian=total_pembelian-diskon;
}
main(){
	int kode , harga , i=1, total_bayar, no[15] = {185000,1600000,100000,1000000,150000,400000,150000,150000,200000,1200000,1000000,30000,35000,40000,45000};
	char kar= 'y' ;
	cout<<"=====================selamatdatang di Toko========================\n";
	cout<<"========barang yang sudah di belitidakbolehdikembalikan=========\n";
	cout<<"===================================================================\n";
	cout<<"sedia :\n";
	cout<<"1. KipasAngin Cosmos 16_XDC\t Harga= Rp."<<no[0];
	cout<<"\n2. TV Polytron 32 in.\t\t Harga= Rp."<<no[1];
	cout<<"\n3. Speaker Logitech\t\t Harga= Rp."<<no[2];
	cout<<"\n4. Kulkas Sanyo\t\t\t Harga= Rp."<<no[3];
	cout<<"\n5. Rice Cooker Miyako\t\t Harga= Rp."<<no[4];
	cout<<"\n6. Blender Cosmos\t\t Harga= Rp."<<no[5];
	cout<<"\n7. Mixer Miyako\t\t\t Harga= Rp."<<no[6];
	cout<<"\n8. SetrikaMasphion\t\t Harga= Rp."<<no[7];
	cout<<"\n9. Kompor Gas\t\t\t Harga= Rp."<<no[8];
	cout<<"\n10. KomporListrik\t\t Harga= Rp."<<no[9];
	cout<<"\n11. MesinCuci Sharp\t\t Harga= Rp."<<no[10];
	cout<<"\n12. Philip LED 3W\t\t Harga= Rp."<<no[11];
	cout<<"\n13. Philip LED 7W\t\t Harga= Rp."<<no[12];
	cout<<"\n14. Philip LED 10W\t\t Harga= Rp."<<no[13];
	cout<<"\n15. Philip LED 13W\t\t Harga= Rp."<<no[14];
	cout<<"\nmasukkankodebarang (1-15)";
	
	
while (kar=='y'){
	cout<<"\nbarang ke-"<<i<<"=";
	cin >> kode;

	if (kode==1)	{
	harga= 185000;
	cout<<"1 = "<< harga;
}else if (kode==2){
	harga= 1600000;
	cout<<"2 = "<< harga;
}else if ( kode == 3){
		harga= 100000;
	cout<<"3 = "<< harga;
}else if ( kode == 4){
		harga= 1000000;
	cout<<"4 = "<< harga;
}else if ( kode == 5){
		harga=150000;
	cout<<"5 = "<< harga;
}else if ( kode == 6){
		harga=400000;
	cout<<"6 = "<< harga;
}else if ( kode == 7){
		harga=150000;
	cout<<"7 = "<< harga; 
}else if ( kode == 8){
		harga=150000;
	cout<<"8 = "<< harga;
}else if ( kode == 9){
		harga=200000;
	cout<<"9 = "<< harga;
}else if ( kode == 10){
		harga=1200000;
	cout<<"10 = "<< harga;
}else if ( kode == 11){
		harga=1000000;
	cout<<"11 = "<< harga;
}else if ( kode == 12){
		harga=30000;
	cout<<"12 = "<< harga;
}else if ( kode == 13){
		harga=35000;
	cout<<"13 = "<< harga;
}else if ( kode == 14){
		harga=40000;
	cout<<"14 = "<< harga;
}else if ( kode == 15){
		harga=45000;
	cout<<"15 = "<< harga;
}else{
	cout<<"input salah!!!! ";
}
total_pembelian=total_pembelian+harga;
cout<<"\nMAU BELI BARANG LAGI?? [y/t]";
cin >> kar;
i++;

}
cout<<"total_pembelian = "<< total_pembelian;
if (total_pembelian> 1000000){
	diskon_pembelian();
}else{
	total_pembelian;
}
cout<<"\ntotal bayar= "<< total_pembelian;
}
