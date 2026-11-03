#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "objPos.hpp"

class objPos;  // Forward declaration of the objPos class

class Enemy
{
    protected:
        objPos* pos;  // Using the objPos class to represent the enemy's position        
        
        void undraw();

    public:
        Enemy();
        ~Enemy();
        Enemy(int xPos, int yPos);        

        void move();
        void draw(); 
        void shotDestroyed();  
};      

#endif