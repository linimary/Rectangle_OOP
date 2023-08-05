#ifndef RECTANGLE_OOP_TEXTBOX_H
#define RECTANGLE_OOP_TEXTBOX_H

#include <string>

using namespace std;

class TextBox {
public:
    TextBox() = default;
    explicit TextBox(const string &value);
    string getValue();
    void setValue(const string &value);
private:
    string value;
};


#endif //RECTANGLE_OOP_TEXTBOX_H
