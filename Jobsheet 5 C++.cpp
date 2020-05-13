#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	cout<<"Nama     : Eggy Fahmi Al BOurhanie"<<endl;
	cout<<"Nim      : F1B019045"<<endl;
	cout<<"Kelompok : 9"<<endl;
	
	int m,n;
	int nimA[2][2];
	int nimB[2][2];
	int jmlh[2][2];
	
	cout<<"PERKALIAN MATRIX :\n";
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
		cout<<"Masukkan nilai Nim ke-1 "<<"["<<m<<"]["<<n<<"]"<<" = ";
		cin>>nimA[m][n];
	}
	}
	cout<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
		cout<<"Masukkan nilai Nim ke-2 "<<"["<<m<<"]["<<n<<"]"<<" = ";
		cin>>nimB[m][n];
	}
	}
	cout<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
	jmlh [m][n]=nimA[m][n]*nimB[m][n];
	cout<<jmlh[m][n]<<" ";
	}
	cout<<endl;
	}
	}
