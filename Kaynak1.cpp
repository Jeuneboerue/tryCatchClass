#include <iostream>
#include "hataSinifi.h"
using namespace std;

int main() {

	try {
		int x;
		cout << "Sifirdan buyuk bir sayi giriniz: ";
		cin >> x;
		if (x == 0) {
			throw hataSinifi("Hata! Sifir girildi!");
		}
		else if (x <= 0) {
			throw hataSinifi("Hata! Sifirdan kucuk bir sayi girildi!");
		}
		else {
			cout << "Sayiniz: " << x << endl;
		}
	}
	catch (hataSinifi h) {
		cout << h.getHataMesaji();

	}
}