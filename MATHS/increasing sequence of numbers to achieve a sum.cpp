void solve(int n , int l, int r, int sum){

    int num = sum/n;
    int rem = sum%n;
    for(int i=0;i<n;i++){
        int ai = num;
        if(rem){
            ai++;
            rem--;
        }
        cout<<ai<<" ";
    }   

    
}

#Note it doesn't matter what l,r is . If solution exists then this will give the right answer.
#aka if solution is there then sum/n will automatically be greater than or equal to l and max ai will be 
#less than or equal to r

#REFERENCE QUESTION-
https://codeforces.com/contest/369/problem/B
