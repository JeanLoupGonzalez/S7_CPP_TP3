//
// Created by jl on 31/10/22.
//

#include "Document.h"

void Document::afficher() {
    cout << "Titre du document : " << this->titre << endl;
    cout << "Auteur : " << this->auteur << endl;
    cout << "Resume : " << *this->resume << endl;
}

Document::Document(string titre, string *resume, string auteur) : titre(titre), resume(resume), auteur(auteur) {
}

Document::Document(Document &copie) {

}

Document::~Document() {

}

