// Algirithm_stl1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
void Afficher(list<string> List)
{
    list <string> ::iterator it;
    cout << endl << "_______  Affichage de la liste : ____________ " << endl;
    for (it = List.begin(); it != List.end(); ++it)
        cout << *it << "->";
    cout << "NULL" << endl;
}

int main()
{
    list<string> List;
    List.push_back("ALI");
    List.push_back("Fadwa");
    List.push_back("Amine");
    list<string> List1(List.size()), List2(List.size());
    Afficher(List);

    transform(List.begin(), List.end(), List1.begin(), [](string s)
        {   char c;
    for (int unsigned i = 0; i < s.size(); i++)
    {
        c = s[i];
        if (c == 'e' || c == 'E'||c == 'a'||  c== 'A' || c == 'i'|| c== 'I' || c == 'u'|| c=='U' || c == 'o'|| c=='O' ||c == 'Y'|| c == 'y')
            s[i] = '*';
    }
    return s;
        });
    Afficher(List1);

    transform(List.begin(), List.end(), List2.begin(), [](string s)
        {   char c;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
        });
    Afficher(List2);
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
