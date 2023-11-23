#include <iostream>
using namespace std;

void tinhNamnhuan(){
	int namNhuan;
cout << "Nhap nam ban muon nhap: ";
cin >> namNhuan;
 if (namNhuan%4==0){
 	cout << "True" << endl;
 }  else if ( namNhuan%100==0 ){
 	cout << "False "<< endl;
 } else {
 	cout << "False "<< endl;
 }
}


int main (){
    tinhNamnhuan();
}

