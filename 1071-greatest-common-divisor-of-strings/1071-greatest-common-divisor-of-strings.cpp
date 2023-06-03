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
        string s = str1.substr(0, B);
        for (int i = 0; i < str1.size() || i < str2.size(); i += B) {
            if (i < str1.size() && s != str1.substr(i, B)) return "";
            if (i < str2.size() && s != str2.substr(i, B)) return "";
        }
        return str1.substr(0, B);
    }
};