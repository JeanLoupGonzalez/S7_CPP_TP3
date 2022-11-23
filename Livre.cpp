//
// Created by jl on 23/11/22.
//

#include "Livre.h"

Livre::Livre(string &titre, string *resume, string auteur, string editeur, string annee) :
        Document(titre, resume, auteur),
        editeur(editeur), anneeParu(annee) {
}

void Livre::afficher() {
    Document::afficher();
    cout << "Editeur : " << this->editeur << endl;
    cout << "Annee de parution : " << this->anneeParu << endl;
}

Livre *Livre::clonage() {
    Livre *ptr = new Livre(*this);
    return ptr;
}

Livre &Livre::operator=(const Livre &l2) {
    if(this != &l2){
        //utilisation de l'operateur affectation sur l'objet courant
        //affecte les attributs de document
        *this=l2;
        //traitement des attributs de Livre
        this->editeur=l2.editeur;
        this->anneeParu=l2.anneeParu;
    }
    return *this;
}
