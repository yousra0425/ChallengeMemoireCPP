#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

void testFunction(const vector<int>& params) {
    cout << "Function called with " << params.size() << " parameters." << endl;
}

int main() {
    try {
        for (size_t i = 1; ; ) {
            vector<int> params(i, 1);
            testFunction(params);

            // Update i based on its current value
            if (i < 1000000000) {
                i *= 5;
            } else {
                i *= 1.7;

            }

        }
    } catch (const bad_alloc& e) {
        cout << "Memory allocation error: " << e.what() << endl;
    }

    return 0;
}
