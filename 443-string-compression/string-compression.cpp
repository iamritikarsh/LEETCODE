class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int i = 0;

        while(i<n){
            char curn_char = chars[i];
            int count = 0;
            while(i<n && chars[i]==curn_char){
                count++;
                i++;
            }
            //now do the assign work 
            chars[index] = curn_char;
            index++;

            if(count>1){
                string count_str = to_string(count);
                for(auto &ch : count_str){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
        
    }
};