#include <iostream>
#include "hotel.h"


int main() {
    Hotel H1("R2D2", "STAR WARS", "Listenburg", 100);
    std::cout << H1.identifiantHotel() << ", " << H1.nom() << " , " << H1.ville() << " , nombre de place : " << H1.nombrechambre()<< std::endl;
    
    H1.updatenombrechambre(200);
    
    return 0;
}



