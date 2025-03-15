#pragma once
#include <iostream>
#include <string>
#include "PowerSupply.cpp"
using namespace std;

class PowerSupplyGaming : public PowerSupply {
private:
    bool RGBLighting;
    bool overclockSupport;

public:
    PowerSupplyGaming() {
    }

    PowerSupplyGaming(bool RGBLighting, bool overclockSupport, int daya, string sertifikasi, bool modular, int wattage, string efficiencyRating, int kecepatanBaca, int kecepatanTulis) 
        : PowerSupply(daya, sertifikasi, modular, wattage, efficiencyRating, kecepatanBaca, kecepatanTulis) {
        this->RGBLighting = RGBLighting;
        this->overclockSupport = overclockSupport;
    }

    void setRGBLighting(bool RGBLighting) {
        this->RGBLighting = RGBLighting;
    }

    void setOverclockSupport(bool overclockSupport) {
        this->overclockSupport = overclockSupport;
    }

    bool getRGBLighting() {
        return RGBLighting;
    }

    bool getOverclockSupport() {
        return overclockSupport;
    }

    bool isRGBLighting() {
        return RGBLighting;
    }

    bool isOverclockSupport() {
        return overclockSupport;
    }

    void enableOverclocking() {
        if (overclockSupport) {
            cout << "Overclocking enabled on power supply." << endl;
        } else {
            cout << "This power supply does not support overclocking." << endl;
        }
    }

    void getInfo() {
        PowerSupply::getInfo(); cout << "RGB Lighting: " << (RGBLighting ? "Ya" : "Tidak") << ", Overclock Support: " << (overclockSupport ? "Ya" : "Tidak") << endl;
    }

    ~PowerSupplyGaming() {
    }
};