
/*
    Un palindrome est une chaîne de caractères qui se lit de la même manière de gauche à droite et de
    droite à gauche : otto, madam... Ecrire un programme qui lit une chaîne de caractères sur l'entrée
    standard, vérite s'il s'agit d'un palindrome et ache le résultat.
*/

using namespace std;
#include <iostream>
#include <string>
#include <algorithm> // puedes usar funcion reverse
#include <list>

// vector darle la vuelta y eso
// meto una cadena, si al reves es u palindromo si es igual digo si si no no
// std:: reverse



/*
    E clase dice haciendolo a la cuenta vieja 
    o[0] 1 ... size 
*/

/*
bool is_palindrome (string a)
{
        
        string a_reverse (a.rbegin(), a.rend()); // reverse a String
    
        if (a == a_reverse)
            return true;
        else 
            return false;
}
*/

// lista.reverse 1 

bool is_palindrome (string a)
{
    for ( int i = 0; i < a.size(); ++i)
        if (a[i] != a [a.size() - 1 - i] )
            return false;
    
    return true;
}

int main (){
    
    list<char> b;
    

    string a;
    cin >> a;
    

    if (is_palindrome(a))
    
        cout << "Palindrome" << endl;
    else 
        cout << "Not Palindrome" << endl;
    
    
}