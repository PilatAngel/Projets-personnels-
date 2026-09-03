// Nim V2
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

int a;// nombre d'allumettes
int ab;// nombre d'allumettes enlever
int x;
int joueur1(0);
int joueur2(0);
int IA(0);
int g(0);

int ereur(int, int)
{
    {
        std::cout << "Error recomencez." << std::endl;
        std::cin.clear();
        std::cin.ignore(255, '\n');
    }
    return 0;
}

int allumettes(int, int)
{
    for (int cpt= 1 ; cpt <= a; cpt++)
    {
        std::cout << cpt << "| ";
    }
    return 0;
}

int joueur_1(int, int)
{
    std::cout << "\n" "Combien ve tu prenrdre d'allumettes joueur 1 ( tu doie prendre 1, 2 ou 3 alumettes ) : ";
    std::cin >> ab;
    a = a - ab;
    while (ab <= 0 || ab > 3)
    {
        ereur(0, 1);
        if (ab > 0 || ab <= 3)
        {
            break;
        }
    }
    allumettes(0, 1);
    joueur1 = 1;
    joueur2 = 0;
    IA = 0;
    return 0;
}

int joueur_2(int, int)
{
    std::cout << "\n" "Combien ve tu prenrdre d'allumettes joueur 2 ( tu doie prendre 1, 2 ou 3 alumettes ) : ";
    std::cin >> ab;
    a = a - ab;
    while (ab <= 0 || ab > 3)
    {
        ereur(0, 1);
        if (ab > 0 || ab <= 3)
        {
            break;
        }
    }
    joueur1 = 0;
    joueur2 = 1;
    IA = 0;
    return 0;
}

int niveau_facil_IA(int, int)
{
    srand((unsigned int)time(0));
    ab = rand() % 3 + 1;
    a = a - ab;
    std::cout << "\n";
    allumettes(0, 1);
    std::cout << "\n";
    joueur1 = 0;
    joueur2 = 0;
    IA = 1;
    return 0;
}

int niveau_dificil_IA(int, int)
{
    x = a % 4;
      allumettes(0, 1);
    if (a == 0)
    {
        a = a - x;
      allumettes(0, 1);
    }
    else if (x == 4)
    {
        a = a - 3;
      allumettes(0, 1);
    }
    else if (a == 5)
    {
        a=a-5;
       allumettes(0, 1);
    }
    else if (a == 4)
    {
        a = a - 3;
      allumettes(0, 1);
    }
    else if (a == 3)
    {
        a = a - 2;
     allumettes(0, 1);
    }
    else if (a == 2)
    {
        a = a - 1;
      allumettes(0, 1);
    }
    else if (a == 1)
    {
        a = a - 1;
      allumettes(0, 1);
    }
    joueur1 = 0;
    joueur2 = 0;
    IA = 1;
    return 0;
}

int niveau_moyen_IA(int, int)
{
    niveau_facil_IA(0, 1);
    niveau_dificil_IA(0, 1);
    joueur1 = 0;
    joueur2 = 0;
    IA = 1;
    return 0;
}

int CA(int, int)
{
    std::cout << "Combien ve tu utiliser d'allumettes : ";
    std::cin >> a;
    return 0;
}

int gagnent(int, int)
{
    if (g == 0)
    {
        if (joueur1 == 1 && joueur2 == 0)
        {
            std::cout << "Bravo, joueur 2 a gagner.""\n";
        }
        else if (joueur2 == 1 && joueur1 == 0)
        {
            std::cout << "Bravo, joueur 1 a gagner.""\n";
        }
    }
    else if (g == 1)
    {
        if (joueur1 == 1 && IA == 0)
        {
            std::cout << "Tu a perdu, l'IA a gagner""\n";
        }
        else if (joueur1 == 0 && IA == 1)
        {
            std::cout << "Tu a gagner, l'IA a perdu""\n";
        }
    }
    return 0;
}


int main()
{
    std::string mode;
    std::string modeIA;
    std::cout << "Le dute est que l'adversair enlève la dernier allumette.""\n";
    std::cout << "Mode_1 : joueur VS joueur " "\n" "Mode_2 : joueur VS IA (Intelligence Artificielle)" "\n";
    std::cout << "Choisi le mode : "; std::cin >> mode;
    if (mode == "Mode_1") // Mode 1
    {
        g = 0;
        CA(0, 1);
        while (a > 0)
        {
            allumettes(0, 1);
            if (a <= 0)
            {
                break;
            }
            joueur_1(1, 0);
            if (a <= 0)
            {
                break;
            }
            joueur_2(1, 0);
        }
        gagnent(0, 1);
    }
    else if (mode == "Mode_2")// mode 2
    {
        std::cout << "Niveaux_facile, niveaux_moyen, niveaux_dificile." "\n";
        std::cout << "Le niveaux dificile est en phase béta.""\n";
        std::cout << "Choisi le niveaux de l'IA : "; std::cin >> modeIA;
        CA(0, 1);
        allumettes(0, 1);
        while (a > 0)
        {
            g = 1;
            if (modeIA == "Niveaux_facile")
            {
                if (a <= 0)
                {
                    break;
                }
                joueur_1(0, 0);
                if (a <= 0)
                {
                    break;
                }
                niveau_facil_IA(0, 1);
            }
            else if (modeIA == "Niveaux_moyen")
            {
                if (a <= 0)
                {
                    break;
                }
                joueur_1(0, 0);
                if (a <= 0)
                {
                    break;
                }
                niveau_moyen_IA(0, 1);
            }
            else if (modeIA == "Niveaux_dificile")
            {
                if (a <= 0)
                {
                    break;
                }
                joueur_1(0, 1);
                if (a <= 0)
                {
                    break;
                }
                niveau_dificil_IA(0, 1);
            }
            else
            {
                ereur(0, 1);
            }
        }
        gagnent(0, 1);
    }
    else
    {
        ereur(0, 1);
    }
    return 0;
}