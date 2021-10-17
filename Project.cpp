#include <cpr/cpr.h>
#include <iostream>
#include <string>

int main() {
	std::string heading;
	cpr::Response r = cpr::Get(cpr::Url("https://httpbin.org/html"),
		cpr::Header{ {"accept", "text/html"} });
	int beginHeading = r.text.find("<h1>") + 4;
	int endHeading = r.text.find("</h1>") - 1;
	heading = r.text.substr(beginHeading, endHeading - beginHeading);
	std::cout << heading << "\n";
}
