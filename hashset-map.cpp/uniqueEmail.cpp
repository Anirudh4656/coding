 int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(string email:emails){
            string cleanEmail="";
            for(char c:email){
                if(c=='+'||c=='@')break;
                if(c=='.')continue;
                cleanEmail+=c;
            }
            cleanEmail+=email.substr(email.find('@'));
            st.insert(cleanEmail);


        }
        return st.size();
        //tc will be O(n*k)
        //sc will be O(n*k)