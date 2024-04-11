#include<iostream>
using namespace std;



int main() {

	int n;

	cin >> n;

	int arr[n];

	for(int i=0; i<n; i++) {
		cin>> arr[i];
	}

	int s = 0;
	int d = 0;

	int i = 0;
	int j = n-1;

	for(int k=0; k<n; k++) {
		if(k%2 == 0) {
			if(arr[j] > arr[i]) {
			s += arr[j];
			j--;
		}

		else if(arr[j] < arr[i]) {
			s += arr[i];
			i++;
		}

		else {
			s += arr[i];
			
			}

		}

		else {

			if(arr[j] > arr[i]) {

				d += arr[j];
				j--;
			}

			else if(arr[j] < arr[i]) {
				s += arr[i];
				d++;
			}

			else {
				d += arr[i];
			}
		
		}

	}

	cout << s << " " << d;

	



	

	return 0;
}





