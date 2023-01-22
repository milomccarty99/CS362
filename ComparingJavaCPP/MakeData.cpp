#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char** argv)
{
	if(argc != 2)
	{
		cout << "incorrect parameters given" << endl;
		return -1;
	}
	int length = atoi(argv[1]);
	ofstream file;
	file.open("data.txt");
	file << length << endl;
	for(int i = 0; i < length; i++)
	{
		file << rand() % 1000 << endl;
	}

	file.close();
}
