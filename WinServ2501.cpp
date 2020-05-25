#include <iostream>
#include <stdio.h>
#include <string>

#include "pch.h"
#include "server.h"
#include "client.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 2 || (string)(argv[1]) == "server") {
		cout << "Sever mode on\n";
		return server();
	}
	else if ((string)(argv[1]) == "--client") {
		cout << "Client mode on\n";
		return client();
	}
	else if ((string)(argv[1]) == "service") {
		cout << "Service mode on\n";
	}
}