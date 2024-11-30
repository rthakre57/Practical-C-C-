#include <iostream>
#include <cmath>  // For power function

int main() {
    float radius;
    const float PI = 3.14;

    // Input the radius (floating-point number with two decimal places)
    std::cout << "Enter the radius of the circle/sphere: ";
    std::cin >> radius;

    // Calculate the area of the circle
    float circleArea = PI * pow(radius, 2);
    
    // Calculate the surface area of the sphere
    float sphereSurfaceArea = 4 * PI * pow(radius, 2);
    
    // Calculate the volume of the sphere
    float sphereVolume = (4.0 / 3.0) * PI * pow(radius, 3);
    
    // Output the results
    std::cout << "Area of the circle: " << circleArea << std::endl;
    std::cout << "Surface area of the sphere: " << sphereSurfaceArea << std::endl;
    std::cout << "Volume of the sphere: " << sphereVolume << std::endl;

    return 0;
}



Enter the radius of the circle/sphere: 5
Area of the circle: 78.5
Surface area of the sphere: 314
Volume of the sphere: 523.333


=== Code Execution Successful ===
