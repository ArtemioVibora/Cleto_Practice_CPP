#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
typedef int ELEMENT_TYPE;

bool isFull(int last) {
    if (last == MAX_SIZE - 1) {
        return true;
    }

    return false;
}

bool isEmpty(int last) {
    if (last == -1) {
        return true;
    }
    return false;
}




int main() {



}