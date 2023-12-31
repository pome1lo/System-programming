#ifdef _WIN64
#pragma comment(lib, "../x64/debug/OS11_HTAPI.lib")
#else
#pragma comment(lib, "../debug/OS11_HTAPI.lib")
#endif

#include <string>
#include <sstream>
#include "../OS11_HTAPI/pch.h"
#include "../OS11_HTAPI/HT.h"

using namespace std;

string intToString(int number);

int main(int argc, char* argv[])
{
	try 
	{
		ht::HtHandle* ht = ht::open(L"test.ht", true);
		//ht::HtHandle* ht = ht::open(L"../storage/HTspace.ht", true);
		if (ht)
			cout << "*# Open: success" << endl;
		else
			throw "*# Open: error";

		while (true) {
			int numberKey = rand() % 50;
			string key = intToString(numberKey);
			cout << key << endl;

			ht::Element* element = new ht::Element(key.c_str(), key.length() + 1);
			if (ht::removeOne(ht, element))
				cout << "# Remove: success" << endl;
			else
				cout << "# Remove: error" << endl;

			delete element;

			Sleep(1000);
		}
	}
	catch (const char* msg) 
	{
		cout << msg << endl;
	}
}

string intToString(int number)
{
	stringstream convert;
	convert << number;

	return convert.str();
}
