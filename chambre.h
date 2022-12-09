#include<iostream>

class Chambre {
    public:
        Chambre(std::string numeroChambre, int nombreLits, int prix);
        std::string numeroChambre() const;
        int nombreLits() const;
        int prix() const;
        std::string updatePrix(int nouveauPrix);
    private:
        std::string _numeroChambre;
        int _nombreLits;
        int _prix;
};