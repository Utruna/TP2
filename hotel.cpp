#include<iostream>
#include"hotel.h"
#include<vector>

Hotel::Hotel(std::string identifiantHotel, std::string nom, std::string ville, int nombrechambre) :
_identifiantHotel(identifiantHotel), _nom(nom), _ville(ville), _nombrechambre(nombrechambre) {
}

std::string Hotel::identifiantHotel() const {
    return _identifiantHotel;
}

std::string Hotel::nom() const {
    return _nom;
}

std::string Hotel::ville() const {
    return _ville;
}

int Hotel::nombrechambre() const {
    return _nombrechambre;
}

std::string Hotel::updatenombrechambre(int nouveaunombredechambre) {
    _nombrechambre = nouveaunombredechambre;
    std::cout <<"changement effectue, il y a maintenant "<< _nombrechambre << " disponible" << std::endl;
    return "done";
}
void Hotel::addlisteChambre(Chambre chambre) {
    _listeChambre.push_back(chambre);
}
std::vector<Chambre> Hotel::listeChambre() {
    return _listeChambre;
}

std::ostream& operator<<(std::ostream& os, Hotel& hotel) {
    for (int i = 0; i < hotel.listeChambre().size() ; i++) {
       os << hotel.listeChambre()[i];
    }
    return os;
}