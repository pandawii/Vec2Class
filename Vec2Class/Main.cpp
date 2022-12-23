#include<iostream>
#include"vec2.h"


int main(int argc,char* argv[])
{
	Vector2 v1(4, -9);
	Vector2 v2(50, 75);

	
	
	std::cout << "angle of v1 to v2 = " << v1.angle(v2) << std::endl;


}