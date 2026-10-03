class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        auto binary = [](int n) {
            string s;
            while(n > 0) {
                s += to_string(n % 2);
                n /= 2;
            }
            reverse(s.begin(), s.end());
            return s;
        };

        return binary(year) + "-" + binary(month) + "-" + binary(day);
    }
};