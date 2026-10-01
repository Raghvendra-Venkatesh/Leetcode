int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max=0;
    for(int i=0;i<accountsSize;i++){
        int su=0;
        for(int j=0;j<*accountsColSize;j++){
            su+=accounts[i][j];
        }
        if(max<=su){
            max=su;
        }
    }
    return max;
}