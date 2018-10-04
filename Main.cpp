#include <iostream>
using namespace std;

bool isRunning;

enum Langs {PL,EN  };
string Version = "0.1v";
Langs selectedLang = EN;
int selection;
void clear(){
  for(int i = 0;i<200;i++){
    cout << '\n';
  }
}
void info(Langs lang){
  if(lang == EN){
    cout << "**************************" << '\n';
    cout << "Version :" << Version << '\n';
    cout << "**************************" << '\n';
    cout << "Author : MRQWKA"<< '\n';
  }else if(lang == PL){
    cout << "**************************" << '\n';
    cout << "Wersja :" << Version << '\n';
    cout << "**************************" << '\n';
    cout << "Autor : MRQWKA"<< '\n';
  }
}
void stelect (Langs lang){
  if(lang == EN){
    cout << "**************************" << '\n';
    cout << "0.Language select" << '\n';
    cout << "1.Addition" << '\n';
    cout << "2.Subtraction" << '\n';
    cout << "**************************" << '\n';
    cout << "Please stelect a function: ";
    cin >> selection;
  }else if(lang == PL){
    cout << "**************************" << '\n';
    cout << "0.Wybór języka" << '\n';
    cout << "1.Dodawanie" << '\n';
    cout << "2.Odejmowanie" << '\n';
    cout << "**************************" << '\n';
    cout << "Wybierz funkcję: ";
    cin >> selection;
  }
}
void addition(Langs lang){
  int quantityOfInts;
  if(lang == EN){
    cout << "**************************" << '\n';
    cout << "How many numbers to add : ";
    cin >> quantityOfInts;
    int numbers[quantityOfInts];
    clear();
    cout << "**************************" << '\n';
    cout << "Please enter a number :";
    cin >> numbers[0];
    for (int i = 0; i < quantityOfInts-1; i++) {
      cout << "**************************" << '\n';
      cout << "Please enter a next number :";
      cin >> numbers[i];
    }
  }else if(lang == PL){
    cout << "**************************" << '\n';
    cout << "Ile liczb chcesz dodac : ";
    cin >> quantityOfInts;
    int numbers[quantityOfInts];
    clear();
    cout << "**************************" << '\n';
    cout << "Podaj liczbe :";
    cin >> numbers[0];
    for (int i = 0; i < quantityOfInts-1; i++) {
      cout << "**************************" << '\n';
      cout << "Podaj nastempna liczbe :";
      cin >> numbers[i];
    }
  }
}
int main(int argc, char const *argv[]) {
  info(selectedLang);
  while(isRunning){
    
  }
}
