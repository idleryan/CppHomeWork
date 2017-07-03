#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstring>
#include <windows.h>
#include <direct.h>
#include <math.h>
#include <string>

using namespace std;

class FileFolder
{
public:

	string getUser()
	{	cout << "Operator" << endl;
		cin >> User;
		return User;
	}
	string getProj()
	{
		cout << "Project" << endl;
		cin >> FileFolder;
		return FileFolder;
	}
	string getLot()
	{
		cout << "Lot" << endl;
		cin >> LotNumber;
		return LotNumber;
	}
	string getUsage()
	{
		cout << "Usage" << endl;
		cin >> Usage;
		return Usage;
	}
	int getWafer()
	{
		cout << "Wafer" << endl;
		cin >> WaferNumber;
		return WaferNumber;
	}
	int getDieX()
	{
		cout << "DieX" << endl;
		cin >> DieX;
		return DieX;
	}
	int getDieY()
	{
		cout << "DieY" << endl;
		cin >> DieY;
		return DieY;
	}

    string Folderadd()
    {
 //       char TempPath[260];
 //       char Info[260] = "E:\\Sagittarius\\%s\\%s\\%s\\W%d\\(%d,%d)\\%s";
   		sprintf(TempPath,Info,User.c_str(),FileFolder.c_str(),LotNumber.c_str(),WaferNumber,DieX,DieY,Usage.c_str());

  	    for(int i=4; i<strlen(TempPath); i++)
  	    {
  	    	if (TempPath[i] != '\\') continue;
  	    	TempPath[i]=0;
  	    	mkdir (TempPath);
  	    	TempPath[i]= '\\';
    	}
  	    FilePath.assign(TempPath);
  	    printf("%s",FilePath.c_str());
  	    return FilePath;
    };

private:
	string FilePath,User,FileFolder,LotNumber,Usage;
	int WaferNumber,DieX,DieY;
    char TempPath[260];
    char Info[260] = "E:\\Sagittarius\\%s\\%s\\%s\\W%d\\(%d,%d)\\%s";
};
