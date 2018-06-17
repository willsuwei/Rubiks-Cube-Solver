#pragma once

#include "prune.h"
#include <initializer_list>

class edgePruning : public Prune {
public:
    edgePruning(std::initializer_list<int> const& il);
    int pruning_number(Cube &cube);
    int visited;
private:
    void buildPruneTable();
    void pruneTreeSearch(Cube & cube, char depth_left, char depth, int lastMove);
    int to_index(Cube const& cube) const;
    void to_array(int state, Cube & cube);
    bool solveable(Cube & cube, char depth, char maxBreathDepthSearch, int lastMove);

    const std::vector<int> offsets;
    const int pieces_cnt;
    const std::vector<int> pieces;
};


constexpr int product(int a, int b) {
    int res = 1;
    for (int x = a; x <= b; x++)
        res *= x;
    return res;
}

constexpr int factorial(int x) {
    return product(1, x);
}
