#include <stdio.h>
int total_pembelian=0;
void diskon_pembelian(){
	int diskon;
	diskon=0.1*total_pembelian;
	printf ("diskon %d", diskon);
	total_pembelian=total_pembelian-diskon;
}
main(){
	int kode , harga , i=1, total_bayar, no[15] = {185000,1600000,100000,1000000,150000,400000,150000,150000,200000,1200000,1000000,30000,35000,40000,45000};
	char kar= 'y' ;
printf ("=====================selamatdatang di Toko========================\n");
printf ("========barang yang sudah di belitidakbolehdikembalikan=========\n");
printf ("===================================================================\n");
printf ("sedia :\n");
	printf("1. KipasAngin Cosmos 16_XDC\t Harga= Rp.%i\n", no[0]);
	printf("2. TV Polytron 32 in.\t\t Harga= Rp.%i\n", no[1]);
	printf("3. Speaker Logitech\t\t Harga= Rp.%i\n", no[2]);
	printf("4. Kulkas Sanyo\t\t\t Harga= Rp.%i\n", no[3]);
	printf("5. Rice Cooker Miyako\t\t Harga= Rp.%i\n", no[4]);
	printf("6. Blender Cosmos\t\t Harga= Rp.%i\n", no[5]);
	printf("7. Mixer Miyako\t\t\t Harga= Rp.%i\n", no[6]);
	printf("8. SetrikaMasphion\t\t Harga= Rp.%i\n", no[7]);
	printf("9. Kompor Gas\t\t\t Harga= Rp.%i\n", no[8]);
	printf("10. KomporListrik\t\t Harga= Rp.%i\n", no[9]);
	printf("11. MesinCuci Sharp\t\t Harga= Rp.%i\n", no[10]);
	printf("12. Philip LED 3W\t\t Harga= Rp.%i\n", no[11]);
	printf("13. Philip LED 7W\t\t Harga= Rp.%i\n", no[12]);
	printf("14. Philip LED 10W\t\t Harga= Rp.%i\n", no[13]);
	printf("15. Philip LED 13W\t\t Harga= Rp.%i\n", no[14]);
	printf("masukkankodebarang (1-15)");
	
	
while (kar=='y'){
	printf ("\nbarangke-%d:",i);
	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1)	{
	harga= 185000;
	printf("1 = %d\n ", harga);
}else if (kode==2){
		harga= 1600000;
	printf("2 = %d\n ", harga);
}else if ( kode == 3){
		harga= 100000;
	printf("3 = %d\n ", harga);
}else if ( kode == 4){
		harga= 1000000;
	printf("4 = %d\n ", harga);
}else if ( kode == 5){
		harga=150000;
	printf("5 = %d\n ", harga);
}else if ( kode == 6){
		harga=400000;
	printf("6 = %d\n ", harga);
}else if ( kode == 7){
		harga=150000;
	printf("7 = %d\n ", harga); 
}else if ( kode == 8){
		harga=150000;
	printf("8 = %d\n ", harga);
}else if ( kode == 9){
		harga=200000;
	printf("9 = %d\n ", harga);
}else if ( kode == 10){
		harga=1200000;
	printf("10 = %d\n ", harga);
}else if ( kode == 11){
		harga=1000000;
	printf("11 = %d\n ", harga);
}else if ( kode == 12){
		harga=30000;
	printf("12 = %d\n ", harga);
}else if ( kode == 13){
		harga=35000;
	printf("13 = %d\n ", harga);
}else if ( kode == 14){
		harga=40000;
	printf("14 = %d\n ", harga);
}else if ( kode == 15){
		harga=45000;
	printf("15 = %d\n ", harga);
}else{
	printf("input salah!!!! ");
}
total_pembelian=total_pembelian+harga;
printf("MAU BELI BARANG LAGI?? [y/t]");
scanf("%c", &kar);
i++;

}
printf("total_pembelian = %d\n ", total_pembelian);
if (total_pembelian> 1000000){
	diskon_pembelian();
}else{
	total_pembelian;
}
printf("\ntotal_bayar=%d\n",total_pembelian);
}
