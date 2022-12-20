#include<iostream>
#include"vec2.h"


int main(int argc,char* argv[])
{
	Vector2 v1(100, 200);
	Vector2 v2(50, 75);

	v1.add(v2);
	v1.scale(2);

	std::cout << v1.x<<"ss "<<v1.y<<std::endl;
}