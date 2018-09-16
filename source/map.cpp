#include "map.h"
int MAP_HEIGHT = 36;
int MAP_WIDTH = 36;

Map::Map(const string& file) {
    string line;
    int row = 0;
    int col = 0;
    _map = new char*[MAP_HEIGHT];
    ifstream mapFile;

    mapFile.open(file);
    if (!mapFile) {
        cout << "Unable to open file";
        exit(1);
    }

    for (int i = 0; i < MAP_WIDTH; ++i) {
        _map[i] = new char[MAP_HEIGHT];
    }
    
    while (getline(mapFile, line)) {
        for(char& terrain : line) {
            _map[row][col] = terrain;
            col++; 
        }
        col = 0; 
        row++;
    }

    mapFile.close();
}

void Map::show(void) {
    for (int i = 0; i < MAP_HEIGHT; ++i) {
        for (int j = 0; j < MAP_WIDTH; ++j) {
            cout << _map[i][j];
        }
        cout << "\n";
    }
}

