class Solution {
public:
    int NewNumber(int n) {
        int Number = 0;
        while (n) {
            Number += pow(n % 10, 2);
            n /= 10;
        }
        return Number;
    }
    bool isHappy(int n) {
        int fastPointer = n;
        while (n != 1 && fastPointer != 1) {
            n = NewNumber(n);
            fastPointer = NewNumber(NewNumber(fastPointer));
            if (n == fastPointer) break;
        }
        return fastPointer == 1;
    }
};