#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
	system("color 1e");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tTRYING TO RE-ENABLE CMD.";
	Sleep(1);
	cout<<".";
		Sleep(1000);
	cout<<".";
		Sleep(1000);
	cout<<".";
		Sleep(1000);
	cout<<".";
        Sleep(1000);
	cout<<".";
		Sleep(1000);
	cout<<".";
		Sleep(1000);
	cout<<".";
	Sleep(5000);
	system("cls");

	system("reg add HKEY_CURRENT_USER\\Software\\Policies\\Microsoft\\Windows\\System \/v DisableCMD \/t REG_DWORD \/d 0 \/f");
	Sleep(3000);
	ifstream infile;
		ofstream file;
		system("cls");
		system("color A0");
cout<<"\n\n\n\n\n";
cout<<"\t***********************************************************************************************************\n";
cout<<"\t***********************************************************************************************************\n";
cout<<"\t**                                                                                                       **\n";
cout<<"\t**                                                                                                       **"<<endl;
cout<<"\t**                                            CMD ENABLED SUCCESSFULLY!!                                 **"<<endl;
cout<<"\t**                                                                                                       **"<<endl;
cout<<"\t**                                                                                                       **"<<endl;
cout<<"\t**                                                                                                       **"<<endl;
cout<<"\t**                                                                                                       **\n";
cout<<"\t******************************************************************************************************** **\n";
cout<<"\t***********************************************************************************************************\n";


}
