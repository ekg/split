#include <iostream>
#include <vector>
#include <string>
#include "join.h"

using namespace std;

int main(void) {
    vector<string> s;
    s.push_back("this");
    s.push_back("will");
    s.push_back("be");
    s.push_back("joined");
    cout << join(s, "|") << endl;
    return 0;
}
