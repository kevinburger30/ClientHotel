// ClientHotel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Client {
public:
    string nom;
    string prenom;
    string courriel;
    string carteCredit;
    int numChambre;
    Client(string construcNom, string construcPrenom, string construcCourriel, string construcCarteCredit, int construcNumChambre) {
        nom = construcNom;
        prenom = construcPrenom;
        courriel = construcCourriel;
        carteCredit = construcCarteCredit;
        numChambre = construcNumChambre;
    }
};

class Hotel {
public:
    Client liste[1];
};

int main()
{
    string nomInput, prenomInput, courrielInput, carteCreditInput;
    int numChambreInput;
    std::cout << "Nom: ";
    std::cin >> nomInput;
    std::cout << "Prenom: ";
    std::cin >> prenomInput;
    std::cout << "Courriel: ";
    std::cin >> courrielInput;
    std::cout << "Carte de Credit: ";
    std::cin >> carteCreditInput;
    std::cout << "Chambre: ";
    std::cin >> numChambreInput;

    Client un(nomInput, prenomInput, courrielInput, carteCreditInput, numChambreInput);
    Hotel listeDeClient[1] = { un };
}