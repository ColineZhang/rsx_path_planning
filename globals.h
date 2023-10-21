#ifndef globals_h
#define globals_h
#include <vector>

#define X 1
#define O 0

#define mapSize 10

class Map;
struct Node;
bool sanityCheck(Map &map, std::vector<Node*>& path, Node* start, Node* end);

#endif