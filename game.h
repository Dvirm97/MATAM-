#include "Player.h"

#ifndef HW4_GAME_H
#define HW4_GAME_H

enum GameStatus{
    INVALID_PARAM,
    NAME_ALREADY_EXISTS,
    GAME_FULL,
    NAME_DOES_NOT_EXIST,
    FIGHT_FAILED,
    SUCCESS
};

class Game {
    int maxPlayers;
    Player** playersArr;
public:
    explicit Game(int maxPlayers);
    ~Game();
    GameStatus addPlayer(const char* playerName, const char* weaponName,
                         Target target, int hit_strength);
    GameStatus nextLevel(const char* playerName);
    GameStatus makeStep(const char* playerName);
    GameStatus addLife(const char* playerName);
    GameStatus addStrength(const char* playerName, int strengthToAdd);
    friend ostream& operator<<(ostream& os, const Game& game);
    bool removeAllPlayersWithWeakWeapon(int weaponStrength);
    GameStatus fight(const char* playerName1, const char* playerName2);

private:
    Player* findPlayer(const char* playerName);
    void removePlayer(const char* playerName);
};
#endif //HW4_GAME_H
