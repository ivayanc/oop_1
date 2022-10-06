//
// Created by Ivan Yanchenko on 06.10.2022.
//

#include "CPU.h"

CPU::CPU(char *company, int version, int max_temperature) : company(company), version(version), max_temperature(max_temperature){
    if (!isValid(version, max_temperature))
        throw invalid_argument("Invalid input data for the CPU!");
}

bool CPU::isValid(int & version, int & max_temperature) {
    if(version <= 0 || max_temperature <= 0 || max_temperature > 300)
        return false;
    return true;
}

CPU::CPU(CPU &cpu) {
    company = cpu.company;
    version = cpu.version;
    max_temperature = cpu.max_temperature;
}
