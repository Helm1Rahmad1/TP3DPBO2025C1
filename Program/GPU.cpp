#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class GPU : public Komponen {
private:
    int memorySize;
    string memoryType;

public:
    GPU() {
    }

    GPU(int memorySize, string memoryType, string nama, float harga, string merk) 
        : Komponen(nama, harga, merk) {
        this->memorySize = memorySize;
        this->memoryType = memoryType;
    }

    void setMemorySize(int memorySize) {
        this->memorySize = memorySize;
    }

    void setMemoryType(string memoryType) {
        this->memoryType = memoryType;
    }

    int getMemorySize() {
        return memorySize;
    }

    string getMemoryType() {
        return memoryType;
    }

    void getInfo() {
        Komponen::getInfo();
        cout << "Memory Size: " << memorySize << " GB, Memory Type: " << memoryType << endl;
    }

    ~GPU() {
    }
};
