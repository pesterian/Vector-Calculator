#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main()
{

cout << "Input the size of your vector";
int  x, y;
cin >> x;
vector<double> v;
for (int i = 0; i < x; i++) {
cout << "Enter num " << i + 1 << endl;
cin >> y;
v.push_back(y);
}


int  n;
vector<double> u;
for (int i = 0; i < x; i++) {
cout << "Enter num " << i + 1 << "for second vector" << endl;
cin >> n;
u.push_back(n);
}


cout << "what operation would you like to preform? \n d: dot product \n n: norm of both \n u: unit vector of both \n m: distance betweem vectors \n o: check if they are orthoginal \n t: to get the angle between them ";
char o;

//do {
// cout << "enter a valid operartion.";
// cout << "what operation would you like to preform? \n d: dot product \n n: norm of both \n u: unit vector of both \n m: distance betweem vectors \n o: check if they are orthoginal ";
cin >> o;
//} while (o != 'd' || o != 'n' || o != 'u' || o != 'm' || o != 'o');

vector<double> r;
double b = 0;
double a = 0;
double c = 0;
double d = 0;
switch (o) {

case 'd':
for (int i = 0; i < x; i++) {
   a = u[i] * v[i];
b = b + a;
}
cout << "Dot product is: " << b;
break;


case 'n':
for (int i = 0; i < x; i++)
a+= pow(v[i],2);
cout << "Norm of the first vector is: "<< sqrt(a);

for (int i = 0; i < x; i++)
b += pow(u[i], 2);
cout << "\n Norm of the first vector is: " << sqrt(b);
break;

case 'u':
for (int i = 0; i < x; i++)
b += pow(v[i], 2);
b = pow(sqrt(b), -1);

for (int i = 0; i < x; i++) {
v[i] *=b;
}
for (int i = 0; i < x; i++)
cout << v[i];

b = 0;

for (int i = 0; i < x; i++)
b += pow(u[i], 2);
b = pow(sqrt(b), -1);

for (int i = 0; i < x; i++) {
u[i] *= (double)b;
}
for (int i = 0; i < x; i++)
cout << u[i];

break;

case 'm':

for (int i = 0; i < x; i++)
r.push_back(v[i]-u[i]);

for (int i = 0; i < x; i++)
a += pow(r[i], 2);

cout << "Distance between them is: " << sqrt(a);
break;

case 'o':
for (int i = 0; i < x; i++) {
a = u[i] * v[i];
b = b + a;
}
if (b == 0)
cout << "yes, they are orthoginal";
else
cout << "they are not orthoginal";

break;

case 't':

for (int i = 0; i < x; i++) {
a = u[i] * v[i];
b = b + a;
}

for (int i = 0; i < x; i++)
c += pow(v[i], 2);


for (int i = 0; i < x; i++)
   d += pow(u[i], 2);



cout << "the angle between them is " << (acos(b / sqrt(d) * sqrt(c))) * (180 / 3.14159) << " degrees";

break;

default:
cout << "you didn't enter a valid operation, bye bye!";
}

}
