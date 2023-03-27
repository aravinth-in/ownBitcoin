#include <bits/stdc++.h>
using namespace std;
long totalPopulation = 8000000000; //as of now 2023
long totalBitcoin = 21000000,lostBitcoin = 4000000;
long availableBitcoin = totalBitcoin - lostBitcoin;
double bitcoinNeedToOwn = (double)availableBitcoin/(double)totalPopulation; // for 8 Billion People

int stageNumber = 1,twoExponent = 1;
int main() {
    cout<<stageNumber<<") "<<bitcoinNeedToOwn<<" Bitcoin"<<" for every "<<totalPopulation<<" people "<<"("<<twoExponent<<")"<<endl;
    
    for(int i = 0; i < 29; i++){
        bitcoinNeedToOwn = bitcoinNeedToOwn*2;
        totalPopulation = totalPopulation/2;
        stageNumber++;
        twoExponent = twoExponent*2;
        cout<<stageNumber<<") "<<bitcoinNeedToOwn<<" Bitcoin"<<" for every "<<totalPopulation<<" people "<<"("<<twoExponent<<")"<<endl;
    }
	return 0;
}
