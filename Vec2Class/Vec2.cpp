
#include"vec2.h"


Vector2::Vector2(float p_x, float p_y)
	:x(p_x)
	, y(p_y)
{}

Vector2 Vector2::operator + (const Vector2 & rightHandSide) const
{
	return Vector2(x+rightHandSide.x,y+rightHandSide.y);
}

void Vector2::operator += (const Vector2& rightHandSide)
{
	x += rightHandSide.x;
	y += rightHandSide.y;
}

void Vector2::add(const Vector2& v)
{
	x += v.x;
	y += v.y;
}

Vector2& Vector2::scale(float S)
{
	x *= S;
	y *= S;
	return *this;
}




