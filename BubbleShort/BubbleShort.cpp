// BubbleShort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n; //deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() { // prosedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array :"; // output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //
			break; //keljuar dari loop
		else {
			cout << endl;
			cout << "============" << endl;
			cout << "Masukan Elemen Array" << endl;
			cout << "============" << endl;
		}
	}
	for (int i = 0; i < n; i++) { // looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; // output ke layar
		cin >> arr[i];

	}
}


