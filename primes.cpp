int sz = 1e5;
vector<int> primes, isPrime(sz + 1, 1);

void prec(){
	isPrime[0] = 0, isPrime[1] = 0;
	for(int i = 2;i <= sz; i++){
        if(isPrime[i])primes.push_back(i);
        
		for(int j = i + i; j <= sz; j+= i){
			isPrime[j] = 0;
		}
	}
}
