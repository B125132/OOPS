#include <iostream>
using namespace std;

class GameManager;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name, int h, int s, int l) {
        playerName = name;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager {
public:
    void displayDetails(Player p) {
        cout << "\nPlayer Details" << endl;
        cout << "Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    void checkAlive(Player p) {
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Not Alive" << endl;
    }

    void showLevelScore(Player p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main() {
    string name;
    int health, score, level;

    cout << "Enter player name: ";
    getline(cin, name);

    cout << "Enter health: ";
    cin >> health;

    cout << "Enter score: ";
    cin >> score;

    cout << "Enter level: ";
    cin >> level;

    Player p(name, health, score, level);

    GameManager game;

    game.displayDetails(p);
    game.checkAlive(p);
    game.showLevelScore(p);

    return 0;
}