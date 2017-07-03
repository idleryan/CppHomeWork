#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstring>
#include <windows.h>
#include <direct.h>
#include <math.h>
#include <string>
#include "FileFolder.h"

using namespace std;

int main(void)
{
	FileFolder SetFolder;

	SetFolder.getUser();
	SetFolder.getProj();
	SetFolder.getLot();
	SetFolder.getWafer();
	SetFolder.getDieX();
	SetFolder.getDieY();
	SetFolder.getUsage();
	SetFolder.Folderadd();

return 0;
}

