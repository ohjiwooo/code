#include<stdio.h>
#include<iostream>

using namespace std;

int fibo(int n) {


	if (n == 1 || n == 2) {
		return 1;

	}
	else return (fibo(n - 1) + fibo(n - 2));

}


int main() {
	int n;


	printf("n: ");
	cin >> n;
	printf("\n��:%d", fibo(n));

}