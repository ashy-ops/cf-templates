```cpp
ll modPow(ll a, ll b, ll m) {
    ll result = 1;
//a is base, b is power, m is constant modulo
    a %= m;
    while (b > 0) {
        if (b & 1) {
            result = result * a % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return result;
}
```
