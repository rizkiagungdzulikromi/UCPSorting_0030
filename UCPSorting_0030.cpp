//jawaban no 1. Membuat variable data temporer atau penyimpanan sementara
//jawaban no 2. Karena algorithma dapat membandingkan serta menukar elemen secara berturut turut dan bertahap tahap tanpa melewatkan satu tahapanpun, dengan menggunakan bahasa komputer
//jawaban no 3. static Array
#include <iostream>
using namespace std;

int Agung[30];                         // Membuat Array dengan panjang data 30
int n;                               // Membuat Variable inputan n

void input() {						//Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
		cin >> n;									 // memanggil variable inputan n

		if (n <= 30) {								 // membuat kondisi n tidak lebih dari 30
			break;
		}
		else
		{
			cout << "\n Array yang anda masukkan maksimal 30 elemen. \n"; // Menampilkan Pesan Jika  data lebih dari 30
		}
	}
	cout << endl;									 // Membuat jarak perbaris program 
	cout << "=====================" << endl;		 // Membuat tampilan susunan data elemen array
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)						 // Mengguanakan perualangan for untuk menyimpan data pada Agung
	{
		cout << "Data ke- " << (i + 1) << ": ";		 // Memasukan atau menginputkan nilai data n 
		cin >> Agung[i];							 // Menyimpan nilai data n kedalam array Agung
	}
}

void insertionsort() {							// Procedure Insertionsort

	int temp;									// Membuat variable data temporer atau penyimpanan sementara
	int Ag;										// Membuat variable Ag sebagai penanda

	for (int i = 1; i < n; i++) {				// Looping dengan i dimulai dari 1 hingga n-1

		temp = Agung[i];							// simpan nilai Agung[i] ke variable sementara temp

		Ag = n - 1;								// setting nilai Ag sama dengan n-1;

		while (Ag >= 0 && Agung[Ag] > temp)      // Looping while dimana nilai Ag lebih besar sama dengan 0 dan
			// Agung[Ag] lebih besar daripada temp
		{
			Agung[Ag + 1] = Agung[Ag];			 // simpan Agung[Ag] ke dalam variable Agung[Ag+1]
			Ag = Ag - 1;						 // Decrement nilai Ag by 1
		}
		Agung[Ag + 1] = temp;					// simpan nilai temp ke dalam Agung[Ag+1]

		cout << "\nStep " << i << ": ";		// Output ke layar
		for (int k = 0; k < n; k++) {		// Looping nilai k dimulai dari 0 hingga n-1
			cout << Agung[k] << " ";			// Output ke layar
		}
	}
}

void display() {												// Procedure Display
	cout << endl;												// Output baris kosong 
	cout << "\n=================================" << endl;		// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// Output ke layar
	cout << "=================================" << endl;		// Output ke layar

	for (int Ag = 0; Ag < n; Ag++) {								// Looping dengan Ag dimulai dari 0 hingga n-1
		cout << Agung[Ag] << endl;									// Output ke layar
	}
	cout << endl;												// Output baris kosong
}

int main()
{
	input();							// memanggil input 
	insertionsort();					// memanggil insertionsort
	display();							// memanggil display
}