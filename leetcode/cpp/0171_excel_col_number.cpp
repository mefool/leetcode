/* Leetcode - Problem 171 - Excel Sheet Column Number
   https://leetcode.com/problems/excel-sheet-column-number/
*/

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        for (int i = s.size()-1; i>=0; i--)
            num += (s[i] - 'A' + 1) * pow(26, s.size() - i - 1);
        return num;
    }
};
