/***********************************************************
 // OOP244 Workshop 2: Dynamic Memory
 // File Kingdom.cpp
 // Version 1.0
 // Date: 2019/05/06
 // Author: Cornel
 // Revision History
 ///////////////////////////////////////////////////////////
 // Name        Date    Reason
 // Liu,Yu-Che  5/23    w2_in_lab
 ///////////////////////////////////////////////////////////
 ***********************************************************/

#include <iostream>
#include "Kingdom.h"
#include "Kingdom.h"

using namespace std;
using namespace sict;

void read(sict::Kingdom&);

int main() {
    int count = 0;
    struct Kingdom* pKingdom = nullptr;
    
    cout << "==========\n"
    << "Input data\n"
    << "==========\n"
    << "Enter the number of Kingdoms: ";
    cin >> count;
    cin.ignore();
    if (count < 1) return 1;
    pKingdom = new Kingdom[count];
    
    for (int i = 0; i < count; ++i) {
        cout << "Kingdom #" << i + 1 << ": " << endl;
        read(pKingdom[i]);
    }
    cout << "==========" << endl << endl;
    cout << "------------------------------" << endl
    << "The 2nd kingdom entered is" << endl
    << "------------------------------" << endl;
    sict::display(pKingdom[1]);
    cout << "------------------------------" << endl << endl;
    delete [] pKingdom;
    pKingdom = nullptr;
    return 0; }

void read(sict::Kingdom& kingdom) {
    cout << "Enter the name of the Kingdom: ";
    cin.get(kingdom.m_name, 32, '\n');
    cin.ignore(2000, '\n');
    cout << "Enter the number of people living in " << kingdom.m_name << ": ";
    cin >> kingdom.m_population;
    cin.ignore(2000, '\n');
}
