#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {  // ✅ CHANGE: Method name and parameter type
        int n = bank.size();  // ✅ CHANGE: Declare n properly
        int m = bank[0].size();  // ✅ CHANGE: Declare m properly

        int prev = 0;
        int no_of_lbs = 0;  // ✅ CHANGE: Better variable name

        for(int i = 0; i < n; i++){
            int no_of_devices = 0;
            for(int j = 0; j < m; j++)
            {
                if(bank[i][j] == '1')  // ✅ CHANGE: Compare with character '1', not integer 1
                {
                    no_of_devices++;
                }
            }

            // ✅ ADD: Missing logic to calculate laser beams
            no_of_lbs += no_of_devices * prev;
            if(no_of_devices > 0) {
                prev = no_of_devices;
            }
        }

        return no_of_lbs;  // ✅ ADD: Return statement
    }
};

int main() {
    vector<string> bank = {"011001", "000000", "010100", "001000"};  // ✅ CHANGE: Correct syntax

    // Create Solution object and call the method
    Solution sol;
    int result = sol.numberOfBeams(bank);  // ✅ CHANGE: Call correct method

    cout << "Number of laser beams: " << result << endl;

    // ✅ OPTIONAL: Print the bank for visualization
    cout << "\nBank layout:" << endl;
    for (auto row : bank) {
        cout << row << endl;
    }

    return 0;
}
