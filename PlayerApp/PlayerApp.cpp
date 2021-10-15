// PlayerApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// Player Class
//   Each instance is a player
//   Currently, only supported attribute is the player name
//   Can be expanded in the future with additional attributes
//   ToDo: add attribute(s) to constructor with default values

class Player {
    // Class variable - player name for this object
#define BUFFER_SIZE 100

private:
    string playerName = "?";
    char outputBuffer[BUFFER_SIZE];

    // public methods: store and retrieve player name for this object instance
public:

    // empty constructor, can enhance later
    Player() {

    }

    // sets player name to name - limited to string class
    //    should overload for c_strings
    void setPlayerName(string name) {
        playerName = name;
    }

    // returns player name as a string
    //   should overload for c_strings (ie getPlayerName returning c_string instead of string)
    string getPlayerName() {
        return (playerName);
    }

    // returns all class data structures in easily readable form as a c_string
    char *dumpPlayerClass() {
        sprintf_s(outputBuffer, "Player Name: %s\n", playerName.c_str());
        return outputBuffer;
    }
};   // end of Player class

#define MAX_PLAYERS 2


int main()
{
    Player player1;
    Player player2;

    std::cout << "Hello World!\n";
    player1.setPlayerName("I am");
    player2.setPlayerName("Legend");
    cout << player1.dumpPlayerClass();
    cout << player2.dumpPlayerClass();
    cout << "Hello world";

}