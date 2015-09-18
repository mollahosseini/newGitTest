#include <iostream>

// this is a new comment on this file
//using namespace std;
// This file is edited from GitHub

int main(){

	int *p=new int[15];
	delete[] p;
	for (int i=0; i<10; ++i)
	  cout << i ;	
	return 0;
}
