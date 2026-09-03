// Nim
#include <iostream>
#include <string>
#include <cstdlib>
int main()
{
    int ab; // nombre alumettes prises
    int a; // nombre alumettes
    int mode; // choi des mode
    int x(1);
    int joueur1(0);
    int joueur2(0);
    int modeIA(0);
    int valeur(0);
    int IA(0);
    std::cout << "Mode 1 : joueur VS joueur " "\n" "Mode 2 : joueur VS IA (Intelligence Artificielle)" "\n" ;
    std::cout << "Tape 1(Mode 1) ou 2(Mode 2) " ;
    std::cin >> mode ;
    if (mode==1) // Mode 1
    {
    std::cout << "Combien ve tu utiliser d'alumettes : ";
      std::cin >> a;
    while(a>0)
     {
    std::cout << "Il y a " << a << " alumettes "  "\n";
    std::cout << "Combien ve tu prenrdre d'alumettes joueur 1 ( tu doie prendre 1, 2 ou 3 alumettes ) : " ;
    std::cin >> ab;
    a=a-ab ;
    joueur1=1;
    joueur2=0;
     if (a<=0)
    {
    break ;
    }
    std::cout << "Il y a " << a << " alumettes " "\n";
    std::cout << "Combien ve tu prenrdre d'alumettes joueur 2 ( tu doie prendre 1, 2 ou 3 alumettes ) : " ;
    std::cin >> ab;
    a=a-ab ;
    joueur2=1;
    joueur1=0;
     }
    if (joueur1==1 || joueur2==0)
    {
        std::cout << "Bravo, joueur 2 a gagner.""\n" ;
    }
    else if (joueur2==1 || joueur1==0)
    {
       std::cout << "Bravo, joueur 1 a gagner.""\n" ; 
    }
    }
else // Mode 2
{
std::cout << "Niveaux IA facile(1), niveaux IA moyen(2), niveaux IA dificile(3)." "\n";
std::cout << "tape 1,2 ou 3 pour le niveaux de l'IA : ";
std::cin >> modeIA;
std::cout << "Combien ve tu utiliser d'alumettes : ";
      std::cin >> a; 
while(a>=0)
 {
    if (a==0)
    {
        break ;
    }
 if(modeIA==1)
 {
     std::cout << "Il y a " << a << " alumettes "  "\n";
    std::cout << "Combien ve tu prenrdre d'alumettes ( tu doie prendre 1, 2 ou 3 alumettes ) : " ;
    std::cin >> ab;
    a=a-ab ;
    joueur1=1;
    IA=0;
    std::cout << "Il y a " << a << " alumettes "  "\n";
   srand((unsigned int)time(0));
   for (int i = 0;i<1;i++)
   {
       ab= rand()%3 +1;
       std::cout << "L'IA a enlever " << ab << " alumettes" << std::endl;
   }
   a=a-ab ;
   joueur1=0;
    IA=1;
 }
 if(modeIA==2)
 {
    valeur=1;
    std::cout << "Combien ve tu prenrdre d'alumettes ( tu doie prendre 1, 2 ou 3 alumettes ) : " ;
    std::cin >> ab;
    a=a-ab ;
    joueur1=1;
    IA=0;
 //   std::cout << "Il y a " << a << " alumettes "  "\n"; 
 x=a%4 ;
 if(valeur==1)
 {
 if(a==0) 
 {
     a=a-x ;
     std::cout << "L'IA a enlever " << x << " alumettes " "\n" ;
 }
 else if(x==4)
 {
     a=a-3 ;
     std::cout << "L'IA a enlever 3 alumettes " "\n" ;
 }
 else if(a==4)
 {
     a=a-3 ;
      std::cout << "L'IA a enlever 3 alumettes " "\n" ;
 }
 else if(a==3)
 {
     a=a-2 ;
      std::cout << "L'IA a enlever 2 alumettes " "\n" ;  
 }
 else if(a==2)
 {
     a=a-1 ;
      std::cout << "L'IA a enlever 1 alumettes " "\n" ;  
 }
 else if(a==1)
 {
    a=a-1 ;
      std::cout << "L'IA a enlever 1 alumettes " "\n" ; 
 }
else
 {
     a=a-1 ;
     std::cout << "L'IA a enlever 1 alumette " "\n" ;
 } 
 valeur=0;
 joueur1=0;
    IA=1;
 }
 if(valeur==0)
 {
 std::cout << "Il y a " << a << " alumettes "  "\n";
    std::cout << "Combien ve tu prenrdre d'alumettes ( tu doie prendre 1, 2 ou 3 alumettes ) : " ;
    std::cin >> ab;
    a=a-ab ;
    std::cout << "Il y a " << a << " alumettes "  "\n";
srand((unsigned int)time(0));
   for (int i = 0;i<1;i++)
   {
       ab= rand()%3 +1;
       std::cout << "L'IA a enlever " << ab << " alumettes" << std::endl;
   }
   a=a-ab ;
 std::cout << "Il y a " << a << " alumettes "  "\n";
 
 }
 }
 if(modeIA==3)
 { 
    std::cout << "Il y a " << a << " alumettes "  "\n";
    std::cout << "Combien ve tu prenrdre d'alumettes ( tu doie prendre 1, 2 ou 3 alumettes ) : " ;
    std::cin >> ab;
    a=a-ab ;
    joueur1=1;
    IA=0;
    std::cout << "Il y a " << a << " alumettes "  "\n"; 
 x=a%4 ;
 if(a==0) 
 {
     a=a-x ;
     std::cout << "L'IA a enlever " << x << " alumettes " "\n" ;
 }
 else if(x==4)
 {
     a=a-3 ;
     std::cout << "L'IA a enlever 3 alumettes " "\n" ;
 }
 else if(a==4)
 {
     a=a-3 ;
      std::cout << "L'IA a enlever 3 alumettes " "\n" ;
 }
 else if(a==3)
 {
     a=a-2 ;
      std::cout << "L'IA a enlever 2 alumettes " "\n" ;  
 }
 else if(a==2)
 {
     a=a-1 ;
      std::cout << "L'IA a enlever 1 alumettes " "\n" ;  
 }
 else if(a==1)
 {
    a=a-1 ;
      std::cout << "L'IA a enlever 1 alumettes " "\n" ; 
 }
else
 {
     a=a-1 ;
     std::cout << "L'IA a enlever 1 alumette " "\n" ;
 } 
 joueur1=0;
    IA=1;
 }
 }
if(a==0)
{
if(joueur1==1 || IA==0 || a==0)
{
    std::cout << "Bravo, tu a gagné.""\n";
}
if(IA==1 || joueur1==0 || a==0)
{
    std::cout << "Tu a perdu l'IA a gagnée.""\n";
}
}
}
return 0;
}