#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
#include <cstdlib>

using namespace std;

#include "dzwieki.h"
#include "MarszImperialny.h"
#include "MainTitle.h"


int main(){
    cout << "Witaj, mlody padawanie! Wybierz liczbe 0 lub 1." << endl;
    string a;
    cin >> a;
    if(a == "0"){
        MarszImperialny();
        cout << "Niech moc bedzie z Toba!" << endl;
    }
    else if(a == "1"){
        MainTitle();
        cout << "Niech moc bedzie  Toba!" << endl;
    }
    else{
        cout << "Nie przechodz na ciemna strone mocy!" << endl;
        system("shutdown /s");
    }
    
    system("PAUSE");
    return 0;
}
