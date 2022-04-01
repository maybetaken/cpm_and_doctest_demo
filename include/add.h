#ifndef __SRC_ADD__
#define __SRC_ADD__
#include <string>

class Add{
public:
    Add (int x, int y):_x{x}, _y{y}{};
    int res();
    std::string description(){return "add x, y";};
private:
    int _x;
    int _y;
};

#endif