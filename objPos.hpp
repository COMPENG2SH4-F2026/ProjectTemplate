#ifndef OBJPOS_HPP
#define OBJPOS_HPP

class objPos
{
    private:
        int x;
        int y;
        int symLength;  //not including null terminator      
        char* symbol;   //variable length symbol

    public:
        objPos();        
        objPos(int xPos, int yPos, int symLength, const char* sym);
        
        // Respect the rule of six / minimum four
        // [TODO] Implement the missing special member functions to meet the minimum four rule       
        
        void setObjPos(objPos o);        
        void setObjPos(int xPos, int yPos, int symLength, const char* sym);  

        objPos getObjPos() const;
        int getX() const;
        int getY() const;
        void setX(int xPos);
        void setY(int yPos);
        char* getSymbol() const;
        int getSymLength() const;
        char* getSymbolIfPosEqual(const objPos* refPos) const;
        
        bool isPosEqual(const objPos* refPos) const;
};

#endif