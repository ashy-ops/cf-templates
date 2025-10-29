#define MOD (1 << 30)
#define MAX_N 1000000

vector<ll> divisors(MAX_N + 1, 1);  // Array to store the number of divisors

// Precompute divisors for all numbers from 1 to MAX_N
void computeDivisors() {
    for (ll i = 1; i <= MAX_N; i++) {
        for (ll j = i; j <= MAX_N; j += i) {
            divisors[j]++;  // Increment divisor count for each multiple of i
        }
    }
}

//generates no of divisors upto MAX_N
