#pragma once
#include <string>


using std::string;

class Soundex
{
public:
	string encode(const string& word) const;
private:
	string head(const string& word) const;
	string tail(const string& word) const;
	string encodedDigits(const string& word) const;
	bool isComplete(const std::string& encoding) const;
	string zeroPad(const string& word) const;
public:
	string encodedDigit(char letter) const;
};

