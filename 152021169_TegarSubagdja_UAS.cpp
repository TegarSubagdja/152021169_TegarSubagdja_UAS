#include <iostream>
#include <cmath>

using namespace std;

float pembilang(int n, float x[20], float y[20]) {
    float a, b, c;
    float hasil;

    for (int i = 0; i < n; i++) {
        a += x[i] * y[i];
        b += x[i];
        c += y[i];
    }
    hasil = (n * a) - (b * c);
    return hasil;
}

float penyebut(int n, float x[20], float y[20]) {
    float d, e, he, f, g, hf, hg;
    float hasil;

    for (int i = 0; i < n; i++) {
        d += x[i] * x[i];
        e += x[i];
        f += y[i] * y[i];
        g += y[i];
    }
    he = e * e;
    hf = f * f;
    hg = g * g;

    hasil = sqrt((n*d)-he) * sqrt((n*f)-hg);
    return hasil;
}

int main() {

    system("cls");

    float x[100];
    float y[100];
    int n;
    float hasilPembilang, hasilPenyebut, rdeterminasi;
    float r;

    //Menentukan Jumlah Data
    cout << "================================" << endl;
    cout << "MASUKAN BANYAK DATA : ";
    cin >> n;
    cout << "================================" << endl;

    for (int i = 0; i < n; i++) {

        cout << "X[" << i << "] : ";
        cin >> x[i];

        cout << "Y[" << i << "] : ";
        cin >> y[i];

        cout << "--------------------------------" << endl;

    }

    //Porses perhitungan
    hasilPembilang = pembilang(n,x,y);
    hasilPenyebut = penyebut(n,x,y);
    r = hasilPembilang / hasilPenyebut;
    rdeterminasi = (r*r) / 100;

    cout << "Pembilang : " << hasilPembilang << endl;
    cout << "Penyebut : " << hasilPenyebut << endl;
    cout << "--------------------------------" << endl;

    cout << "Maka korelasi r yang didapat adalah : " << r << endl;
    cout << "Nilai koefisien determinasi adalah : " << rdeterminasi << endl;

    if ((r >= 0) && (r <= 0.09)) {
        cout << "Kekuatan hubungan dan nilai korelasi (r) adalah : Hugungan korelasinya diabaikan" << endl;
    } else if ((r >= 0.10) && (r <= 0.29)) {
        cout << "Kekuatan hubungan dan nilai korelasi (r) adalah : Hugungan korelasi rendah" << endl;
    } else if ((r >= 0.30) && (r <= 0.49)) {
        cout << "Kekuatan hubungan dan nilai korelasi (r) adalah : Hugungan korelasi moderat" << endl;
    } else if ((r >= 0.50) && (r <= 0.70)) {
        cout << "Kekuatan hubungan dan nilai korelasi (r) adalah : Hugungan korelasi sedang" << endl;
    } else if ((r >= 0.50) && (r <= 0.70)) {
        cout << "Kekuatan hubungan dan nilai korelasi (r) adalah : Hugungan korelasi kuat" << endl;
    };


}