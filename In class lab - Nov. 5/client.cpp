#include "StringWrapper.h"

int main()
{
	const string filename = "test.txt";
	string plaintext = "Hello, World!";

	StringWrapper stringWrapper(plaintext);

	string ciphertext = stringWrapper.encrypt();

	cout << "Ciphertext is: " << ciphertext << endl;

	auto letterToFrequencies = stringWrapper.getLetterFrequencyDistribution();


}