#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <new>
using namespace std;

void dotestcase(int N, int K)
{
	int count=0;
	int *arr = new int[N];
	for(int i=0;i<N;i++)
	{
		cin >> arr[i];
		if(arr[i]<=0)
		{
			count++;
		}
	}
	if(count<K)
	{
		cout << "YES" << endl;
	}else
	{
		cout << "NO" << endl;
	}

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int T, N, K;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> N >> K;
		dotestcase(N,K);
	}
    return 0;
}
