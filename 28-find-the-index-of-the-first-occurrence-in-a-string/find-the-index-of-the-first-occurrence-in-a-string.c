int strStr(char* haystack, char* needle) {
    int n=strlen(haystack);
    int m=strlen(needle);
    int patternhash=0;
    int testhash=0;
    int h=1;
    int base=256;
    int prime=101;
    if(m>n){
        return -1;
    }
    for(int i=0;i<m-1;i++){
        h=(h*base)%prime;
    }
    for(int i=0;i<m;i++){
        patternhash=(base*patternhash+needle[i])%prime;
        testhash=(base*testhash+haystack[i])%prime;
    }
    for(int i=0;i<=n-m;i++){
        if(patternhash==testhash){
            bool out=true;
        int j;
        for(j=0;j<m;j++){
            if(needle[j]!=haystack[i+j]){
                out=false;
                break;
            }
        }
            if(out){
                return i;
            }
        }
        if(i<n-m){
            testhash=(base*(testhash-haystack[i]*h)+haystack[i+m])%prime;
            if(testhash<0){
                testhash+=prime;
            }
        }
        }
        return -1;
}