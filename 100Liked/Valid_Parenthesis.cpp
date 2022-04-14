#include <string>
#include <unordered_map>
#include <stack>

bool isValid(std::string s) {
    std::unordered_map<char,char> mp;
    std::stack<char> stk;
    mp.emplace(')', '(');
    mp.insert(']', '[');
    mp.insert('}', '{');
    for (auto const & i:s)
    {
        if ( i == ')' || i == ']' || i == '}')
        {
            if(stk.size() > 0 && stk.top() == mp[i]) stk.pop();
            else return false;
        }
        else { 
            stk.emplace(i);
        }
    }
    
    return stk.size() == 0;
}
