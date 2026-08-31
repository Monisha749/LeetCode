class Solution {
public:
bool alpha(char c){
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    return true;
    return false;
}
    string reverseOnlyLetters(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<=right){
            while(left<right && !alpha(s[left])){
                left++;
            }
            while(left<right && !alpha(s[right])){
                right--;
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};