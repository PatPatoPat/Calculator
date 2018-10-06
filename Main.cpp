#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

bool isRunning;

enum Langs {PL,EN  };
string Version = "0.1v";
Langs selectedLang = EN;
void clear(){
  system("cls");
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
void changeLanguage(Langs lang){
  clear();
  int stelection;
  if(lang == EN){
    cout << "**************************" << '\n';
    cout << "0.English" << '\n';
    cout << "1.Polski" << '\n';
    cout << "**************************" << '\n';
    cout << "Please stelect a language : ";
    cin >> stelection;
  }else if(lang == PL){
    cout << "**************************" << '\n';
    cout << "0.English" << '\n';
    cout << "1.Polski" << '\n';
    cout << "**************************" << '\n';
    cout << "Prosze wybrac jezyk : ";
    cin >> stelection;
}
  switch (stelection) {
    case 0 :
      selectedLang = EN;
    break;
    case 1 :
      selectedLang = PL;
    break;
  }
}
void addition(Langs lang){
  clear();
  if(lang == EN){
      double FNumber;
      double SNumber;
      cout << "**************************" << '\n';
      cout << "Please enter a first number : ";
      cin >> FNumber;
      cout << "**************************" << '\n';
      cout << "Please enter a second number : ";
      cin >> SNumber;
      clear();
      double sum = FNumber + SNumber;
      cout << "**************************" << '\n';
      cout << FNumber << " + " << SNumber << " = " << sum ;

  }else if(lang == PL){
      double FNumber;
      double SNumber;
      cout << "**************************" << '\n';
      cout << "Podaj pierwsza liczbe : ";
      cin >> FNumber;
      cout << "**************************" << '\n';
      cout << "Podaj druga liczbe : ";
      cin >> SNumber;
      clear();
      double sum = FNumber + SNumber;
      cout << "**************************" << '\n';
      cout << FNumber << " + " << SNumber << " = " << sum ;
  }

  Sleep(3000);
  clear();
}
void substraction(Langs lang){
    if(lang == EN){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Podaj pierwsza liczbe : ";
        cin >> FNum;
        cout << "Podaj druga liczbe : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << "-" << SNum << FNum - SNum;
    }else if(lang == PL){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Please enter a first number : ";
        cin >> FNum;
        cout << "Please enter a Second number : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " - " << SNum << " = "<< FNum - SNum;
    }
    Sleep(3000);
    clear();
}
void multiplication(Langs lang){
    if(lang == EN){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Podaj pierwsza liczbe : ";
        cin >> FNum;
        cout << "Podaj druga liczbe : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " * " << SNum <<" = "<< FNum * SNum;
    }else if(lang == PL){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Please enter a first number : ";
        cin >> FNum;
        cout << "Please enter a Second number : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " * " << SNum << " = "<< FNum * SNum;
    }
    Sleep(3000);
    clear();
}
void division(Langs lang){
    if(lang == EN){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Podaj pierwsza liczbe : ";
        cin >> FNum;
        cout << "Podaj druga liczbe : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " / " << SNum <<" = "<< FNum / SNum;
    }else if(lang == PL){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Please enter a first number : ";
        cin >> FNum;
        cout << "Please enter a Second number : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " / " << SNum << " = "<< FNum / SNum;
    }
    Sleep(3000);
    clear();
}
void exponentiation(Langs lang){
    if(lang == EN){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Podaj pierwsza liczbe : ";
        cin >> FNum;
        cout << "Podaj druga liczbe : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " ^ " << SNum <<" = "<< pow(FNum,SNum);
    }else if(lang == PL){
        double FNum;
        double SNum;
        cout << "**************************" << '\n';
        cout << "Please enter a first number : ";
        cin >> FNum;
        cout << "Please enter a Second number : ";
        cin >> SNum;
        cout << "**************************" << '\n';
        cout << FNum << " ^ " << SNum << " = "<< pow(FNum,SNum);
    }
    Sleep(3000);
    clear();
}
void stelect (Langs lang){
  clear();
  int selection;
  if(lang == EN){
    cout << "**************************" << '\n';
    cout << "1.Language select" << '\n';
    cout << "2.Addition" << '\n';
    cout << "3.Subtraction" << '\n';
    cout << "4.Multiplitacion" << '\n';
    cout << "5.Division" << '\n';
    cout << "6.Exponentiation" << '\n';
    cout << "0.Exit" << '\n';
    cout << "**************************" << '\n';
    cout << "Please stelect a function: ";
    cin >> selection;
  }else if(lang == PL){
    cout << "**************************" << '\n';
    cout << "1.Wybor jezyka" << '\n';
    cout << "2.Dodawanie" << '\n';
    cout << "3.Odejmowanie" << '\n';
    cout << "4.Mnozenie" << '\n';
    cout << "5.Dzielenie" << '\n';
    cout << "6.Potegowanie" << '\n';
    cout << "0.Wyjscie" << '\n';
    cout << "**************************" << '\n';
    cout << "Wybierz funkcje: ";
    cin >> selection;
  }
  switch (selection) {
    case 1:
      changeLanguage(selectedLang);
    break;
    case 2:
      addition(selectedLang);
    break;
    case 3:
        substraction(selectedLang);
    break;
    case 4:
        multiplication(selectedLang);
    break;
    case 5:
        division(selectedLang);
    break;
    case 6:
        exponentiation(selectedLang);
    break;
    case 0:
      isRunning = false;
    break;
  }
}
int main(int argc, char const *argv[]) {
  clear();
  info(selectedLang);
  isRunning = true;
  Sleep(500);
  while(isRunning){
    stelect(selectedLang);
  }
  clear();
}
