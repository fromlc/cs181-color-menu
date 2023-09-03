//------------------------------------------------------------------------------
// cs181-color-menu.cpp
// 
// Author: Prof. Linda C
// 
// - changes console text color to user's choice
//------------------------------------------------------------------------------
#include "ansi_colors.h"

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
    // app banner
    cout << "\nPick a console text color!\n\n";

    char choice;

    // display menu until user quits
    while (true)
    {
        // get user color choice in uppercase
        cout << "R)ed, G)reen, Y)ellow, B)lue, M)agenta, C)yan, W)hite, Q)uit? ";
        cin >> choice;
        choice = toupper(choice);

        // terminate app on user quit
        if (choice == 'Q')
            break;

        // set console color to user's choice
        if (choice == 'R')
            cout << FG_RED;
        else if (choice == 'G')
            cout << FG_GREEN;
        else if (choice == 'Y')
            cout << FG_YELLOW;
        else if (choice == 'B')
            cout << FG_BLUE;
        else if (choice == 'M')
            cout << FG_MAGENTA;
        else if (choice == 'C')
            cout << FG_CYAN;
        else if (choice == 'W')
            cout << FG_WHITE;
        else
            cout << "Sorry, I don't know that color.\n";
    }

    // show new console text color
    cout << "Goodbye!\n";

    // set console text color back to previous color
    cout << RESET;

}
