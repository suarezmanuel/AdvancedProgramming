Input was discussed in class, checked an implementation of getting input for funcs. <br>
Didn't use classes as didn't think they were of use. <br><br>

**Map vs Array** <br>

inputManager.cpp
````
// i is for func index, x and y for func args.
void inputHandler (int& i, int& x, int& y) {
    std::cout << "Enter which func you want: addition : 0, subtraction : 0, division: 0" << std::endl;
    std::cin >> i;
    std::cout << "Enter two params; x, y" << std::endl;
    std::cin >> x; std::cin >> y;
}
````

<br><br>

main.cpp

````
#define FUNCCOUNT 3

int add (int, int);
int sub (int, int);
int divi (int, int);

int (*funcarr[FUNCCOUNT]) (int, int) = {add, sub, divi};

int main() {
    int i, x, y;
    inputHandler(i, x, y);

//    if (0 <= i && i < FUNCCOUNT) {
//        funcarr[i](x, y);
//    }

    for (auto& f : funcarr) {
        f (x,y);
    }

    return 0;
}
````

<br><br>

main2.cpp

````
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
````





