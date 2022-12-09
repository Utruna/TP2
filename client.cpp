#include "client.h"


Client::Client(std::string id, std::string nom, std::string prenom) : _id(id), _nom(nom), _prenom(prenom){

}
    std::string Client::id(){
        return _id;
    }
    std::string Client::nom(){
        return _nom;
    }
    std::string Client::prenom(){
        return _prenom;
    }
    void Client::updateId(std::string id){
        _id = id;
    }
    void Client::updateNom(std::string nom){
        _nom = nom;
    }
    void Client::updatePrenom(std::string prenom){
        _prenom = prenom;
    }