#ifndef GAME_H
#define GAME_H
#include "RPG.h"
#include <vector>
#include <set>
using namespace std;


class Game {
    private:
        vector<RPG*> players;
        set<int> live_players;

    public:
        Game();
        ~Game();
        
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
};

#endif