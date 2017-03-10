#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

for (int i = 1; i <= 10; i++) {
int r = rand()%3+1;

cout << r << " ";
}
cout << endl;
}
