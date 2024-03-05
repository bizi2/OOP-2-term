#include "ctime.h"
int main() {
	CTime t1;
	CTime t2(3, 6, 15);
	CTime t3(t2);
	return 0;
}