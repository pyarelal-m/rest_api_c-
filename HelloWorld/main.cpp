#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }
    cout << endl << endl;
    int myNumbers2[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers2) / sizeof(int); i++) {
        cout << myNumbers2[i] << "\n";
    }

    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}
    return EXIT_SUCCESS;
}