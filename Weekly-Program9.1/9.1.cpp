#include <cstdio>
#include <cmath>
using namespace std;

double a, b;
int main() {
	scanf_s("%lf %lf", &a, &b);
	printf("%lf", sqrt(a * a + b * b));
}