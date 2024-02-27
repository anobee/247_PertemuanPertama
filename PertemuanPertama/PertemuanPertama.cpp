// PertemuanPertama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//begin 
	//numeric nAlas, nTinggi, nLuas
	//Display 'masukan Alas = '
	//Accept nTinggi 
	//compute nLuas = nAlas*Tinggi/2
	//Display 'Luasnya = ' + nLuas
	//End 



	float alas, tinggi, luas;
	cout << "masukan alas : ";
	cin >> alas;
	cout << "masukan tinggi : ";
	cin >> tinggi;
	luas = alas * tinggi / 2;
	cout << "luasnya = " << luas;
}
