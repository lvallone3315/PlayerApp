// PlayerUI.cpp
//   Encapsulates the methods to read & write to the UI (for now, the console)

#include <iostream>
#include <stdlib.h>
#include "PlayerUI.h"

// Player UI Class
//   Singleton class (for now) - uses console


// empty constructor
PlayerUI::PlayerUI() {

}

string PlayerUI::getUserInput(string prompt) {
    string userInput;
    writeOutput(prompt);
    cin >> userInput;
    writeOutput(userInput);
    return userInput;
}

int PlayerUI::writeOutput(string output) {
    cout << output;
    return(0);
}