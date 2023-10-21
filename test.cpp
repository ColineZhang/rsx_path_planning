#include <iostream>
#include <string>
using namespace std;


#include "globals.h"
#include "Map.h"
#include "AStar.h"

int main()
{   
    srand(670);
    Map map;

    Node start = {0, 0, 0, 0, 0, nullptr};
    Node goal = {mapSize-1, mapSize-1, 0, 0, 0, nullptr};

    map.print_map();

    if(!isValid(start.x, start.y, map)||!isValid(goal.x, goal.y, map)){
        cout<<"Invalid start/end point";
        return 0;
    }

    std::vector<Node *> path = aStar(map, &start, &goal);

    bool check = sanityCheck(map, path, &start, &goal);
    if(check){

    
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
            bool is = false;
            for (int n = 0; n<path.size(); n++){
                if(i == path[n]->x && j == path[n]->y){
                std::cout << 'o';
                is = true;
                continue;
            }
            }

            if (is)
            continue;
            else if (map.get_map(i,j))
            std::cout << 'X';
            else
            std::cout << '_';
        }
        std::cout << "\n";
    }
    
    }
    else{
        std::cout<<"Path not found.";
    }
    

    return 0;
}
