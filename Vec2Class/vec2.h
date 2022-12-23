#pragma once //to prevent duplicates
#include<math.h>
#include<iostream>

class Vector2
{
private:

public:
	float x = 0;
	float y = 0;
	float magnitude = 0;
	static constexpr float radians = 57.29578f;

	Vector2() {} // defualt constructer
	Vector2(float p_x, float p_y);   // p is referring to parameter

	Vector2 operator + (const Vector2& other)const;
	Vector2 operator - (const Vector2& other)const;
	Vector2& scale(float S);
	void	operator +=(const Vector2& other);
	friend std::ostream& operator<<(std::ostream& stream, const Vector2& other);
	void add (const Vector2& other);
	float dist(const Vector2& v)const;
	void normalize();
	Vector2& normalized();
	float angle(Vector2& v2);
	static Vector2 Dir(Vector2& v1, Vector2& v2);
	static float Distance(Vector2& v1, Vector2& v2);
	static float angle(Vector2& v1, Vector2& v2);

};


