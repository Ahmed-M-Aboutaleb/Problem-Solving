class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n, n, "", result);
        return result;
    }
private:
    static void generate(int open, int close, string pren, vector<string> &res) {
        if(open == 0 && close == 0) {
            res.push_back(pren);
            return;
        }
        if(open > 0) generate(open -1, close, pren + '(', res);
        if(open < close) generate(open, close-1, pren+')', res);
    }
};