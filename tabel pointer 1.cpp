#include <iostream>
using namespace std;
int main ()
{
	int a = 0, b = 0, c = 0; 
    int *p1 = 0, *p2 = 0, *p3 = 0;

	
	a = 10;
	cout<<"\na = 10"<<endl;
	cout <<"a = " <<a<< endl;
	b = 15;
	cout<<"\nb = 15"<<endl;
	cout <<"b = " <<b<< endl;
	c = 27;
	cout<<"\nc = 27"<<endl;
	cout <<" c = " <<c<< endl;
	p1 = &a;
	cout<<"\np1 = &a"<<endl;
	cout<<"&a = "<<&a<< endl;
	cout<<" p1 = "<<p1<< endl;
	p2 = &b;
	cout<<"\np2 = &b"<<endl;
	cout<<"&b = "<<&b<< endl;
	cout<<"p2 = "<<p2<< endl;
	*p1 = c;
	cout<<"\np1 = c"<<endl;
	cout <<"c = " <<c<< endl;
	cout <<"*p1 = " <<*p1<< endl;
	a = *p2;
	cout<<"\na = *p2"<< endl;
	cout<<"*p2 = "<<*p1<< endl;
	cout<<"a = "<<a<< endl;
	b = 6;
	cout<<"\nb = 6"<< endl;
	cout<<"b = "<<b<< endl;
	p3 = &b;
	cout<<"\np3 = &b"<<endl;
	cout <<"&b = " <<&b<< endl;
	cout <<"p3 = " <<*p3<< endl;
	p3 = &c;
	cout<<"\np3 = &c"<<endl;
	cout <<"&c = " <<&c<< endl;
	cout <<"p3 = " <<*p3<< endl;
	*p1 = *p3;
	cout<<"\n*p1 = *p3"<<endl;
	cout <<"*p3 = " <<*p3<< endl;
	cout <<"*p1 = " <<*p1<< endl;
    
return 0;
}   