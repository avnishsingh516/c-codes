#include <bits/stdc++.h> 
using namespace std; 
// Function, to evaluate the Pythagoras triplet 
// with includes 'n' if possible 
int main() 
{ 
	long int n;
	cin>>n;

	if (n == 1 || n == 2) 
		printf("No Pythagoras Triplet exists"); 

	else if (n % 2 == 0) { 

	// Calculating for even case 
		long long int var = 1 * n * n / 4; 
		cout<<"Pythagoras Triplets exist";  
		cout<< n<<" "<< var - 1<<" "<< var + 1; 
	} 

	else if (n % 2 != 0) { 
        // Calculating for odd case 
		long long int var = 1 * n * n + 1; 
		cout<<"Pythagoras Triplets exist"; 
		cout<< n<<" "<< var / 2 - 1<<" "<< var / 2; 
	}
	return 0; 
} 