#include<iostream>


class Chambre {
    public:
        Chambre(std::string numeroChambre, std::string type, float prix);
        std::string numeroChambre() const;
        std::string type() const;
        float prix() const;
        std::string updatePrix(float nouveauPrix);
        

    private:
        std::string _numeroChambre;
        std::string _type;
        float _prix;
        

};
std::ostream& operator<<(std::ostream& os, const Chambre& chambre);