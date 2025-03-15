#pragma once
#include <iostream>
#include <string>
using namespace std;

class Komponen {
private:
    string nama;
    float harga;
    string merk;
public:
    Komponen() {
    }

    Komponen(string nama, float harga, string merk) {
        this->nama = nama;
        this->harga = harga;
        this->merk = merk;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setHarga(float harga) {
        this->harga = harga;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    string getNama() {
        return nama;
    }

    float getHarga() {
        return harga;
    }

    string getMerk() {
        return merk;
    }

    void getInfo() {
        cout << "Nama: " << nama << ", Harga: " << harga << ", Merk: " << merk << endl;
    }

    ~Komponen() {
    }
};