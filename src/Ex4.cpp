
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
#include <fstream>

#include <algorithm>

// Variables globales
int a, b;

// 1. funcion intercambio (algorithm swap)
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

// 2. Funcion insercion
void Insert(int n, vector<int> *v)
{

    sort(v->begin(),v->end()); // biblioteca algorith, mergesort o quicksort pos igual

    v->push_back(n);

    for (int i = v->size() -1; i > 0; --i)
        cmpx(&v->at(i-1), &v->at(i));

    

    

}




//3. Leo lista de enteros de la entrada estandar y clasifica en orden ascendente
int main(int argc, char *argv[])
{

    ifstream is(argv[1]);
    //vector<int> g1 = {1, 0,7};
    vector<int> g1;
    int n = 0;
    int m;

    while (is >> m){
        g1.push_back(m);
    }

    // input
    for (int i = 0; i < g1.size() ; ++i)
        cout << g1[i] << " " ;  

    cout << endl;

    cout << "Insert a number: ";
    cin >> n;

    Insert(n,&g1);

    cout << endl;
    // output
    for (int i = 0; i < g1.size() ; ++i)
        cout << g1[i] << " " ; 
    
    cout << endl;
}