#include <iostream>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Player genericPlayer;
    Batsman batsman;
    Bowler bowler;

    std::cout << "Calling play() for a generic player: ";
    genericPlayer.play();

    std::cout << "Calling play() for a batsman: ";
    batsman.play();

    std::cout << "Calling play() for a bowler: ";
    bowler.play();

    return 0;
}
