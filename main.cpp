#include <iostream>
#include <errno.h>
#include <cstring>

#include "prinetdiskclientpi.h"

using namespace std;

int main(int argc, char *argv[])
{

	priNetDiskClientPI  test("Boa");
	test.startClient("127.0.0.1" , 8888);
	test.startClient(test.OclientIP,test.OclientPort);
	test.startServer();
	return 0;
}
