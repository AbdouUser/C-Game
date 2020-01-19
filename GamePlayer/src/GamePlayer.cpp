#include "GamePlayer.h"

GamePlayer::GamePlayer()
{
    this->state=GameState::getInstance();
}

GamePlayer::~GamePlayer()
{
    //dtor
}

GamePlayer::GamePlayer(const GamePlayer& other)
{
    //copy ctor
}
void GamePlayer::initGame(){
    string cmd ,arg[100];
    cout<<">>";
    cin>>cmd;
    /*char *token = strtok(cmd, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }
    */
    this->play();
}
void GamePlayer::play(){


}

