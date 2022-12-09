#include "reservation.h"

Reservation::Reservation(Date debut, int nbNuits, std::string idHotel, std::string idChambre, std::string idClient, int prix) : _debut(debut), _nbNuits(nbNuits), _idHotel(idHotel), _idChambre(idChambre), _idClient(idClient), _prix(prix){

}
Date Reservation::debut(){
    return _debut;
}
std::string Reservation::idHotel(){
    return _idHotel;
}
std::string Reservation::idChambre(){
    return _idChambre;
}
std::string Reservation::idClient(){
    return _idClient;
}
int Reservation::prixTot(){
    return _prixTot;
}

void Reservation::displayDebut(){
    std::cout << _debut.day() << "-" << _debut.month() << "-" << _debut.year() << std::endl;
}