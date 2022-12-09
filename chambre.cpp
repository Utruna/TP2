#include<iostream>
#include"chambre.h"


Chambre::Chambre(std::string numeroChambre, int nombreLits, int prix) :
_numeroChambre(numeroChambre), _nombreLits(nombreLits), _prix(prix) {
}

std::string Chambre::numeroChambre() const {
    return _numeroChambre;
}

int Chambre::nombreLits() const {
    return _nombreLits;
}

int Chambre::prix() const {
    return _prix;
}

std::string Chambre::updatePrix(int nouveauPrix) {
    _prix = nouveauPrix;
    std::cout <<"changement effectue, le prix est maintenant de "<< _prix << " euros" << std::endl;
    return "done";
}