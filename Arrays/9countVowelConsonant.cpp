#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int beautifulSubstrings(string s, int kth) {
        int n = s.size();
        int count = 0;

        // Create a vector to store the prefix sums of vowels and consonants
        vector<int> vowelPrefixSum(n + 1, 0);
        vector<int> consonantPrefixSum(n + 1, 0);

        // Calculate prefix sums
        for (int i = 1; i <= n; i++) {
            vowelPrefixSum[i] = vowelPrefixSum[i - 1] + (s[i - 1] == 'a' || s[i - 1] == 'e' || s[i - 1] == 'i' || s[i - 1] == 'o' || s[i - 1] == 'u');
            consonantPrefixSum[i] = consonantPrefixSum[i - 1] + (s[i - 1] != 'a' && s[i - 1] != 'e' && s[i - 1] != 'i' && s[i - 1] != 'o' && s[i - 1] != 'u');
        }

        // Iterate over all substrings
        for (int len = 1; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;

                // Calculate the number of vowels and consonants in the substring in constant time
                int vowels = vowelPrefixSum[j + 1] - vowelPrefixSum[i];
                int consonants = consonantPrefixSum[j + 1] - consonantPrefixSum[i];

                if (vowels == consonants && (consonants * vowels) % kth == 0) {
                    count++;
                }
            }
        }

        return count;
    }
};
