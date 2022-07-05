int lengthOfLastWord(char * s){
    int length = strlen(s) - 1;
    int ans = 0;
    while(length >= 0 && s[length] == ' ')
        length--;
    while(length >= 0 && s[length--] != ' ')
        ans++;
    
    return ans;
}