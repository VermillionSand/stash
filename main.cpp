#include<iostream>
#include<string>
#include"stash.h"
using namespace std;
int main() {
	Stash intStash(sizeof(int));
	for(int i = 0; i< 30; i++)
		intStash.add(&i);
	for(int j = 0; j < intStash.count(); j++)
		cout << "intStash.fetch("<< j<<") = "
		<< *(int*)intStash.fetch(j) << endl;
	const int bufsize = 80;
	Stash stringStash(sizeof(char) * bufsize);
	string mssg("cos tam");
	cout << mssg << endl;
	char* c=(char*)mssg.c_str();
	cout << c << endl;
	stringStash.add((char*)mssg.c_str());
	cout << (char*)stringStash.fetch(0) << endl;
	cout << sizeof(int) << " " << sizeof(char) <<endl;
}
