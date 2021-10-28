/*
MEASUREMENT
Base = b;
Length (comprimento) = l
Height (altura) = h
Width (largura) = w
Diagonal = d;
Radius (raio) = r

AREA
Triangle
EquilateralTriangle

Square 
Rectangle 
Parallelogram
Trapezoid
kite(Rhombus)
Circle

*/

#include <iostream>
#include <math.h>
#include <iomanip>
#define pi 3.141592

using namespace std;

int main ()
{
    float triangle, eqtriangle, square, rectangle, parallelogram, trapezoid, kite, circle;
    float l, h, w, b1, b2, d1, d2, c, a, r;
    char  po, Z, A, E, S, R, P, T, K, C; 
    
    cout << "Please, choose the letter of the polygon that you want to find the area: \n";
    cout << "T - Triangle \nE - Equilateral Triangle \nS - Square \nR - Rectangle \nP - Parallelogram \nZ - Trapezoid \nK - Kite \nC - Circle \n";
    cin >> po;

    switch (po){
    
    
        case 'T':
        triangle = T;
        cout << "Please, insert a value of the base: \n";
        cin >> l;
        cout << "Please, insert a value of the height: \n";
        cin >> h;
        triangle = (l*h)/2;
        cout << fixed << setprecision(2);
        cout << "Area of triangle: " << triangle << endl;
        break;

        case 'E':
        eqtriangle = E;
        cout << "Please, insert a value of the base: \n";
        cin >> l;
        eqtriangle = ((pow(l,2))*(pow(3,(1/2))))/4;
        cout << fixed << setprecision(2);
        cout << "Area of equilateral triangle: " << eqtriangle << endl;
        break;

        case 'S':
        square = S;
        cout << "Please, insert a value of the base: \n";
        cin >> l;
        square = pow(l,2);
        cout << fixed << setprecision(2);
        cout << "Area of square: " << square << endl;
        break;

        
        case 'R':
        rectangle = R;
        cout << "Please, insert a value of the length: \n";
        cin >> l;
        cout << "Please, insert a value of the height: \n";
        cin >> h;
        rectangle = l*h;
        cout << fixed << setprecision(2);
        cout << "Area of rectangle: " << rectangle << endl;
        break;

        case 'P':
        parallelogram = P;
        cout << "Please, insert a value of the length: \n";
        cin >> l;
        cout << "Please, insert a value of the height: \n";
        cin >> h;
        parallelogram = l*h;
        cout << fixed << setprecision(2);
        cout << "Area of parallelogram: " << parallelogram << endl;
        break;

        case 'Z':
        trapezoid = Z;
        cout << "Please, insert a value of the larger base: \n";
        cin >> b1;
        cout << "Please, insert a value of the minor base: \n";
        cin >> b2;
        cout << "Please, insert a value of the height: \n";
        cin >> h;
        trapezoid = ((b1+b2)*h)/2;
        cout << fixed << setprecision(2);
        cout << "Area of trapezoid: " << trapezoid << endl;
        break;

        case 'K':
        kite = K;
        cout << "Please, insert a value of the larger diagonal: \n";
        cin >> d1;
        cout << "Please, insert a value of the diagonal: \n";
        cin >> d2;
        kite = (d1*d2)/2;
        cout << fixed << setprecision(2);
        cout << "Area of kite: " << kite << endl;
        break;

        case 'C':
        circle = C;
        cout << "Please, insert a value to the radius (Radius = half the diameter): \n";
        cin >> r;
        circle = pi*(pow(r,2));
        cout << fixed << setprecision(2);
        cout << "Area of circle: " << circle << endl;
        break;
    }
return 0;
}