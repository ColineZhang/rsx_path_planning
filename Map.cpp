#include "globals.h"
#include "Map.h"
#include <cstdlib>
#include <string>
#include <iostream>

Map::Map() 
{   
    
    for (int i = 0; i < mapSize; i++)
    {
        for (int j = 0; j < mapSize; j++)
        {   
            int num = rand() % 10;
            if (num < 4)
            map[i][j] = X;
            else
            map[i][j] = O;
        }
    }

    map[0][0] = O;
    map[mapSize][mapSize] = O;

}

int Map::get_map(int row, int col){
    return map[row][col];
}

void Map::print_map(){
    // std::cout << ' ';
    // for (int i = 0; i < mapSize; i++)
    // {
    //     std::cout << i;
        
    // }
    // std::cout << "\n";

    for (int i = 0; i < mapSize; i++)
    {   
        //std::cout << i;
        for (int j = 0; j < mapSize; j++)
        {  
            if (map[i][j])
            std::cout << 'X';
            else
            std::cout << '_';
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}


