#include<stdio.h>

int main()
{

	float radius,height,Surface_area_of_the_cylindr,Volume_of_the_cylinder;
	
	
	printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    
    
	
	printf("Enter the Height of the circle:");
	scanf("%f",&height);
	
	
	
	Surface_area_of_the_cylindr = 2*3.14* radius* (radius + height);
	Volume_of_the_cylinder = 3.14*radius*radius*height;
	
	
	
	printf("Surface area of the cylinder: %.2f\n",Surface_area_of_the_cylindr);
	printf("Volume of the cylinder: %.2f",	Volume_of_the_cylinder);
	
	return 0;
	
}
