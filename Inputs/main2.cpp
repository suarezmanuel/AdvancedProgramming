//
// Created by Manuel Suarez on 14/01/2024.
//
#include <iostream>
#include <map>
#include "inputManager.cpp"
//#include <vector>


typedef  int (*f)(int,int);

int add (int, int);
int sub (int, int);
int divi (int, int);

// the type '< >' is part of the structure's name
//std::vector<int> vec;
std::map<int, f> funcs = {{0,add}, {1,sub}, {2, divi}};


int main () {
//    funcs.insert({0,add});
//    funcs.insert({1,sub});
//    funcs.insert({2,divi});

    int i, x, y;
    inputHandler(i, x, y);

    // it has no out of bounds check
//    funcs[i] (x,y);
//
    for (auto& [key, val] : funcs) {
        if (key == i) { val(x, y); }
    }
}

// notes:
/*
 * we use initializer list in order to not init twice, compiler gives preference to init list.
 *
 */