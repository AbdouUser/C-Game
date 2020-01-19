#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <string>

class GameState
{
    private:
        static GameState instance;
        GameState() {}
        GameState(GameState &g) {}
        void operator=(GameState &g) {}
        ~GameState() {}


        char **board;
        int currentLevel;
        int teleports=0;
        int Maxlevel;
        int columns;
        int rows;

    public:
        //void log(string message) { cerr << message << endl; }
        static GameState *getInstance() { return &instance; }

        int getTeleports(){
            return teleports;
        }
        int getCurrentLevel(){
            return currentLevel;
        }
        int getColumns(){
            return columns;
        }
        int getRows(){
            return rows;
        }
        char **getBoard(){
            return board;
        }


        //friend ostream &operator<<(ostream &o,const Board &b);


    protected:


};

#endif // GAMESTATE_H
