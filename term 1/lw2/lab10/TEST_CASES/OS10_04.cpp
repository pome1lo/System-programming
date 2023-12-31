#include "tests.h"
using namespace std;
using namespace tests;

void main() {
	ht::HtHandle* ht = ht::create(1000, 3, 10, 256, L"./files/HTspace.ht");
	if (ht) cout << "* Create: success" << endl;
	else throw "* create: error";

	if (insertTest(ht)) cout << "# Insert test 1: success" << endl;
	else cout << "# Test #1: error" << endl;

	if (deleteTest(ht)) cout << "# Delete test 2: success" << endl;
	else cout << "# Test #2: error" << endl;

	if (getTest(ht)) cout << "# Get test 3: success" << endl;
	else cout << "# Test #3: error" << endl;

	if (ht != nullptr)
		if (ht::close(ht)) cout << "* close: success" << endl;
		else throw "* close: error";
}