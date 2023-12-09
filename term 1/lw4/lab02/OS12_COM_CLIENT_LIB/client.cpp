#include <iostream>
#pragma comment(lib, "OS12_COM_LIB.lib")
#include "../OS12_COM_LIB/OS12.h"
using namespace std;

void main()
{
	try
	{
		OS12HANDEL h1 = OS12::Init();
		OS12HANDEL h2 = OS12::Init();

		cout << "Adder\n";
		cout << "Add(h1, 2, 3) = " << OS12::Adder::Add(h1, 2, 3) << "\n";

		cout << "Sub(h1, 2, 3) = " << OS12::Adder::Sub(h1, 2, 3) << "\n\n";

		cout << "Multiplier\n";
		cout << "Mul(h1, 2, 3) = " << OS12::Multiplier::Mul(h1, 2, 3) << "\n";

		cout << "Div(h1, 2, 3) = " << OS12::Multiplier::Div(h1, 2, 3) << "\n";

		OS12::Dispose(h1);
		OS12::Dispose(h2);

	}
	catch (int e) { std::cout << "OS12: error = " << e << "\n"; }
}