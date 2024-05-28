#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int number = 1;

        for (int i = size - 1; i >= 0; --i) {
            digits[i] += number;
            if (digits[i] == 10) {
                digits[i] = 0;
                number = 1;
            }
            else {
                number = 0;
            }
        }

        if (number == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};