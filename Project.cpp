#include <algorithm>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cpr/cpr.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque> 
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
#include <cwchar>

int main() {
	cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/accept:text/html")/*,
		cpr::Header({"accept", "text/html"})*/);
	std::cout << r.text << "\n";
}
