#include<iostream> 
using namespace std; 
  
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
    int n = 1;
	int f=fib(n); 
    while(f<1000){
    	cout <<f<<" "; 
    	n++;
    	f=fib(n);
	}
	system("pause>n");
    return 0; 
}
