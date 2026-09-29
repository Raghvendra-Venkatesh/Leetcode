bool isValid(char* s) {
    char arr[strlen(s)];
    int top=-1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            arr[++top]=s[i];
        }
        else{
            if(top==-1){
                return false;
            }
            if((s[i]==')' && arr[top]!='(') || (s[i]=='}' && arr[top]!='{') || (s[i]==']' && arr[top]!='[')){
                return false;
            }
            top--;
        }
    }
    return top==-1;
}