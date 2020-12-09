CC=g++

HEADERS=process_data.h user.h logic.h graphics.h
SOURCES=process_data.cpp user.cpp logic.cpp graphics.cpp main.cpp

all: game_life

game_life: $(HEADERS) $(SOURCES)
	$(CC) $(SOURCES) $(HEADERS) -o game_life
