#include <iostream>
#include "date.h"

class Reservation{
    public:
        Reservation(Date debut, int nbNuits, std::string idHotel, std::string idChambre, std::string idClient, int prix);
        Date debut();
        Date fin();
        std::string idHotel();
        std::string idChambre();
        std::string idClient();
        int prixTot();
        void displayDebut();
        void displayFin();
        void updateNbNuits(int nbNuits);
        void updateDebut(Date debut);
        void updatePrix(int prix);

    private:
        int _nbNuits;
        Date _debut;
        Date _fin;
        std::string _idHotel;
        std::string _idChambre;
        std::string _idClient;
        int _prix;
        int _prixTot = _nbNuits * _prix;
};