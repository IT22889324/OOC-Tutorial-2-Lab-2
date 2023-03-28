#include <iostream>
using namespace std;

int area(int x, int y); 

struct Rectangle {
    int length;
    int width;
};

int main() {
    int lawnArea;
    
    struct Rectangle yard;
    struct Rectangle house;
    
    cout << "Enter Yard Length : ";
    cin >> yard.length;
    cout << "Enter Yard Width : ";
    cin >> yard.width;
	cout<< endl;
	
	cout << "Enter Yard Length : ";
    cin >> house.length;
    cout << "Enter Yard Width : ";
    cin >> house.width;
    cout<< endl;

    lawnArea = area(yard.length, yard.width) - area(house.length, house.width);

    cout << "Area of the Lawn area is (green) = " << lawnArea;

    return 0;
}

int area(int x, int y) 
{
    return x * y;
}

