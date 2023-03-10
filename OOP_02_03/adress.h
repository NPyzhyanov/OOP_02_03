#ifndef ADRESS_H
#define ADRESS_H

#include <string>

struct Adress
{
    std::string country;
    std::string town;
    std::string street;
    int house_number;
    int apartment_number;
    int postcode;
};

#endif // ADRESS_H
