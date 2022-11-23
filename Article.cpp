//
// Created by jl on 23/11/22.
//

#include "Article.h"

Article::Article(string &titre, string *resume, string auteur, string titreRevue, string editeur, string numero) :
        Document(titre, resume, auteur), titreRevue(titreRevue), editeur(editeur), numero(numero) {

}

void Article::afficher() {
    Document::afficher();
    cout<<"Titre de la revue : "<<this->titreRevue<<endl;
    cout << "Editeur : " << this->editeur << endl;
    cout << "Numero edition" << this->numero << endl;
}

Article *Article::clonage() {
    Article *ptr = new Article(*this);
    return ptr;
}