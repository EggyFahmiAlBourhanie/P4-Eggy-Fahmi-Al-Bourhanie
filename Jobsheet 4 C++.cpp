#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	cout<<"Nama     : Eggy Fahmi Al BOurhanie"<<endl;
	cout<<"Nim      : F1B019045"<<endl;
	cout<<"Kelompok : 9"<<endl;
	
	int i,j;
	int nimA[2][2];
	int nimB[2][2];
	int jmlh [2][2];
	
	cout<<"PENGURANGAN MATRIX :\n";
	for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	cout<<"Masukkan Nim ke-1 "<<"["<<i<<"]["<<j<<"]"<<" = ";
	cin>>nimA[i][j];
	}
	}
	cout<<endl;
	for(i=0; i<2; i++){
	for(j=0; j<2; j++){
	cout<<"Masukan Nim ke-2 "<<"["<<i<<"]["<<j<<"]"<<" = ";
	cin>>nimB[i][j];
	}
	}
	cout <<endl;
	for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	jmlh [i][j]=nimA[i][j]-nimB[i][j];
	cout<<jmlh[i][j]<<" ";
	}
	cout<<endl;
	}
	}
