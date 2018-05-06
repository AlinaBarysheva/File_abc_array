#include<iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; ++i) {
		arr[i] = rand();
	}

	ofstream fout("abc.txt");

	for (int i = 0; i < n; ++i) {
		fout << arr[i] << ' ';
	}

	fout.close();

	ifstream fin("abc.txt");

	int i = 0;
	char *in_arr = new char[n];
	while (!fin.eof()) {
		fin >> in_arr[i];
		i++;
	}
	fin.close();

	fout.open("cba.txt");
	for (int i = 0; i < n; ++i) {
		if (i % 2 == 0) {
			fout << in_arr[i] << ' ';
		}
	}

	fout.close();

	fin.open("cba.txt");
	while (!fin.eof()) {
		string str;
		fin >> str;
		in_arr[i] = stoi(str);
		i++;
	}
	fin.close();

	for (int i = 0; i < n / 2; ++i) {
		cout << in_arr[i] << ' ';
	}

	system("pause");
	return 0;

}



