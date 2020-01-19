#ifndef GAMEADAPTER_H
#define GAMEADAPTER_H

#include "GameState.h"

typedef struct state{
        int currentLevel;
        int teleports=0;
        int Maxlevel;
        int columns;
        int rows;
}state;
class GameAdapter
{
    public:
        GameAdapter();
        virtual ~GameAdapter();
        GameAdapter(const GameAdapter& other);
        void play();
        void autoplay();
        GameState initBoards(int maxLevel,char** files);

    protected:

    private:

};

#endif // GAMEADAPTER_H
