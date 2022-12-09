#include <iostream>
#include "hotel.h"
#include "client.h"
#include "chambre.h"

int main() {
        Client client("utruna", "liaud", "flo");
    client.updatePrenom("colin");
    std::cout << client.prenom() << std::endl;

    Hotel H1("R2D2", "STAR WARS", "Listenburg", 100);
    std::cout << H1.identifiantHotel() << ", " << H1.nom() << " , " << H1.ville() << " , nombre de place : " << H1.nombrechambre()<< std::endl;
    H1.updatenombrechambre(200);
    
    Chambre C1("R2D2", 2, 100);
    std::cout << C1.numeroChambre() << ", " << C1.nombreLits() << " , " << C1.prix() << std::endl;
    C1.updatePrix(200);
    return 0;
}



