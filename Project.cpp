#include "MacUILib.hpp"
#include "objPos.hpp"
#include "GameMechs.hpp"
#include "Player.hpp"
#include "Bullet.hpp"
#include "Enemy.hpp"

#include <time.h>
#include <cstdlib>  // Required in C++ for rand() and srand()

using namespace std;

// In Project, you are required to use Array of Pointers for Bullet and Enemy
GameMechs* myGM;
Player* myPlayer;
Bullet** myBulletBucket;
Enemy** myEnemyBucket;


void Initialize(void);
void GetInput(void);
void RunLogic(void);
void DrawScreen(void);
void LoopDelay(void);
void CleanUp(void);


int main(void)
{

    Initialize();

    while(myGM->getExitFlag() == false)  
    {
        GetInput();
        RunLogic();
        DrawScreen();
        LoopDelay();
    }

    CleanUp();

}


void Initialize(void)
{
    MacUILib_init();
    srand(time(NULL));  // Seed the random number generator
    MacUILib_printf("System Initialized...\n");
    
    MacUILib_clearScreen();
}

void GetInput(void)
{

}

void RunLogic(void)
{
    
}

void DrawScreen(void)
{
    MacUILib_clearScreen();        

    myGM->draw();
}

void LoopDelay(void)
{
    MacUILib_Delay(GAME_MASTER_SPEED);   // in GameMechs.hpp
}


void CleanUp(void)
{
    // You've got A LOT of heap instances to delete here!!

    MacUILib_uninit();
}
