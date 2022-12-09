#include<iostream>

class Hotel {
    public:
        Hotel(std::string identifiantHotel, std::string nom, std::string ville, int nombrechambre);
        std::string identifiantHotel() const;
        std::string nom() const;
        std::string ville() const;
        int nombrechambre() const;
        std::string updatenombrechambre(int nouveaunombredechambre);
        void print();
    private:
        std::string _identifiantHotel;
        std::string _nom;
        std::string _ville;
        int _nombrechambre;
};