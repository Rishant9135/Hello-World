#include<iostream>

using namespace std;

void update(int , int);

main()
{
	int a = 10 , b = 20 ;
	int &i = a ;
	int &j = b ;
	
	cout<<endl<<"a :-> "<<a <<" , b :-> "<<b;
	
	cout<<endl<<"i :-> "<<i <<" , j :-> "<<j;
	
	update(a , j);
	i++;
	cout<<a<<endl<<i;
}
void update(int p , int q)
{
	p = p + q ;
	cout<<endl<<p;
}
