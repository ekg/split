#include <iostream>
#include "split.h"

using namespace std;

int main(void) {
    string str = "this will be split on\ttabs\tand spaces";
    vector<string> s = split(str, " \t");
    for (vector<string>::iterator c = s.begin(); c != s.end(); ++c) {
        cout << *c << endl;
    }
    return 0;
}
