#include <iostream>

using namespace std;

template <class T>
T add(T a, T b) {
	return a + b;
}

int main() {
    int x = 7, y = 8;
    int z = add(x, y);
    cout << x << endl;
    return 0;
}

