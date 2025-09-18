#include	<iostream>
#include	<Windows.h>
#include "side.h"
using namespace std;

//#include	<>

int main()
{
	cout << "enter_q";
	int q; cin >> q;
	squad(q);
							//test str print
	system("pause");
	cout << "hello happy world\n";

	cin.get();				//press to continue

	//Sleep(1000);			//time delay

	string ss = "Ddddd";
	cout << ss;				//no line change
	cout << ss << endl;		//changeline
	cout << ss << endl;		//changeline

	cin.get();

		int sum1 = 10;						//test ein
		int sum2 = 20;
		cout << sum1 + sum2 << endl;

	cin.get();

	for (size_t i = 0; i < 20; i++)			//count to 20
	{
		Sleep(125);
		cout << i	+	1 << endl;

	}
	int x;									//squad
	cout << "enter a num:"; cin >> x;
	cin.get();
	cout << "you enter:" << x << endl;
	cout << "its square is:" << x * x << endl;

	cin.get();	

	int a;
	int b;
	cout << "enter a num:"; cin >> a;
	cout << "enter another num:"; cin >> b;
	cin.get();
	cout << "you enter:" << a << " and " << b << endl;
	cout << "their sum is:" << a + b << endl;
	cin.get();
	cout << "their product is:" << a * b << endl;
	cin.get();
	
	int c; cout << "enter a num:"; cin >> c;
	cin.get();	
	if (c % 2 == 0)
	{
		cout << "you enter:" << c <<"是偶数" <<endl;
	}
	else
	{
		cout << "you enter:" << c << "是奇数" << endl;
	}

	for (size_t i = 0; i < 100; i++)
	{

	}




	return 0;
	}