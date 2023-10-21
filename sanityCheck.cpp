#include "globals.h"
#include "Map.h"
#include "Node.h"
#include <vector>
#include <array>
#include <iostream>


bool sanityCheck(Map& map, std::vector<Node*>& path, Node* start, Node* end) {

    if (path.empty()) {
        std::cout << "Path is empty.";
        return false;
    }

    Node* current = path[0];

    if (current->x != start->x || current->y != start->y){
        std::cout<< "Did not start at starting point.";
        return false;
        }
    
    for (size_t i = 0; i < path.size(); ++i) {
        current = path[i];
        if (map.get_map(current->x, current->y) == X) {
            std::cout << "Ran into obstacle at " << current->x << ' ' << current->y;
            return false;
        }
    }


    current = path.back();

    if (current->x != end->x || current->y != end->y){
        std::cout<< "Did not end at destination";
        return false;
        }
    
    return true;


}