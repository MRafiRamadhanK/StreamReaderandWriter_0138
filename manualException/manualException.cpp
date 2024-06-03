#include<iostream>
#include<exception>
using namespace std;

int main() {
	try {
		cout << "selamat belajar di prodi TI UMY" << endl;
		cout << "pernyataan tidak dieksekusi" << endl;
	}
	catch (int a) {
		cout << "pengecualian akan dieksekusi" << endl;
	}

}