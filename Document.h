//
// Created by jl on 31/10/22.
//
#include <iostream>

using namespace std;

#ifndef S7_CPP_TP3_DOCUMENT_H
#define S7_CPP_TP3_DOCUMENT_H


class Document {
    string &titre;
    string *resume;
    string auteur;
public:
    void afficher();

    Document(string titre, string *resume, string auteur);

    Document(Document &copie);

    ~Document();
};


#endif //S7_CPP_TP3_DOCUMENT_H
