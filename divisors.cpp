int sz = 1e5;
vector<int> divi[sz + 5];

void prec(){
    for(int i = 1; i <= sz; i++){
        for(int j = i; j <= sz; j+=i){
            divi[j].push_back(i);
        }
    }
}
