#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double triangularArea(double b, double h);
double quarterArea(double r);
double semiArea(double r);
double circleArea(double r);
double rectangleArea(double l, double h);
double triangularVolume(double b, double h, double w);
double quarterVolume(double r, double w);
double semiVolume(double r, double w);
double circleVolume(double r, double w);
double rectangleVolume(double l, double h, double w);
double triangleX(double b);
double widthCentroid(double w);
double circleXY(double r);
int main()
{
	int cnt, num = 0, counter;
	double volume, area, x, y, w, g, f, h;
	double arrayArea[10], total = 0;/*add multiple arrays*/
	string shape, answer, a;
	cout << "Do you want to find area or volume? ";
	cin >> answer;
	if (answer == "area")
	{
		cout << "How many parts in machine? ";
		cin >> cnt;
		while (num < cnt) /*when the loop for quarter circle completes then the program recognizes that it has inputed a value, ok i think i did it*/
		{
			
			cout << " - Enter shape (quarter-circle, semi-circle, circle, triangle, rectangle): ";
			cin >> shape;
			if (shape == "quarter-circle")
			{
				if (cnt != 1) /*if the amount of parts does not equal 1 ask user how many quarter circles they wish to enter*/
				{
					cout << "How many quarter-circles do you wish to enter? ";
					cin >> counter;
					for (int j = 0; j < counter; j++)
					{
						cout << "Enter radius: ";
						cin >> x;
						area = quarterArea(x);
						g = circleXY(x);
						cout << "Quarter-Circular area is: " << area << " | " << "Centroid of radius is: " << g << endl;
						arrayArea[j] = { area };
						total += arrayArea[j];
					}
						
						/* create array for each time the value is inputed*/
					/*enter the radius for next quarter circle if this is true*/
					/*i have to be able to stop the program if the amount of parts equals the amount of desired quarter circles 
					and if there are 3 parts and only 2 quarter circles it has to break when it hits two and go on with the loop*/
					/*if the amount of quarter-circle is less than the amount of parts then do the the calculation and break program*/
				}
				if (cnt == 1) /*if the amount of parts entered is equal to 1 then do normal process*/
				{
					cout << "Enter radius: ";
					cin >> x;
					area = quarterArea(x);
					g = circleXY(x);
					cout << "Quarter-Circular area is: " << area << " | " << "Centroid of radius is: " << g << endl;
				}
				num++;
			}
			if (shape == "semi-circle")
			{
				if (cnt != 1) /*if the amount of parts does not equal 1 ask user how many quarter circles they wish to enter*/
				{
					cout << "How many quarter-circles do you wish to enter? ";
					cin >> counter;
					for (int j = 0; j < counter; j++)
					{
						cout << "Enter radius: ";
						cin >> x;
						area = semiArea(x);
						g = circleXY(x);
						cout << "Semi-Circular area is: " << area << " | " << "Centroid of radius is: " << g << endl;
						arrayArea[j] = { area };
						total += arrayArea[j];
					}
					
				}
				if (cnt == 1) 
				{
					cout << "Enter radius: ";
					cin >> x;
					area = semiArea(x);
					g = circleXY(x);
					cout << "Semi-Circular area is: " << area << " | " << "Centroid of radius is: " << g << endl;
				}
				num++;
			}
			if (shape == "circle")
			{
				if (cnt != 1)
				{
					cout << "How many circles do you wish to enter? ";
					cin >> counter;
					for (int j = 0; j < counter; j++)
					{
						cout << "Enter radius: ";
						cin >> x;
						area = circleArea(x);
						g = circleXY(x);
						cout << "Circular area is: " << area << " | " << "Centroid of radius is: " << g << endl;
						arrayArea[j] = { area };
						total += arrayArea[j];
					}
					
				}
				if (cnt == 1)
				{
					cout << "Enter radius: ";
					cin >> x;
					area = circleArea(x);
					g = circleXY(x);
					cout << "Circular area is: " << area << " | " << "Centroid of radius is: " << g << endl;
				}
				num++;
			}
			if (shape == "triangle")
			{
				if (cnt != 1)
				{
					cout << "How many triangles do you wish to enter? ";
					cin >> counter;
					for (int j = 0; j < counter; j++)
					{
						cout << "Enter base: ";
						cin >> x;
						cout << "Enter height: ";
						cin >> y;
						g = triangleX(x);
						f = triangleX(y);
						area = triangularArea(x, y);
						cout << "Triangular area is: " << area << " | " << "Centroid of base is: " << g << " | " << "Centroid of height is: " << f << endl;
						arrayArea[j] = { area };
						total += arrayArea[j];
					}
					
				}
				if (cnt == 1)
				{
					cout << "Enter base: ";
					cin >> x;
					cout << "Enter height: ";
					cin >> y;
					g = triangleX(x);
					f = triangleX(y);
					area = triangularArea(x, y);
					cout << "Triangular area is: " << area << " | " << "Centroid of base is: " << g << " | " << "Centroid of height is: " << f << endl;
				}
				num++;
			}
			if (shape == "rectangle")
			{
				if (cnt != 1)
				{
					cout << "How many rectangles do you wish to enter? ";
					cin >> counter;
					for (int j = 0; j < counter; j++)
					{
						cout << "Enter length: ";
						cin >> x;
						cout << "Enter height: ";
						cin >> y;
						area = rectangleArea(x, y);
						g = widthCentroid(x);
						f = widthCentroid(y);
						cout << "Rectangular area is: " << area << " | " << "Centroid of length is: " << g << " | " << "Centroid of height is: " << f << endl;
						arrayArea[j] = { area };
						total += arrayArea[j];
					}
					
				}
				if (cnt == 1)
				{
					cout << "Enter length: ";
					cin >> x;
					cout << "Enter height: ";
					cin >> y;
					area = rectangleArea(x, y);
					g = widthCentroid(x);
					f = widthCentroid(y);
					cout << "Rectangular area is: " << area << " | " << "Centroid of length is: " << g << " | " << "Centroid of height is: " << f << endl;
				}
				num++;
			}
			num++;
			
		}
		cout << "Here is the Area summation of the parts: " << total << endl;
		cout << endl;
		cout << "ATTENTION: Remember to subtract these values with the length of the machine with respect to its axis! " << endl;
		
	}
	else
	{
		cout << "How many parts in machine? ";
		cin >> cnt;
		for (num = 0; num<cnt; num++)
		{
			cout << " - Enter shape (quarter-circle, semi-circle, circle, triangle, rectangle): ";
			cin >> shape;
			if (shape == "quarter-circle")
			{
				cout << "Enter radius: ";
				cin >> x;
				cout << "Enter width: ";
				cin >> w;
				volume = quarterVolume(x, w);
				g = circleXY(x);
				f = widthCentroid(w);
				cout << "Quarter-Circular volume is: " << volume << " | " << "Centroid of radius is: " << g << " | " << "Centroid of width is: " << f << endl;
			}
			if (shape == "semi-circle")
			{
				cout << "Enter radius: ";
				cin >> x;
				cout << "Enter width: ";
				cin >> w;
				g = circleXY(x);
				f = widthCentroid(w);
				volume = semiVolume(x, w);
				cout << "Semi-Circular volume is: " << volume << " | " << "Centroid of radius is: " << g << " | " << "Centroid of width is: " << f << endl;
			}
			if (shape == "circle")
			{
				cout << "Enter radius: ";
				cin >> x;
				cout << "Enter width: ";
				cin >> w;
				volume = circleVolume(x, w);
				g = circleXY(x);
				f = widthCentroid(w);
				cout << "Circular volume is: " << volume << " | " << "Centroid of radius is: " << g << "Centroid of width is: " << f << endl;
			}
			if (shape == "triangle")
			{
				cout << "Enter base: ";
				cin >> x;
				cout << "Enter height: ";
				cin >> y;
				cout << "Enter width: ";
				cin >> w;
				volume = triangularVolume(x, y, w);
				g = triangleX(x);
				f = triangleX(y);
				h = widthCentroid(w);
				cout << "Triangular volume is: " << volume << " | " << "Centroid of base is: " << g << " | " << "Centroid of height is: " << f << " | " << "Centroid of the width is: " << h << endl;
			}
			if (shape == "rectangle")
			{
				cout << "Enter length: ";
				cin >> x;
				cout << "Enter height: ";
				cin >> y;
				cout << "Enter width: ";
				cin >> w;
				volume = rectangleVolume(x, y, w);
				g = widthCentroid(x);
				f = widthCentroid(y);
				h = widthCentroid(w);
				cout << "Rectangular volume is: " << volume << " | " << "Centroid of length is: " << g << " | " << "Centroid of height is: "
					<< f << " | " << "Centroid of width is: " << h << endl;
			}
		}
		cout << endl;
		cout << "ATTENTION: Remember to subtract these values with the length of the machine with respect to its axis! " << endl;
	}
	/*ask what kind of shape it is: circle, half circle, quarter circle, rectangle, triangle, paraboloid.*/

	/*ask if they want to find the area or the volume*/

	/*give length width and height of shape with respect to the axis*/
	
	return 0;
}
double triangularArea(double b, double h)
{
	double t;
	t = (b*h) / 2;
	return t;
}
double quarterArea(double r)
{
	double pi = 3.14159265358979323846264338328;
	double q;
	q = pi * pow(r, 2)*0.25;
	return q;
}
double semiArea(double r)
{
	double pi = 3.14159265358979323846264338328;
	double q;
	q = pi * pow(r, 2)*0.5;
	return q;
}
double circleArea(double r)
{
	double pi = 3.14159265358979323846264338328;
	double q;
	q = pi * pow(r, 2);
	return q;
}
double rectangleArea(double l, double h)
{
	double r;
	r = l * h;
	return r;
}
double triangularVolume(double b, double h, double w)
{
	double t;
	t = b * h * 0.5 * w;
	return t;
}
double quarterVolume(double r, double w)
{
	double pi = 3.14159265358979323846264338328;
	double q;
	q = pi * pow(r, 2)*0.25*w;
	return q;
}
double semiVolume(double r, double w)
{
	double pi = 3.14159265358979323846264338328;
	double q;
	q = pi * pow(r, 2)*0.5*w;
	return q;
}
double circleVolume(double r, double w)
{
	double pi = 3.14159265358979323846264338328;
	double q;
	q = pi * pow(r, 2)*w;
	return q;
}
double rectangleVolume(double l, double h, double w)
{
	double r;
	r = l * w*h;
	return r;
}
double triangleX(double b)
{
	double x;
	x = b / 3;
	return x;
}
double widthCentroid(double w)
{
	double r;
	r = w / 2;
	return r;
}
double circleXY(double r)
{
	double z, pi = 3.14159265358979323846264338328;
	z = (4 * r) / (3 * pi);
	return z;
}
