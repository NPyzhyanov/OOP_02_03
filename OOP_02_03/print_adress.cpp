#include "print_adress.h"

#include <iostream>

#include "adress.h"

void print_adress(Adress adress_to_print)
{
    std::cout << "Country: " << adress_to_print.country << std::endl;
    std::cout << "Town: " << adress_to_print.town << std::endl;
    std::cout << "Street: " << adress_to_print.street << std::endl;
    std::cout << "House number: " << adress_to_print.house_number << std::endl;
    std::cout << "Apartment number: " << adress_to_print.apartment_number << std::endl;
    std::cout << "Postal code: " << adress_to_print.postcode << std::endl;
    std::cout << std::endl;
}
