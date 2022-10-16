/**
 * Name: Abdul Ali Khan
 * Username: abdulalikhan
 * Problem No. 1472
 * Design Browser History
 */
class BrowserHistory {
public:
    list<string> history;
    list<string>::iterator itr;
    
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        itr = history.begin();
    }
    
    void visit(string url) {
        auto temp = itr;
        history.erase(++temp, history.end());
        history.push_back(url);
        itr++;
    }
    
    string back(int steps) {
        while (itr != history.begin() && steps--)
            itr--;
        return *itr;
    }
    
    string forward(int steps) {
        while (itr != (--history.end()) && steps--)
            itr++;
        return *itr;
    }
};