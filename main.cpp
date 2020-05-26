#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine eng(seed);

using namespace std;
int main ()
{

    int n=11;
    std::vector<int> a;

    a.reserve(64);
    a.resize(n);
    for (int i=0;i<n;i++){
    	a[i]=i+1;
    }
    for (int i=0;i<n;i++){
    	cout<<a[i]<<"   ";
    }
    cout<<"\n";
	std::shuffle(std::begin(a), std::end(a), eng);
    for (int i=0;i<n;i++){
    	cout<<a[i]<<"   ";
    }
    cout<<"\n";
    return 0;
}
