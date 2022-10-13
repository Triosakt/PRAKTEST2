#include <iostream>
using namespace std;

int fungsikurang(int a, int b) {
	return a - b;
}

int fungsikali(int a,int b){
	return a * b;
	
}

int fungsitambah(int a,int b){
	return a + b;
}
int fungsibagi(int a,int b){
    return a/b;
}

int main(){
	int n, x;
	cin>>n>>x;
	
	cout<<fungsikurang(n, x)<<endl;
	cout<<fungsikali(n, x)<<endl;
	cout<<fungsitambah(n, x)<<endl;
	cout<<fungsibagi(n, x)<<endl;
	
	return 0;
	
}



	
