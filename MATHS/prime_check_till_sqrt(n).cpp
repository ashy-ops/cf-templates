any composite number can be represented as product of two numbers-
a*b
three cases-
a=b, in that case both are sqrt(n)
a<sqrt(n) and b<sqrt(n)- then that is not possible as the product will not go upto n
a>sqrt(n) and b<sqrt(n) in this case it is possible however it shows that one of the numbers must be less that sqrt(n)
so just checking till sqrt(n) ensures that we can detect if that number is a prime or not!

Now if you want to print all prime factors you need to still loop till sqrt(n) but for every divisor less then sqrt(n)
there is a divisor that is  = n/that divisor as n = a*b if taking the third case.

but the best method to find all prime factors of a given number is-


========================================================
void printPrimes(vector<int> &primes,int n){
    if(n==1){
        return;
    }
    
    for(int i=2;i<=sqrt(n);i++){ //check till sqrt(n)
        while(n%i==0){
            n/=i;
        }
        primes.push_back(i);
    }
    if(n>1) primes.push_back(n); //in case n becomes 13 for eg 28/2 = 13 now we go till sqrt(13) which will not return 13 as a prime factor
//hence we check if n is >1 we add it as well(in case of 16 or 8 or 9 , n will become 1)
    
    return;
}
=========================================================
