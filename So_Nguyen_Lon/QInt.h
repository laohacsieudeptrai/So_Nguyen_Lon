#pragma once
#include <iostream>
using namespace std;


class QInt {
private:
	unsigned int data[4];
public:
	QInt();
	~QInt();
	//unsigned int data[4];
	// input/output operators
	friend istream& operator>>(istream & in, QInt & N);
	friend ostream& operator<<(ostream & out, const QInt & N);

	// assignment operators
	QInt operator=(const QInt & N);

	// arithmetic operators
	QInt operator+(const QInt & N);
	QInt operator-(const QInt & N);
	QInt operator*(const QInt & N);
	QInt operator/(const QInt & N);

	// relational operators
	bool operator>(const QInt & N);
	bool operator<(const QInt & N);
	bool operator>=(const QInt & N);
	bool operator<=(const QInt & N);
	bool operator==(const QInt & N);

	// bitwise operators
	QInt operator&(const QInt & N);
	QInt operator|(const QInt & N);
	QInt operator^(const QInt & N);
	QInt operator~();
	
	// bitshift operators
	QInt operator<<(int K);
	QInt operator>>(int K);
	QInt rol(int K);
	QInt ror(int K);

	// base conversion

};
