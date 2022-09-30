#include <iostream>


class RtfDocument {
    public:
    map<std::string, std::string>  meta;
    int y;
    void toHtml();
};