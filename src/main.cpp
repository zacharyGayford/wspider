#include <iostream>
#include <curl/curl.h>

int main () {
	
	CURL* curl = curl_easy_init ();

	if (!curl) {
		std::cerr << "failed to init curl" << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "hello world" << std::endl;
	return EXIT_SUCCESS;

}
