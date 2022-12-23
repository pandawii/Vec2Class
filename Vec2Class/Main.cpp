#include<iostream>
#include"vec2.h"


int main(int argc,char* argv[])
{
	Vector2 v1(4, -9);
	Vector2 v2(50, 75);

	
	std::cout << "magnitude of v1 = " << v1.magnitude << std::endl;
	v1.normalize();
	std::cout << "magnitude of v1 = " << v1 << std::endl;


}