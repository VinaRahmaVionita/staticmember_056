#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);   //construktor
	~angka();     //destructor
	void cetakData();
	void isiData();
};
//definisi member function
angka::angka(int i) {  //construktor
	panjang = i;
	arr = new int[1];
	isiData();
}

angka::~angka() {   //destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat array sudah di lepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = ";cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3);                 //construktor di panggil
	angka* ptrBelajarcpp = new angka(5); //construktor di panggil
	delete ptrBelajarcpp;                //destructor di panggil

	return 0;
}//destruktor di panggil