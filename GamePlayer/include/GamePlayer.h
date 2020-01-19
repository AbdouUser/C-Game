#ifndef GAMEPLAYER_H
#define GAMEPLAYER_H
#include <iostream>
#include "GameState.h"
#include "GameAdapter.h"
using namespace std;

class GamePlayer
{
    public:
        GamePlayer();
        virtual ~GamePlayer();
        GamePlayer(const GamePlayer& other);
        void initGame();
        void play();

    protected:

    private:
        GameState *state;
        GameAdapter adapter;
};

#endif // GAMEPLAYER_H
