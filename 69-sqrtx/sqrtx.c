int mySqrt(int x) {
    int s=0,e=x;
    long int mid;
    int ans;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid==x){
            ans=mid;
            break;
        }
        if(mid*mid<x){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}