#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	/*ofstream fileOne("index.txt", ios_base::out);
	if (fileOne.is_open()) {
		fileOne << "Zaa4eem 4ydick";
		fileOne.close();
	}
	*/

	ifstream fileTwo("index.txt");
	if (fileTwo.is_open()) {
		//string temp;
		//fileTwo >> temp;
		char temp[100];
		fileTwo.getline(temp, 100);
		cout << temp << endl;
		fileTwo.close();
	}

	return 0;
}