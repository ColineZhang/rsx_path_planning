#ifndef Map_h
#define Map_h

#include "globals.h"

class Map {
    private:
    int map[mapSize][mapSize];

    public:
    int get_map(int row, int col);
    void print_map();
    Map();

    
};


#endif
