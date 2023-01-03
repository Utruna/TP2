#include <iostream>
#include "hotel.h"
#include "client.h"
#include "reservation.h"

int main() {
    /* PARTIE 1 TEST
    Client client("utruna", "liaud", "flo");
    client.updatePrenom("colin");
    std::cout << client.prenom() << std::endl;
    
    Hotel H1("R2D2", "STAR WARS", "Listenburg", 100);
    std::cout << H1.identifiantHotel() << ", " << H1.nom() << " , " << H1.ville() << " , nombre de place : " << H1.nombrechambre()<< std::endl;
    H1.updatenombrechambre(200);
    H1.nombrechambre();
    
    Chambre C1("R2D2", 2, 100);
    std::cout << C1.numeroChambre() << ", " << C1.nombreLits() << " , " << C1.prix() << std::endl;
    C1.updatePrix(200.0);
    
    Date date1(9, 12, 2022);
    Reservation R1(date1, 50, "R2D2", "3AB", "utruna", 200);
    R1.displayDebut();
    R1.displayFin();
    std::cout << R1.prixTot();
    R1.updateNbNuits(100);
    R1.displayFin();
    R1.updateDebut(Date(10, 12, 2022));
    R1.displayDebut();
    R1.displayFin();
    R1.updatePrix(300);
    std::cout << R1.prixTot();
    */

    // PARTIE 2 TEST
    Hotel H1("H1_JKLD_HJFOD", "Le Grand Hotel", "Paris", 10); //création de l'hotel demander
    Chambre S1("ID1", "simple", 100); //création de la chambre simple
    Chambre S2("ID2", "simple", 100);
    Chambre S3("ID3", "simple", 100);

    Chambre D1("ID4", "double", 125); //création de la chambre double
    Chambre D2("ID5", "double", 125);
    Chambre D3("ID6", "double", 125);
    Chambre D4("ID7", "double", 125);
    Chambre D5("ID8", "double", 125);

    Chambre Su1("ID9", "suite", 210);  //création de la chambre suite
    Chambre Su2("ID10", "suite", 210);

    H1.addlisteChambre(S1);    //ajout des chambres dans l'hotel
    H1.addlisteChambre(S2);
    H1.addlisteChambre(S3);
    H1.addlisteChambre(D1);
    H1.addlisteChambre(D2);
    H1.addlisteChambre(D3);
    H1.addlisteChambre(D4);
    H1.addlisteChambre(D5);
    H1.addlisteChambre(Su1);
    H1.addlisteChambre(Su2);

    std::cout << S1; //affichage de la chambre simple 1
    std::cout << D1; //affichage de la chambre double 1
    std::cout << Su1; //affichage de la chambre suite 1
    std::cout << std::endl;
    std::cout << H1; //affichage de l'hotel


    return 0;
}



