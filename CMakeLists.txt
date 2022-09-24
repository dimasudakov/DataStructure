cmake_minimum_required(VERSION 3.21)
project(IvanovaMariya)

set(CMAKE_CXX_STANDARD 20)

add_executable(IvanovaMariya
        main.cpp
        Task1/Stack.h
        Task1/Deque.h
        Task1/LinkedList.h Task1/Node.h Task2/LeeAlgorithm.h Task3/MinSubarray.h)
