#ifndef GAMEMECHS_HPP
#define GAMEMECHS_HPP

#define DIMY 15
#define DIMX 30
#define GAME_MASTER_SPEED 10000  // microseconds, reconfigurable

class GameMechs
{
    private:
        bool exitFlag;   // Program Exiting Flag, used to determine whether to leave the program loop and shutdown the program
        char inputChar;  // Input Character, used to store the most recent input character for the main program logic to use
        int score;
        char** gameBoard;  // Game Board, used to store the current state of the game board for display

        void drawDebugMessage() const;

    public:
        GameMechs();
        ~GameMechs();

        void setExitFlag();
        bool getExitFlag() const;

        void increaseScore(int increment);
        int getScore() const;
        
        void acquireInputChar();  // Acquire input character from MacUILib_getChar()
        char getInputChar() const;   // Get the current character input
        void clearInputChar();    // Clear the current character input (set to NULL)

        char** getGameBoardRef() const;

        void draw() const;
};

#endif