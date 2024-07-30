#include <iostream>  // Memperbaiki typo pada header file
using namespace std;

int main()
{
    float persenPajak = 0.15, persenTunjangan = 0.2;

    string nama;
    float gajiPokok, gajiBersih, tunjangan, pajak;

    cout << "\n\t Menghitung Gaji Karyawan \n\n";

    cout << "Nama Karyawan : ";
    cin >> nama;

    cout << "Gaji Pokoknya : Rp.";
    cin >> gajiPokok;

    tunjangan = persenTunjangan * gajiPokok;
    cout << "\n Tunjangannya sebesar : Rp." << tunjangan;

    pajak = persenPajak * (gajiPokok + tunjangan);
    cout << "\n Pajaknya sebesar    : Rp." << pajak;

    gajiBersih = gajiPokok + tunjangan - pajak;
    cout << "\n\n Gaji bersih karyawan  : Rp." << gajiBersih;

    cout << endl;  // Mengganti 'edl' dengan 'endl'

    return 0;  // Menambahkan return 0 untuk menyatakan bahwa program selesai dengan baik
}

