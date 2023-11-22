#include <iostream>
using namespace std;

int main (){
int namNhuan;
cout << "Nhap nam ban muon nhap: ";
cin >> namNhuan;
 if (namNhuan%4==0){
 	cout << "Nam " << namNhuan << " la nam nhuan" << endl;
 } else {
 	cout << "Nam " << namNhuan << " khong phai la nam nhuan" << endl;
 }
}

