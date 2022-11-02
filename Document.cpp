//
// Created by jl on 31/10/22.
//

#include "Document.h"

//constructeurs
Document::Document(string titre, string *resume, string auteur) : titre(titre),
                                                                  resume(resume),
                                                                  auteur(auteur) {
}



Document::Document(const Document &copie) : titre(copie.titre) {
    this->resume = copie.resume;
    this->auteur = copie.auteur;
}

//destructeur
Document::~Document() {

}

//methodes
void Document::afficher() {
    cout << "Titre du document : " << this->titre << endl;
    cout << "Auteur : " << this->auteur << endl;
    cout << "Resume : " << *this->resume << "\n"<< endl;
}

Document Document::clonage() {
    //on cree un document copie du doc courant
    Document clone(*this);
    //puis on le retourne
    return clone;
}


