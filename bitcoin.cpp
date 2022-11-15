#include <iostream>
using namespace std;
long totalPopulation = 7600000000; //as of now 2022
double bitcoinNeedToOwn = 0.00276315789; // for 7.6 Billion People
int stageNumber = 1,twoExponent = 2;
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
