#pragma once
#include <iostream>
#include <string>
#include "PowerDevice.cpp"
using namespace std;

class PowerSupply : public PowerDevice {
private:
    int daya;
    string sertifikasi;
    bool modular;

public:
    PowerSupply() {
    }

    PowerSupply(int daya, string sertifikasi, bool modular, int wattage, string efficiencyRating, int kecepatanBaca, int kecepatanTulis) 
        : PowerDevice(wattage, efficiencyRating, kecepatanBaca, kecepatanTulis) {
        this->daya = daya;
        this->sertifikasi = sertifikasi;
        this->modular = modular;
    }

    void setDaya(int daya) {
        this->daya = daya;
    }

    void setSertifikasi(string sertifikasi) {
        this->sertifikasi = sertifikasi;
    }

    void setModular(bool modular) {
        this->modular = modular;
    }

    int getDaya() {
        return daya;
    }

    string getSertifikasi() {
        return sertifikasi;
    }

    bool getModular() {
        return modular;
    }

    bool isModular() {
        return modular;
    }
    
    void turnOn() {
        cout << "Power supply turned on." << endl;
    }

    void turnOff() {
        cout << "Power supply turned off." << endl;
    }

    virtual void getInfo() {  
        getPowerInfo();
        cout << "Daya: " << daya << " W, Sertifikasi: " << sertifikasi << ", Modular: " << (modular ? "Ya" : "Tidak") << endl;
    }

    virtual ~PowerSupply() {  
    }
};