#include <iostream>

#include "Task1/Stack.h"
#include "Task1/Deque.h"
#include "Task2/LeeAlgorithm.h"

using namespace std;

int main() {
    vector<vector<int>> v;
    v = {{0, 0, 0, 0, 0},
         {0, 0, 1, 0, 0},
         {0, 0, 1, 0, 0},
         {0, 0, 1, 0, 0},
         {0, 0, 0, 0, 0}
    };

    pair<int, vector<int>> ans = LeeAlgorithm::run(v, 1, 0, 4, 4);

    cout << ans.first;
}
