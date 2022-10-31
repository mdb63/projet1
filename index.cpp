#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <string>  

using namespace std;
using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::vector;

int main() {

  ifstream txt1, txt2;
  string fichier1, fichier2;
  vector <string> v1;
  vector <string> v2;
  string s1, s2;

// fichier 1
cout << "entrer fichier 1 : " ;
cin >> fichier1 ;

// fichier 2
cout << "entrer fichier 2 : " ;
cin >> fichier2;



// ouverture des fichier
txt1.open(fichier1.c_str());
txt2.open(fichier2.c_str());



 
// insertion des valeurs
while(txt1 >> s1) 
  {
    v1.push_back(s1);
  }


while (txt2 >> s2)
  {
   v2.push_back(s2);
  }




int sml =0;
int nosml =0;
int similair ,max ;


if (v1.size() >=v2.size())
   {
     max= v1.size();
   }


else
   {
     max=v2.size();
   }

// verification de similarité
for(int i=0; i<max; i++)
{
if(v1[i] == v2[i]) 
  {
    sml++;
  }
else {
      nosml++;
     }

}

//calcule de similarité
 similair = ((sml)*100)/max;

//affichage
cout << similair  << "%"<<endl;

}