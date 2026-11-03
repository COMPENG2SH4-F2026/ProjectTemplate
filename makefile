CC=g++
CFLAGS=-I. -g
VPATH=./objPosArrayList_TestSuite/
OBJ = MacUILib.o objPos.o objPosArrayList.o Bullet.o Explosion.o GameMechs.o Enemy.o Boss.o Player.o Project.o  # add all additional module .o's here
DEPS = *.hpp
EXEC = Project

ifeq (${OS}, Windows_NT)
	OSSETTING = -DWINDOWS
else
	OSSETTING = -DPOSIX
	POSTLINKER = -lncurses
endif

%.o: %.cpp $(DEPS)
	$(CC) ${OSSETTING} -c -o $@ $< $(CFLAGS)

${EXEC} : $(OBJ)
	$(CC) ${OSSETTING} -o $@ $^ $(CFLAGS) ${POSTLINKER}

clean :
	rm -r ${OBJ} ${EXEC} ${EXEC}.exe
	

