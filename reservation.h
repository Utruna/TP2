#include <iostream>
#include "date.h"

class Reservation{
    public:
        Reservation(Date debut, int nbNuits, std::string idHotel, std::string idChambre, std::string idClient, int prixTot);
        Date debut();
        std::string idHotel();
        std::string idChambre();
        std::string idClient();
        int prixTot();

    private:
        Date _debut;
        int _nbNuits;
        std::string _idHotel;
        std::string _idChambre;
        std::string _idClient;
        int _prixTot;
};