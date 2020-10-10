#include <iostream>
#include <conio.h>

using namespace std;

class Kuda
{
public:
	void aturTinggi(int T) {
		this->Tinggi = T;

		cout << "Tinggi Kuda  = " << T << endl;
	}

	string katakanHalo() {
		return "Halo, Saya Kuda";
	}

private:
	int Tinggi;

};

class Kucing
{
public:
	void aturTinggi(int T) {
		this->Tinggi = T;

		cout << "Tinggi Kucing  = " << T << endl;
	}

	string katakanHalo() {
		return "Halo, Saya Kucing";
	}
private:
	int Tinggi;
};

int main() {
	Kuda K;
	K.aturTinggi(90);
	cout << K.katakanHalo() << endl;

	Kucing Kc;
	Kc.aturTinggi(17);
	cout << Kc.katakanHalo() << endl;

	_getch();
	return 0;
}