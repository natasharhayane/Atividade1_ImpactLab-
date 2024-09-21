#include <iostream>
#include <fstream>


using namespace std;

int main() {
	ofstream image;

	image.open("PPM_Imagens.ppm");
	
	if (image.is_open()) {
		image << "P3" << endl;
		image << "250 250" << endl;
		image << "255" << endl;
	}

	image.close();

	return 0;

}