#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {
		;
	} // fungsi yang menerima input dan mengirim input melalui
	// fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi mengirim nilai pada x
		this->x = a;
	}
	int getX() {
		//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}
	float Luas(int a) {
		return 3.14 * a * a;
	}
	float Keliling(int a) {
		return 2 * 3.14 * a;
	}

};
class Bujursangkar :public bidangDatar {
public:
	void input() {
		int s;
		cout << "Luas Bujursangkar : ";
		cin >> s;
		setX(s);
	}

	float hitungLuas(int a) {
		return a * a;
	}

	float hitungKeliling(int a) {
		return 4 * a;
	}
};
int main() {
	Lingkaran* l;
	Bujursangkar* bs;
	

	l = new Lingkaran;
	l->input();
	cout << "Luas lingkaran : " << l->Luas(l->getX()) << endl;
	cout << "Keliling lingkaran : " <<l->Keliling( l->getX()) << endl;
	

	bs = new Bujursangkar;
	bs->input();
	cout << "Luas bujursangkar : "<<bs->hitungLuas(bs->getX()) << endl;
	cout << "Keliling bujursangkar : " <<bs->hitungKeliling (bs->getX()) << endl;
	

	
	 
	return 0;
}