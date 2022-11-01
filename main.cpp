#include <iostream>

using namespace std;

#include "Document.h"

int main() {
    string resume1="Nemo se fait kidnapper et son pere le retrouve a l'aide d'un poisson bleu amnesique";
    string *ptr_resume1=&resume1;//pointe vers l'adresse de resume1
    Document doc1("Nemo", ptr_resume1, "Oualt Disnet");
    doc1.afficher();

    return 0;
}
