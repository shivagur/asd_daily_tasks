class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            char ch_left = s[left];
            char ch_right = s[right];
            if (isVowel(ch_left) && isVowel(ch_right)) {
                s[left] = ch_right;
                s[right] = ch_left;
                left++;
                right--;
            } else if (isVowel(ch_left)) {
                right--;
            } else if (isVowel(ch_right)) {
                left++;
            } else {
                left++;
                right--;
            }
        }
        return s;
    }

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'A' ||
               ch == 'e' || ch == 'E' ||
               ch == 'i' || ch == 'I' ||
               ch == 'o' || ch == 'O' ||
               ch == 'u' || ch == 'U';
    }
};
