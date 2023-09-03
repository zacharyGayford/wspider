#include <iostream>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>

using namespace curlpp::options;

int main () {
	
	try {

		curlpp::Cleanup curlCleanup;
		curlpp::Easy request;

		request.setOpt<Url> ("http://example.com");
		request.perform ();

	} catch (const curlpp::RuntimeError& e) {
		std::cerr << e.what () << std::endl;
	} catch (const curlpp::LogicError& e) {
		std::cerr << e.what () << std::endl;
	}

	std::cout << "hello world" << std::endl;

	curlpp::terminate ();
	return EXIT_SUCCESS;

}
