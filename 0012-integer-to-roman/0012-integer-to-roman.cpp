class Solution {
private:
    std::map<int, char, greater<int> > IntRoman;
    string Roman;
public:
    Solution() {
        IntRoman[1] = 'I';
        IntRoman[5] = 'V';
        IntRoman[10] = 'X';
        IntRoman[50] = 'L';
        IntRoman[100] = 'C';
        IntRoman[500] = 'D';
        IntRoman[1000] = 'M';
    }
    void reverseStr(string& str) {
        int n = str.length();
        for (int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
    }
    void getRomanNumber(int& fi, int& val) {
        int loop;
        auto findingVal = IntRoman.find(val);
        auto findingVal1 = IntRoman.find(val+1);
        auto findingVal10 = IntRoman.find(val+(pow(10, fi)));
        if (findingVal != IntRoman.end()) {
            Roman.append(1, findingVal->second);
        }
        else if (findingVal1 != IntRoman.end()) {
            Roman.append(1, 'I');
            Roman.append(1, findingVal1->second);
        }
        else if (findingVal10 != IntRoman.end()) {
            intToRoman(pow(10, fi));
            Roman.append(1, findingVal10->second);
        }
        else {
            loop = val / IntRoman.lower_bound(val)->first;
            int Rest = val - loop * IntRoman.lower_bound(val)->first;
            val = IntRoman.lower_bound(val)->second;
            while (loop--)
                Roman.append(1, val);
            if (Rest) intToRoman(Rest);
        }
    }
    string intToRoman(int num) {
        string str;
        int val;
        while (num) {
            str.append(1, num % 10);
            num /= 10;
        }
        reverseStr(str);
        for (int i = 0; i < str.size(); i++) {
            if ((int)str[i]) {
                int fi = str.size() - i - 1;
                val = str[i] * (pow(10, fi));
                getRomanNumber(fi, val);
            }
        }
        return Roman;
    }
};