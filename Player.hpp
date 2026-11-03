#ifndef PLAYER_HPP
#define PLAYER_HPP

#define PLAYER_SYMBOL "<H>"
#define PLAYER_SYMBOL_LENGTH 3

#include "objPos.hpp"

class objPos;  // Forward declaration of the objPos class

class Player
{
    private:
        objPos* pos;  // Using the objPos class to represent the player's position
                
        void undraw();

    public:
        Player();
        ~Player();
        Player(int xPos, int yPos);

        void move(int dx);
        void shoot();
        void draw();
};

#endif