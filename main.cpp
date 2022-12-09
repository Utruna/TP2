#include <iostream>
#include "client.h"



int main() {
    Client client("utruna", "liaud", "colin");
    client.updatePrenom("coline");
    std::cout << client.prenom() << std::endl;
    return 0;
}



