//Changing The Script Wont Makes You Coder [*_*]
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<tchar.h>
#include<urlmon.h>
#pragma comment(lib, "urlmon.lib")
using namespace std;
int main()
{
	string ipv4;
	cout << "\t\t\t\t                   ________________,       " << endl;
	cout << "\t\t\t\t                \-'       _____|           " << endl;
	cout << "\t\t\t\t                )   _ __/                  " << endl;
	cout << "\t\t\t\t               / `./_'_/                   " << endl;
	cout << "\t\t\t\t               |   |     Ip Grabber!       " << endl;
	cout << "\t\t\t\t               |   |  Coded by Hamza       " << endl;
	cout << "\t\t\t\t               `---'  (v1.0)               " << endl;
	cout << "\n\t\t\t\t This Tool will Find Your Public Ip Address" << endl;
	cout << "\nYour Ip Address is : ";
	HRESULT hr = URLDownloadToFile(NULL, _T("https://www.myexternalip.com/raw"), _T("ip.txt"), 0, NULL);
	ifstream ip;
	ip.open("ip.txt");
	if (ip.is_open())
	{
		getline(ip, ipv4);
		cout << ipv4<<endl;
	}
	else
	{
		cout << "File Opening Error!"<<endl;
	}
	ip.close();
	remove("ip.txt");
	system("PAUSE");
}