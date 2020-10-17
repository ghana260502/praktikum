#include <iostream>

using namespace std;

int main()
{
	char nama[50], nim[50];
	float nilai_uts,nilai_uas,nilai_akhir;
	
	cout <<"------------------------------------------------" << endl;
	cout <<"Tugas praktikum algoritma dan pemrograman       " << endl;
	cout <<"Nama : ghana ardian ilham samudra               " << endl;
	cout <<"Nim : 124200042                                 " << endl;
	cout <<"------------------------------------------------" << endl;
	cout << endl;
	
	cout <<"Nama mahasiswa :";
	cin >> nama;
	cin.getline(nama,sizeof(nama));
	cout <<"Nim :";
	cin >> nim;
	cout << endl;
	cout <<"Nilai uts =";
	cin >> nilai_uts;
	cout <<"Nilai uas =";
	cin >> nilai_uas;
	
	
	cout <<"----------------------------------------------------------" << endl;
	
	nilai_akhir = (nilai_uts + nilai_uas)/2;
	
	
	cout<<" Mahasiswa dengan nama "<<nama<<"("<<nim<<") mendapatkan nilai = "<<nilai_akhir;
	
	return 0;
}

