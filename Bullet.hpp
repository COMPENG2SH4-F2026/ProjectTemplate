#ifndef BULLET_HPP
#define BULLET_HPP

#include "objPos.hpp"

class objPos;  // Forward declaration of the objPos class

class Bullet
{
    private:
        objPos* pos;  // Using the objPos class to represent the bullet's position                
                
        void undraw();

    public:
        Bullet();
        ~Bullet();
        Bullet(int xPos, int yPos);

        void move(int dy);
        void draw();
};

#endif // BULLET_HPP