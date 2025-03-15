#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	long long int i = 0;
	long long int k = 1;
	const long long int NITR = 60000000000;

	const double PI = 3.14159265358979;
	double Pi = 0.0;

#pragma omp parallel for private(i) firstprivate(k) reduction(+:Pi)
	for (i = 0; i < NITR; ++i) {
		Pi = Pi + k * (1.0 / (2 * i + 1));
		k = -k;
	}

	cout << noshowpos << fixed << setprecision(10);
	cout << "PI by internal: " << PI << endl;
	cout << "PI by openmp: " << Pi * 4 << endl;


	return EXIT_SUCCESS;
}