class Solution {
public:
    int passwordStrength(string password) {

        unordered_set<char> st;

        // store distinct characters
        for(char ch : password) {
            st.insert(ch);
        }

        int strength = 0;

        for(char ch : st) {

            if(islower(ch))
                strength += 1;

            else if(isupper(ch))
                strength += 2;

            else if(isdigit(ch))
                strength += 3;

            else
                strength += 5;
        }

        return strength;
    }
};
