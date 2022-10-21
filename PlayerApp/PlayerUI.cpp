// PlayerUI.cpp
//   Encapsulates the methods to read & write to the UI (for now, the console)

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;  // fair programming practice, as could create scope issues, but don't feel like qualifying all reads & writes

// Player UI Class
//   Singleton class (for now) - uses console


class PlayerUI {
    // Class variable - player name for this object
private:
    // nothing here

public:
    // empty constructor
    PlayerUI() {

    }

    string getUserInput(string prompt) {
        string userInput;
        writeOutput(prompt);
        cin >> userInput;
        writeOutput(userInput);
        return userInput;
    }

    int writeOutput(string output) {
        cout << output;
        return(0);
    }
};


int main()
{
    PlayerUI console;

    console.writeOutput("Hello World!\n");
}
