int lengthOfLastWord(char* s) {
    int sl=strlen(s);
    int i=sl-1;
    int c=0;
    while (i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        c+=1;
        i--;
    }
    return c;
}