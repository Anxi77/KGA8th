#pragma once
#include "GridGen.h"
#include "GridMove.h"
#include <conio.h>
#include "ConsoleUtils.h"

using namespace std;
using namespace ConsoleUtils;

class GridManager {
public:
    GridManager(int size);
    void initialize();
    bool move();
    bool SpawnNewNumber();
    void printGrid();
    vector<vector<int>>& getGrid();
    int getCurrentScore(int size);
    pair<int, int> getNewSpawn() const { return newSpawn; }
    void setGrid(const vector<vector<int>>& newGrid);
    void resetNewSpawn() { newSpawn = { -1, -1 }; }

private:
    GridGen gridGen;
    GridMove gridMove;
    pair<int, int> newSpawn;
};