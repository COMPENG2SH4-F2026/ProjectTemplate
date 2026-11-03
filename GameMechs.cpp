#include "MacUILib.hpp"
#include "GameMechs.hpp"

GameMechs::GameMechs()
{
    exitFlag = false;
    inputChar = 0;
    score = 0;

    // Create Game Board on the Heap
}

GameMechs::~GameMechs()
{
    
}

void GameMechs::setExitFlag()
{

}

bool GameMechs::getExitFlag() const
{

}


void GameMechs::increaseScore(int increment)
{

}

int GameMechs::getScore() const
{

}


void GameMechs::acquireInputChar()
{
    
}
 
char GameMechs::getInputChar() const
{

}
 
void GameMechs::clearInputChar()
{

}    

char** GameMechs::getGameBoardRef() const
{

}

void GameMechs::draw() const
{
    // Draw the Game Board

    drawDebugMessage();  // print additional messages in here for debugging purposes
}

void GameMechs::drawDebugMessage() const
{
    // Some example debugging messages.  Add more as needed.
    MacUILib_printf("Input Char: %c\n", inputChar);
    MacUILib_printf("Exit Flag: %d\n", exitFlag);        
}