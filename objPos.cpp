#include "objPos.hpp"

objPos::objPos()
{
    x = 0;
    y = 0;
    symLength = 0; // indicating invalid objPos
    symbol = 0; //NULL
}

objPos::objPos(int xPos, int yPos, int symLength, const char* sym)
{    
    x = xPos;
    y = yPos;
    this->symLength = symLength;

    this->symbol = new char[symLength + 1]; // Allocate memory for the symbol
    for(int i = 0; i < symLength; i++)
    {
        this->symbol[i] = sym[i];
    }
}

// Respect the rule of six / minimum four
// [TODO] Implement the missing special member functions to meet the minimum four rule



void objPos::setObjPos(objPos o)
{
    x = o.x;
    y = o.y;
    symLength = o.symLength;
    delete[] symbol; // Free existing memory
    symbol = new char[symLength + 1];
    for(int i = 0; i < symLength; i++)
    {
        symbol[i] = o.symbol[i];
    }
}

void objPos::setObjPos(int xPos, int yPos, int symLength, const char* sym)
{
    x = xPos;
    y = yPos;
    this->symLength = symLength;
    delete[] symbol; // Free existing memory
    symbol = new char[symLength + 1];
    for(int i = 0; i < symLength; i++)
    {
        symbol[i] = sym[i];
    }
}

objPos objPos::getObjPos() const
{
    objPos returnPos;
    returnPos.x = x;
    returnPos.y = y;
    returnPos.symLength = symLength;
    returnPos.symbol = new char[symLength + 1];
    for(int i = 0; i < symLength; i++) /// deep copy!!
    {
        returnPos.symbol[i] = symbol[i];
    }
    
    return returnPos;
}

int objPos::getX() const
{
    return x;
}

int objPos::getY() const
{
    return y;
}

void objPos::setX(int xPos)
{
    x = xPos;
}

void objPos::setY(int yPos)
{
    y = yPos;
}

char* objPos::getSymbol() const
{
    char* returnSymbol = new char[symLength + 1];
    for(int i = 0; i < symLength; i++)
    {
        returnSymbol[i] = symbol[i];
    }
    return returnSymbol;
}

bool objPos::isPosEqual(const objPos* refPos) const
{
    return (refPos->x == this->x && refPos->y == this->y);
}

char* objPos::getSymbolIfPosEqual(const objPos* refPos) const
{
    if(isPosEqual(refPos))
    {
        char* returnSymbol = new char[symLength + 1];
        for(int i = 0; i < symLength; i++)
        {
            returnSymbol[i] = symbol[i];
        }
        return returnSymbol;
    }
    else
        return 0;
}
