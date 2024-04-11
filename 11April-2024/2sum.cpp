#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;


	int arr[n];

	for (int i = 0; i <n; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr+n);

	int target;

	cin >> target;


	for (int i = 0; i <=n-2; ++i) {

		for (int j = i+1; j<=n-1; ++j)
		{
			if(arr[i] + arr[j] == target) {
				cout << arr[i] << " and "  << arr[j] << endl;
			}
		}
		
	}


	return 0;
}





