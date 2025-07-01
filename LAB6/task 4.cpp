#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 1, 2, 4, 6, 4, 3};
    int value = 4;

    int countValue = count(v.begin(), v.end(), value);
    int minVal = *min_element(v.begin(), v.end());
    int maxVal = *max_element(v.begin(), v.end());

    cout << "Count of " << value << ": " << countValue << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    return 0;
}

