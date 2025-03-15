#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Harddrive : public Komponen {
private:
    int kapasitas;
    string tipe;
    int kecepatanBaca;
    int kecepatanTulis;

public:
Harddrive() {
    }

    Harddrive(int kapasitas, string tipe, int kecepatanBaca, int kecepatanTulis, string nama, float harga, string merk) 
        : Komponen(nama, harga, merk) {
        this->kapasitas = kapasitas;
        this->tipe = tipe;
        this->kecepatanBaca = kecepatanBaca;
        this->kecepatanTulis = kecepatanTulis;
    }

    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    void setTipe(string tipe) {
        this->tipe = tipe;
    }

    void setKecepatanBaca(int kecepatanBaca) {
        this->kecepatanBaca = kecepatanBaca;
    }

    void setKecepatanTulis(int kecepatanTulis) {
        this->kecepatanTulis = kecepatanTulis;
    }

    int getKapasitas() {
        return kapasitas;
    }

    string getTipe() {
        return tipe;
    }

    int getKecepatanBaca() {
        return kecepatanBaca;
    }

    int getKecepatanTulis() {
        return kecepatanTulis;
    }

    void formatDrive() {
        cout << "Formatting drive " << getNama() << "..." << endl;
        cout << "Drive formatted successfully!" << endl;
    }

    void getInfo() {
        Komponen::getInfo();
        cout << "Kapasitas: " << kapasitas << " GB, Tipe: " << tipe << ", Kecepatan Baca: " << kecepatanBaca << " MB/s, Kecepatan Tulis: " << kecepatanTulis << " MB/s" << endl;
    }

    ~Harddrive() {
    }
};