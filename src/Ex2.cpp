
/*
    Ecrire un programme qui lit une liste de notes sur l'entrée standard et ache leurs somme et leurs moyenne.
    Sauriez-vous modier le programme précédent an que la liste de notes soit lues dans un fichier ?
*/

// sumas y medias
// lista

using namespace std;
#include <iostream>
#include <string>
#include <fstream>


// ./ex2 < notes.txt
// ./ex2 
// notes.txt --> 0 1 2 3 4 5 6 7 8 9 10 (10 numero)
// 0 + 1+2+3+4+5+6+7+8+9+10 = 55 -> 55/10 = 5.5 

int main (int argc, char *argv[]){
    
  fstream is(argv[1]);

  double m;
  int contador = 0;
  double sum = 0;

  //while (cin >> m)
  while (is >> m)
  {
    sum += m;
    //cout << m  << endl;
    contador++;
  }

  cout << "sum: " << sum << endl ;
  cout << "Contador: " << contador << endl;

  cout << "moyenne: " << sum/contador << endl;

    
}