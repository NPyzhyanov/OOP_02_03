#include <iostream>

#include "adress.h"
#include "print_adress.h"

int main()
{
    Adress arbat_apartment, moyka_apartment;
    
    arbat_apartment = {"Russia", "Moscow", "Arbat", 53, 1, 119002};
    moyka_apartment = {"Russia", "Saint Petersburg", "Moyka River Embankment", 12, 1, 191186};
    
    print_adress(arbat_apartment);
    print_adress(moyka_apartment);
    
    return 0;
}
