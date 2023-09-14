// This program customizes
//      the title bar,
//		the color of the cmp window,
//		prints a centered banner, and
//		prints my name in double quotes.
// Print My Name
// Programmer: Celia Ho
// Last Modified: Sept. 14, 2023 @ 7:08 PM

#include <iostream>
#include <print>
using namespace std;

int main()
{
	// System function call to change the text in the title bar
	system("title .          Print My Name     by C. Ho");

	// System function call to change the color of the cmp window
	system("color b1");

	cout << "\n"
	<< "\t This lab prints my name on the monitor \n"
	<< "\t          within double quotes \n"
	<< "\t                Lab #1 \n"
	<< "\t               by C. Ho \n\n\n"
	<< "\"Ho\" \n\n";

	system("pause");
	return 0;
}