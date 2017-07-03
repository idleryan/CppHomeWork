#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstring>
#include <windows.h>
#include <direct.h>
#include <math.h>
#include <string>

using namespace std;

int main(void)
{
	string FilePath;
	string User = "Ouyang";
	string FileFolder = "ESF3";
	string LotNumber = "UMC28";
	string Usage ="";
	int WaferNumber = 1, DieX = 1, DieY = 1;
    char TempPath[260];
    char Info[260] = "E:\\Sagittarius\\%s\\%s\\%s\\W%d\\(%d,%d)\\%s\\";
//    sprintf(TempPath,Info,User.c_str(),FileFolder.c_str(),LotNumber.c_str(),WaferNumber,DieX,DieY);
    if (Usage != ""){
        sprintf(TempPath,Info,User.c_str(),FileFolder.c_str(),LotNumber.c_str(),WaferNumber,DieX,DieY,Usage.c_str());
    }    else{
        sprintf(TempPath,Info,User.c_str(),FileFolder.c_str(),LotNumber.c_str(),WaferNumber,DieX,DieY,"\\");
    }

    printf("Push");

for(int i=4; i<strlen(TempPath); i++){
    if (TempPath[i] != '\\') continue;
    TempPath[i]=0;
    mkdir (TempPath);
    TempPath[i]='\\';
}

FilePath.assign(TempPath);
printf("%s",FilePath.c_str());

}

