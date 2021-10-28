#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string namaSiswa;
    double keaktifan, tugas, ujian;
    int nilaiAkhir;
    
    cout << "Nama siswa      : "; cin >> namaSiswa;
	cout << "Nilai keaktifan : "; cin >> keaktifan;
	cout << "Nilai tugas     : "; cin >> tugas;
	cout << "Nilai ujian     : "; cin >> ujian;
	cout << "\n-----------------\n"<< endl;
	    
    nilaiAkhir= (keaktifan*0.2)+(tugas*0.3)+(ujian*0.5);
    cout << "Nama siswa      : " << namaSiswa << endl;
    
    if(nilaiAkhir>=80) cout << "Grade           : A";
    else if(nilaiAkhir>=70) cout << "Grade           : B";
    else if(nilaiAkhir>=59) cout << "Grade           : C";
    else if(nilaiAkhir>=50) cout << "Grade           : D";
	else if(nilaiAkhir<50) cout << "Grade           : E";
    
	return 0;
}
