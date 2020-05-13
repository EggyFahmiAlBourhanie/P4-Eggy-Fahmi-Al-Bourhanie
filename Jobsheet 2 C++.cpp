#include <iostream>
using namespace std;
int main (){
	int nim[2][2];
	nim[0][0]=1;
	nim[0][1]=8;
	nim[1][0]=2;
	nim[1][1]=0;
	cout <<"NIM Mahasiswa 1= "<<nim[0][0]<<", "<<nim[0][1]<<endl;
	cout <<"NIM Mahasiswa 2= "<<nim[1][0]<<", "<<nim[1][1]<<endl;
	return 0;
}
