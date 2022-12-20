#pragma once //to prevent duplicates
#include<math.h>
#include<iostream>

class Vector2
{
public:
	float x = 0;
	float y = 0;

	Vector2() {} // defualt constructer

	Vector2(float p_x, float p_y);   // p is referring to parameter
	

	Vector2 operator + (const Vector2& other)const;

	void	operator +=(const Vector2& other);

	friend std::ostream& operator<<(std::ostream& stream, const Vector2& other);

	void add (const Vector2& other);
	Vector2& scale(float S);

	float dist(const Vector2& v)const;

};


