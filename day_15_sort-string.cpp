#include <iostream>
#include <string>

using namespace std;

string sort_characters(string text) {

	bool flag;
	char ch;

	do
	{
		flag = false;

		for (int x = 0; x < text.length() - 1; x++)
		{
			if (text[x] > text[x + 1])
			{
				ch = text[x];
				text[x] = text[x + 1];
				text[x + 1] = ch;
				flag = true;
			}
		}
	} while (flag);

	// Remove spaces
	string str;
	for (int y = 0; y < text.length(); y++)
	{
		if (text[y] != ' ')
		{
			str.push_back(text[y]);
		}
	}

	return str;
}

int main() {

	cout << "Original text: python \nSorted text: ";
	cout << sort_characters("python") << endl;
	return 0;

}
