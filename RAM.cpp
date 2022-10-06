//
// Created by Ivan Yanchenko on 06.10.2022.
//

#include "RAM.h"

RAM::RAM(char *company, int version, int ram_size) : company(company), version(version), ram_size(ram_size){
    if (!isValid(version, ram_size))
        throw invalid_argument("Invalid input data for the Ram!");
}

bool RAM::isValid(int & version, int & ram_size) {
    if(version <= 0 || ram_size <= 1024 || ram_size > 262144)
        return false;
    return true;
}

RAM::RAM(RAM &ram) {
    company = ram.company;
    version = ram.version;
    ram_size = ram.ram_size;
}