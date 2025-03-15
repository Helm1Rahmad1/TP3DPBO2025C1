#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class CPU : public Komponen {
private:
    int coreCount;
    float clockSpeed;
    string architecture;

public:
    CPU() {
    }

    CPU(int coreCount, float clockSpeed, string architecture, string nama, float harga, string merk) 
        : Komponen(nama, harga, merk) {
        this->coreCount = coreCount;
        this->clockSpeed = clockSpeed;
        this->architecture = architecture;
    }

    void setCoreCount(int coreCount) {
        this->coreCount = coreCount;
    }

    void setClockSpeed(float clockSpeed) {
        this->clockSpeed = clockSpeed;
    }

    void setArchitecture(string architecture) {
        this->architecture = architecture;
    }

    int getCoreCount() {
        return coreCount;
    }

    float getClockSpeed() {
        return clockSpeed;
    }

    string getArchitecture() {
        return architecture;
    }

    void boostClock() {
        clockSpeed += 0.2;
        cout << "CPU overclocked to " << clockSpeed << " GHz" << endl;
    }

    void getInfo() {
        Komponen::getInfo();
        cout << "Core Count: " << coreCount << ", Clock Speed: " << clockSpeed << " GHz, Architecture: " << architecture << endl;
    }

    ~CPU() {
    }
};