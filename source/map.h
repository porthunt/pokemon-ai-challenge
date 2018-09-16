#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#ifndef MAP_H
#define MAP_H

class Map {
    private:
        char** _map;
    public:
        Map(const string& file);
        void show(void);
};

#endif
