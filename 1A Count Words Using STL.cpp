#include <iostream>
#include <string>
#include <cctype>

using std::cin, std::cout;
using std::string;
using std::isspace;

int main() 
{
	string exampleString;
	int wordCount = 0;
	
	cout << "Enter sentence: ";
	std::getline(cin, exampleString);

	for (auto itr = exampleString.begin(); itr < exampleString.end(); ++itr)
		if (!isspace(*itr) && (itr == exampleString.begin() || isspace(*(itr - 1))))
			++wordCount; 
	
	cout << "Number of words is: " << wordCount;

	return 0;
}
