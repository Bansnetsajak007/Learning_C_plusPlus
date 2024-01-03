#include <iostream>
#include <cmath>
#include<string>

using namespace std;

double powerRule(double x, int n) {
    return n * pow(x, n - 1);
}

double productRule(double u, double u_prime, double v, double v_prime) {
    return u_prime * v + u * v_prime;
}

double sumRule(double u_prime, double v_prime) {
    return u_prime + v_prime;
}

double quotientRule(double u, double u_prime, double v, double v_prime) {
    return (u_prime * v - u * v_prime) / pow(v, 2);
}

double calculateDerivative(const string& expression) {
    // Basic cases:
    if (expression == "x") {
        return 1;
    } else if (isdigit(expression[0])) {
        return 0;
    } else if (expression.find("^") != string::npos) {  
        // Extract base and exponente
        size_t pos = expression.find("^");
        string base = expression.substr(0, pos);
        int exponent = stoi(expression.substr(pos + 1));
        return exponent * pow(calculateDerivative(base), exponent - 1);  // Recursive call for base
    } else {
        throw runtime_error("Unsupported expression type");
    }
}

int main() {
    double x;
    int choice;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "\nChoose the function to differentiate:\n";
    cout << "1. x^n\n";
    cout << "2. u(x) * v(x)\n";
    cout << "3. u(x) + v(x)\n";
    cout << "4. u(x) / v(x)\n";
    cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            cout << "Enter the value of n: ";
            cin >> n;
            double derivative = powerRule(x, n);
            cout << "The derivative of x^" << n << " is: " << derivative << endl;
            break;
        }
        case 2: {
                
            string u, v;
            cout << "Enter the expression for u(x): ";
            cin >> u;  // Assuming simple expressions for now
            cout << "Enter the expression for v(x): ";
            cin >> v;

            double u_prime = calculateDerivative(u);
            double v_prime = calculateDerivative(v);

            double derivative = productRule(u, u_prime, v, v_prime);
            cout << "The derivative of u(x) * v(x) is: " << derivative << endl;
            break;
        }
        case 3: {

            double u, v;
            cout << "Enter the expression for u(x): ";
            cin >> u; 
            cout << "Enter the expression for v(x): ";
            cin >> v;
            double u_prime = calculateDerivative(static_cast<double>(u));
            double v_prime = calculateDerivative(static_cast<double>(u));
            double derivative = sumRule(u_prime, v_prime);
            cout << "The derivative of u(x) + v(x) is: " << derivative << endl;
            break;
        }
        case 4: {
            double u, v;
            cout << "Enter the expression for u(x): ";
            cin >> u;
            cout << "Enter the expression for v(x): ";
            cin >> v;
            double u_prime = calculateDerivative(static_cast<double>(u));
            double v_prime = calculateDerivative(static_cast<double>(u));

            double derivative = quotientRule(u, u_prime, v, v_prime);
            cout << "The derivative of u(x) / v(x) is: " << derivative << endl;
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
