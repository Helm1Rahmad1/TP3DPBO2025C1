#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class RAM : public Komponen {
private:
    int kapasitas;
    int kecepatan;
    string jenis;

public:
    RAM() {
    }

    RAM(int kapasitas, int kecepatan, string jenis, string nama, float harga, string merk) 
        : Komponen(nama, harga, merk) {
        this->kapasitas = kapasitas;
        this->kecepatan = kecepatan;
        this->jenis = jenis;
    }

    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    void setKecepatan(int kecepatan) {
        this->kecepatan = kecepatan;
    }

    void setJenis(string jenis) {
        this->jenis = jenis;
    }

    int getKapasitas() {
        return kapasitas;
    }

    int getKecepatan() {
        return kecepatan;
    }

    string getJenis() {
        return jenis;
    }

    void upgrade() {
        kapasitas *= 2;
        cout << "RAM upgraded to " << kapasitas << " GB" << endl;
    }

    void getInfo() {
        Komponen::getInfo();
        cout << "Kapasitas: " << kapasitas << " GB, Kecepatan: " << kecepatan << " MHz, Jenis: " << jenis << endl;
    }

    ~RAM() {
    }
};