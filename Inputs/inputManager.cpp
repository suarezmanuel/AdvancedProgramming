#include <iostream>

// i is for func index, x and y for func args.
void inputHandler (int& i, int& x, int& y) {
    std::cout << "Enter which func you want: addition : 0, subtraction : 0, division: 0" << std::endl;
    std::cin >> i;
    std::cout << "Enter two params; x, y" << std::endl;
    std::cin >> x; std::cin >> y;
}

