class Bank {
private:
    vector<long long> bal;
public:
    Bank(vector<long long>& bal) {
        this->bal = bal;
    }

    bool transfer(int a1, int a2, long long m) {
        if (a1 > bal.size() || a2 > bal.size() || bal[a1 - 1] < m) 
            return false;
        bal[a1 - 1] -= m;
        bal[a2 - 1] += m;
        return true;
    }

    bool deposit(int acc, long long m) {
        if (acc > bal.size()) 
            return false;
        bal[acc - 1] += m;
        return true;
    }

    bool withdraw(int acc, long long m) {
        if (acc > bal.size() || bal[acc - 1] < m) 
            return false;
        bal[acc - 1] -= m;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(bal);
 * bool param_1 = obj->transfer(a1,a2,m);
 * bool param_2 = obj->deposit(acc,m);
 * bool param_3 = obj->withdraw(acc,m);
 */
