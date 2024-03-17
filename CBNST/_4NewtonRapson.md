<!-- 4. float f(float x){ -->
    <!-- return x*x*x-9*x+1; -->
<!-- } -->
<!-- 5. float df(float x){ -->
    <!-- return 3*x*x-5; -->
<!-- } -->
          Newton rapson method 

1. read x0, e=0.003;
2. read n for iteration
3. for i<--0 to n
4. if (df(x)<e)
5. print-->Slope is two small and Exit it
6. x1=x0-(f(x0)/df(x0))
7. diff = false(x1-x0)
8. x0=x1
9. if(diff<e)
10. print x1 and exit
11. solution do not exist in given iteration... 























#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x * x - 4; // Example function: x^2 - 4
}

double df(double x) {
    return 2 * x; // Derivative of the example function: 2x
}

int main() {
    double x0 = 0;
    double e = 0.003;
    int n;

    cout << "Enter the number of iterations: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        if (fabs(df(x0)) < e) {
            cout << "Slope is too small. Exiting." << endl;
            return 1;
        }

        double x1 = x0 - (f(x0) / df(x0));
        double diff = fabs(x1 - x0);
        x0 = x1;

        if (diff < e) {
            cout << "Root found at x = " << x1 << " after " << i + 1 << " iterations." << endl;
            return 0;
        }
    }

    cout << "Solution does not exist within the given number of iterations." << endl;
    return 1;
}
