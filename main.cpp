#include <iostream>

#include "Task1/Stack.h"
#include "Task1/Deque.h"
#include "Task2/LeeAlgorithm.h"
#include "Task3/MinSubarray.h"

using namespace std;

int main() {

    // task 2
    vector<vector<int>> v;
    v = {{0, 0, 0, 0, 0},
         {0, 0, 1, 0, 0},
         {0, 0, 1, 0, 0},
         {0, 0, 1, 0, 0},
         {0, 0, 0, 0, 0}
    };

    pair<int, vector<int>> ans = LeeAlgorithm::run(v, 2, 0, 2, 4);

    cout << ans.first << "\n\n";

    // task3

    vector<int> a = {0, 2, -3, 4, 1, -2, 3, 5, -6, 2};
    cout << MinSubarray::run(a);

}
