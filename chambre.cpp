#include<iostream>
#include"chambre.h"


Chambre::Chambre(std::string numeroChambre, std::string type, float prix) :
_numeroChambre(numeroChambre), _type(type), _prix(prix) {
}

std::string Chambre::numeroChambre() const {
    return _numeroChambre;
}

std::string Chambre::type() const {
    return _type;
}

float Chambre::prix() const {
    return _prix;
}

std::string Chambre::updatePrix(float nouveauPrix) {
    _prix = nouveauPrix;
    std::cout <<"changement effectue, le prix est maintenant de "<< _prix << " euros" << std::endl;
    return "done";
}
std::ostream& operator<<(std::ostream& os, const Chambre& chambre) {
    os << "numero de chambre : " << chambre.numeroChambre() << ", type de chambre : " << chambre.type() << ", prix : " << chambre.prix() << std::endl;
    return os;
}