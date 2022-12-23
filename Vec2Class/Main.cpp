#include<iostream>
#include"vec2.h"


int main(int argc,char* argv[])
{
	Vector2 v1(4, -9);
	Vector2 v2(50, 75);

	
	
	std::cout << "Distance of v1 to v2 = " << Vector2::Distance(v1,v2) << std::endl;


}