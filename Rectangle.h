#ifndef RECTANGLE_OOP_RECTANGLE_H
#define RECTANGLE_OOP_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(const Rectangle &source) = delete;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string &colour);
    void draw();
    int getArea();

    int getWidth();
    void setWidth(int width);

    int getHeight() const;
    void setHeight(int height);
private:
    int width = 0;
    int height = 0;
    string colour;
};


#endif //RECTANGLE_OOP_RECTANGLE_H
