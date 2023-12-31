#include "tests.h"

namespace tests
{
	BOOL insertTest(ht::HtHandle* htHandle) {
		ht::Element* element = new ht::Element("test1", 6, "test1", 6);

		ht::insert(htHandle, element);
		if (ht::insert(htHandle, element)) return false;
		return true;
	}

	BOOL deleteTest(ht::HtHandle* htHandle) {
		ht::Element* element = new ht::Element("test2", 6, "test2", 6);

		ht::insert(htHandle, element);
		ht::removeOne(htHandle, element);

		if(ht::removeOne(htHandle, element)) return false;
		return true;
	}

	BOOL getTest(ht::HtHandle* htHandle) {
		ht::Element* insertEl = new ht::Element("test3", 6, "test3", 6);

		ht::insert(htHandle, insertEl);
		ht::Element* getEl = ht::get(htHandle, new ht::Element("test3", 6));

		if (getEl == NULL || insertEl->keyLength != getEl->keyLength || memcmp(insertEl->key, getEl->key, insertEl->keyLength) != NULL ||
			insertEl->payloadLength != getEl->payloadLength || memcmp(insertEl->payload, getEl->payload, insertEl->payloadLength) != NULL)
			return false;
		return true;
	}
}