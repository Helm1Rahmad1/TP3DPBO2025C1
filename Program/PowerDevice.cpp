#pragma once
#include <iostream>
#include <string>
using namespace std;

class PowerDevice {
private:
    int wattage;
    string efficiencyRating;
    int kecepatanBaca;
    int kecepatanTulis;

public:
    PowerDevice() {
    }

    PowerDevice(int wattage, string efficiencyRating, int kecepatanBaca, int kecepatanTulis) {
        this->wattage = wattage;
        this->efficiencyRating = efficiencyRating;
        this->kecepatanBaca = kecepatanBaca;
        this->kecepatanTulis = kecepatanTulis;
    }

    void setWattage(int wattage) {
        this->wattage = wattage;
    }

    void setEfficiencyRating(string efficiencyRating) {
        this->efficiencyRating = efficiencyRating;
    }

    void setKecepatanBaca(int kecepatanBaca) {
        this->kecepatanBaca = kecepatanBaca;
    }

    void setKecepatanTulis(int kecepatanTulis) {
        this->kecepatanTulis = kecepatanTulis;
    }

    int getWattage() {
        return wattage;
    }

    string getEfficiencyRating() {
        return efficiencyRating;
    }

    int getKecepatanBaca() {
        return kecepatanBaca;
    }

    int getKecepatanTulis() {
        return kecepatanTulis;
    }

    void getPowerInfo() {
        cout << "Wattage: " << wattage << " W, Efficiency Rating: " << efficiencyRating << ", Kecepatan Baca: " << kecepatanBaca << " MB/s, Kecepatan Tulis: " << kecepatanTulis << " MB/s" << endl;
    }

    ~PowerDevice() {
    }
};