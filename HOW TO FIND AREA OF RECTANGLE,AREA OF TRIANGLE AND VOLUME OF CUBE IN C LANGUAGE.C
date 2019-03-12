#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,h,area_of_a_rectangle,volume_of_cube,area_of_triangle;
	clrscr();
	printf("\n enter l:");
	scanf("%d",&l);

	printf("\n enter b:");
	scanf("%d",&b);

	printf("\n enter h:");
	scanf("%d",&h);
	 // formula
	area_of_a_rectangle=l*b; //area of a rectangle.(area of a rectangle=l*b)

	volume_of_cube=l*b*h; //volume of cube.(volume of cube=l*b*h)

	area_of_triangle=l*b/2; //area of triangle.(Area=(l*b)/2)



	printf("\nArea Of a Rectangle:::%d",area_of_a_rectangle);
	printf("\nVolume Of a Cube:::%d",volume_of_cube);
	printf("\nArea Of a Triangle:::%d",area_of_triangle);

	getch();
				 // end program

}
