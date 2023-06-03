class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1.size() < str2.size()) swap(str1, str2);
        int R = str2.size();
        int A = str1.size();
        int B = R;
        R = A % B;
        while (R) {
            A = B;
            B = R;
            R = A % B;
        }
        return (str1 + str2 == str2 + str1) ? str1.substr(0, B) : "";
    }
};