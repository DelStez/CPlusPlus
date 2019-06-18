#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
bool simple(size_t a, size_t &count) {
	size_t i;
	if (a == 2) { count++; return 1; }
	if (a == 0 || a == 1 || a % 2 == 0) return 0;
	for (i = 3; i*i <= a && a % i; i += 2);
	return i * i > a;
}
 int SuperSimple