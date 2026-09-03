// calculatrisse V2
#include <iostream>
#include <string>
int n1;// premier nombre de l'opéraion
std::string o;// opérateur
int n2;// deusièmes nombre de l'opération
float r;// résulta du calcule
float r2;// rèste de la division
int v(0);// pour la bloucle "ereur"
int y;// pour déclancher "ereur"
int i(0);// pour la fin de la boucle ligne 95 à 99
std::string m;

int nombre(int, int)
{
    if(m=="Mode_1")
    {
    std::cout << "C'est une calcullatrice""\n";
    std::cout << "Donne le nombre que tu ve diviser,multiplier,aditionner ou soustrere : ";
    std::cin >> n1;
    std::cout << "Donne l'opérateur ( / * + -) : "; std::cin >> o;
    std::cout << "Donne le nombre qui va divisé,multiplié ...  : ";
    std::cin >> n2;
    }
    /*else if(m=="Mode_2")
    {
    std::cout << "
    }*/
   return 0;
}

int ereur(int, int)
{
    while (v == 0)
    {
        std::cout << "Ereur recomence""\n";
        nombre(0, 1);

        if (o == "/")
        {
            r = n1 / n2;
            r2 = n1 % n2;
            std::cout << n1 << "/" << n2 << "\n" << "Q=" << r << "   R=" << r2 << "\n";
            v = 1;
        }
        else if (o == "*")
        {
            r = n1 * n2;
            std::cout << n1 << "*" << n2 << "=" << r;
            v = 1;
        }
        else if (o == "+")
        {
            r = n1 + n2;
            std::cout << n1 << "+" << n2 << "=" << r;
            v = 1;
        }
        else if (o == "-")
        {
            r = n1 - n2;
            std::cout << n1 << "-" << n2 << "=" << r;
            v = 1;
        }
        else
        {
            v = 0;
        }
        break; (v == 1);
    }
    return i = 1;
}

int main()
{
   std::cout << "Choisi le mode que tu veut (Mode_1 ou (Mode_2 BETA) ) : "; std::cin >> m;
   if(m=="Mode_2")
   {
       
   }
   else if(m=="Mode_1")
   {
    nombre(0, 1);
    if (o == "/")
    {
        r = n1 / n2;
        r2 = n1 % n2;
        std::cout << n1 << "/" << n2 << "\n" << "Q=" << r << "   R=" << r2 << "\n";
        y = 0;
    }
    else if (o == "*")
    {
        r = n1 * n2;
        std::cout << n1 << "*" << n2 << "=" << r;
        y = 0;
    }
    else if (o == "+")
    {
        r = n1 + n2;
        std::cout << n1 << "+" << n2 << "=" << r;
        y = 0;
    }
    else if (o == "-")
    {
        r = n1 - n2;
        std::cout << n1 << "-" << n2 << "=" << r;
        y = 0;
    }
    else
    {
        y = 1;
        while (y == 1)
        {
            ereur(1, 0);
            break; (i == 1);
        }
    }
   }
    return 0;
}