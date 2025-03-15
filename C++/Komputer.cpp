#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "CPU.cpp"
#include "RAM.cpp"
#include "HardDrive.cpp"
#include "PowerSupply.cpp"
#include "GPU.cpp"
using namespace std;

class Komputer {
private:
    vector<CPU> cpus;
    vector<RAM> rams;
    vector<Harddrive> harddrives;
    vector<GPU> gpus;
    PowerSupply* psu;
    string os;

public:
    Komputer(string os = "") : os(os), psu(nullptr) {}

    void setPSU(PowerSupply* p) { 
        psu = p; 
    }

    PowerSupply* getPSU() { 
        return psu; 
    }

    void addCPU(CPU c) { 
        cpus.push_back(c); 
    }

    void addRAM(RAM r) { 
        rams.push_back(r); 
    }
    
    void addHardDrive(Harddrive h) { 
        harddrives.push_back(h); 
    }

    void addGPU(GPU g) { 
        gpus.push_back(g); 
    }

    void bootUp() {
        cout << "\n[ Booting " << os << " ]\n";
        if (!psu) { cout << "No PSU installed!" << endl; return; }
        psu->turnOn();
        cout << "System Ready!" << endl;
    }

    void shutDown() {
        cout << "\n[ Shutting Down " << os << " ]\n";
        if (psu) psu->turnOff();
        cout << "System Off!" << endl;
    }

    void getSystemInfo() {
        cout << "\n==== CONFIGURATION ====\n";
        cout << "OS: " << os << "\n";
        for (int i = 0; i < cpus.size(); i++) { 
            cout << "CPU: "; 
            cpus[i].getInfo(); 
        }
        for (int i = 0; i < gpus.size(); i++) { 
            cout << "GPU: "; 
            gpus[i].getInfo(); 
        }
        for (int i = 0; i < rams.size(); i++) { 
            cout << "RAM: "; 
            rams[i].getInfo(); 
        }
        for (int i = 0; i < harddrives.size(); i++) { 
            cout << "HDD: "; 
            harddrives[i].getInfo(); 
        }
        cout << "PSU: " << (psu ? "Installed" : "Not Installed") << "\n";
        cout << "=======================\n";
    }
};
