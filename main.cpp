#include <iostream>

using namespace std;

#include "Document.h"

int main() {
    //test constructeur Document
    string resume1="Nemo se fait kidnapper et son pere le retrouve a l'aide d'un poisson bleu amnesique";
    string *ptr_resume1=&resume1;//pointe vers l'adresse de resume1
    Document doc1("Nemo", ptr_resume1, "Oualt Disnet");
    //test doc.afficher()
    doc1.afficher();

    //test constructeur copie
    Document doc2(doc1);
    doc2.afficher();

    string resume3="Un mutant aux cheveux blancs sauve le monde";
    string *ptr_resume3=&resume3;//pointe vers l'adresse de resume1
    Document doc3("The Ouicheur",ptr_resume3,"Zksizymki");

    return 0;
}
