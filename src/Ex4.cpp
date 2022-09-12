
/*
    Exercice 4 (cmpx)

    1.  Ecrire une fonction cmpx qui prend en arguments deux entiers et les échange s'ils ne sont pas
    dans l'ordre croissant.

    2.  Utiliser cette fonction pour écrire une fonction insert qui prend en arguments un entier n
    et un vecteur d'entiers triés vec et insère n dans vec au bon endroit.

    3   Utiliser cette fonction pour écrire un programme qui lit une liste d'entiers sur l'entrée standard
    et la trie dans l'ordre croissant.

    4.  Sauriez-vous modier le programme précédent an qu'il fonctionne non seulement pour les
    entiers mais pour tous les types où une relation d'ordre est dénie ?
*/

using namespace std;
#include <iostream>
#include <vector>

// Variables globales
int a, b;

// funcion intercambio (algorithm swap)
// REPASO TEMPLATE
void cmpx(int *a, int *b)
{

    if (*a> *b){
        int aux = *a;
        *a = *b;
        *b = aux;
    }
  

    // cout << a << " " << b << endl;
}

// Funcion insercion
void Insert(int n, vector<int> *v)
{

    v->push_back(n);

    for (int i = v->size() -1; i > 0; --i)
        cmpx(&v->at(i-1), &v->at(i));

    

}





int main(int argc, char *argv[])
{

    vector<int> g1 = {1, 0,7};
    int n = 3;

    // input
    for (int i = 0; i < g1.size() ; ++i)
        cout << g1[i] << " " ;  

    cout << endl;

    Insert(n,&g1);

    // output
    for (int i = 0; i < g1.size() ; ++i)
        cout << g1[i] << " " ; 
    
    
}