// Recursive function to calculate a^b (a raised to the power b)
int power(int a, int b) {
    // Base case: any number to the power 0 is 1
    if (b == 0)
        return 1;

    // Recursively compute a^(b/2)
    int tmp = power(a, b / 2);

    // If exponent is even:
    //   a^b = (a^(b/2)) * (a^(b/2)) = tmp * tmp
    if (b % 2 == 0)
        return tmp * tmp;

    // If exponent is odd:
    //   a^b = a * (a^((b-1)/2)) * (a^((b-1)/2)) = a * tmp * tmp
    else
        return a * tmp * tmp;
}

//or in terms of binary bits non recursive-

ll modPow(ll a, ll b, ll &m) {
    ll result = 1;
//a is base, b is power, m is constant modulo
    a %= m;
    while (b > 0) {
        if (b & 1) { //if odd
            result = result * a;
        }
        a = (a * a) // if odd then it will become a*a*a otherwise a*a if even;
        b >>= 1;//shifting bits to the right aka dividing by 2
    }
    return result;
}
