
/*
    
Exercice 3 (bookmaker)
Un bookmaker enregistre dans un chier chacune de ses transactions sous forme d'une ligne conte-
nant le nom d'un client et une somme positive si le client lui doit de l'argent et négative sinon.
    
    Dénir un nouveau type struct Bookrecord permettant de stocker une transaction ie un
nom de client et une somme d'argent.
    Ecrire un programme qui lit un chier de transactions et les enregistre dans un vecteur où
chaque élément du vecteur contient une transaction.
    Acher le contenu de ce vecteur sur la sortie standard.
    Entrer dans une boucle où l'on lit sur l'entrée standard un nom de client et l'on ache la
somme algébrique correspondant aux montants concernant ce client. La boucle se termine sur
le caractère n de chier.
    Dénir les opérateurs d'entrées/sorties pour un struct Bookrecord.
    Modier le programme précédent an d'utiliser ces nouveaux opérateurs.
*/

using namespace std;
#include <iostream>
#include <vector>
#include <fstream>

struct Book
{
    string name;
    int m;
};


int main (){
    
    ifstream is("bin/booknames.txt");
    vector<Book> v;
    string name;
    int m;

    // EXAMPLE INPUT
    while (is >> name >> m){
        Book b;
        b.name = name;
        b.m = m;
        v.push_back(b);
    }

    //for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
    //    cout << *ir << " ";

    // EXAMPLE OUTPUT
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].name << " " << v[i].m << endl;
}