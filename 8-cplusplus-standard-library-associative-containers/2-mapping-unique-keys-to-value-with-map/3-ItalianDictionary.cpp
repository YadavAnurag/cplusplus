#include <map>
#include <iostream>

using namespace std;
int main(){

  map<string, string> dictionary{
    {"beautiful", "bello (m.), bella (f.)"},
    {"church", "chiesa"},
    {"good morning", "buon giorno"},
    {"good evening", "buona sera"},
    {"goodbye", "arrivederci"},
    {"hello", "ciao"},
    {"museum", "museo"},
    {"pasta", "pasta"},
    {"pizza", "pizza"},
    {"thank you", "grazie"}
  };

  dictionary.insert({"how much", "quanto?"});
  dictionary.insert({"ice cream", "gelato"});

  for(auto const& [english, italian]:dictionary){
    cout << english << " : " << italian << endl;
  }
  cout << "\n\nThe Italian for " << "thank you is, " << dictionary["thank you"];

  return 0;
}