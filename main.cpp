#include <iostream>

using namespace std;

#include "Document.h"
#include "Livre.h"
#include "Article.h"

int main() {
    //test constructeur Document
    string resume1 = "Nemo se fait kidnapper et son pere le retrouve a l'aide d'un poisson bleu amnesique";
    string *ptr_resume1 = &resume1;//pointe vers l'adresse de resume1
    string titre1 = "Nemo";
    Document doc1(titre1, ptr_resume1, "Oualt Disnet");
    //test doc.afficher()
    doc1.afficher();
    cout << "\n" << endl;

    //test constructeur copie
    Document *doc2 = new Document(doc1);
    doc2->afficher();
    cout << "\n" << endl;

    Document doc4(doc1);
    doc4.afficher();
    cout << "\n" << endl;

    //test clonage
    string resume3 = "Un mutant aux cheveux blancs sauve le monde";
    string *ptr_resume3 = &resume3;//pointe vers l'adresse de resume1
    string titre3 = "The Ouicheur";
    Document doc3(titre3, ptr_resume3, "Zksizymski");
    cout << "//Test clonage, affiche adresse du pointeur " << endl;
    Document doc5(*(doc3.clonage()));
    doc5.afficher();
    cout << "\n" << endl;

    //test Livre
    //creation et affichage d'un livre
    Livre livre1(titre3, ptr_resume3, "Zksizymski",
                 "pocheEdition", "56");
    livre1.afficher();
    cout << "\n" << endl;

    Livre livre2(*(livre1.clonage()));
    livre2.afficher();
    cout << "\n" << endl;

    //test Article
    string titre6 = "Un collegien entre a l universite";
    string resume6 = "tout est dans le titre";
    string *ptr_resume6 = &resume6;
    Article article1(titre6, ptr_resume6, "Michel Fustere", "La revue qui revoit",
                     "la cabane de la presse", "1589635987425");
    article1.afficher();
    cout << "\n" << endl;

    Article article2(*(article1.clonage()));
    article2.afficher();
    cout << "\n" << endl;

    //test operateur affectation
    cout<<"//test operateur affectation pour Document\n"<<endl;
    cout<<"//doc1=doc3 (nemo devient le doc the ouicheur)\n"<<endl;
    doc1=doc3;
    doc1.afficher();
    cout << "\n" << endl;

    string resumeLivre3="Bigue Brozeur nous regarde";
    string* ptdr_resumeLivre3=&resumeLivre3;
    string titreLivre3=("1894");
    Livre livre3(titreLivre3,ptdr_resumeLivre3,"Jorj Orouelle","plamarion","1984");

    cout<<"//test operateur affectation pour Livre\n"<<endl;
    cout<<"//livre1=livre3 (the ouicheur copie le livre 1894\n"<<endl;
    livre1=livre3;
    doc1.afficher();
    cout << "\n" << endl;


    return 0;
}
