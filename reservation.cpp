#include "reservation.h"

Reservation::Reservation(Date debut, int nbNuits, std::string idHotel, std::string idChambre, std::string idClient, int prixTot) : _debut(debut), _nbNuits(nbNuits), _idHotel(idHotel), _idChambre(idChambre), _idClient(idClient), _prixTot(prixTot){

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