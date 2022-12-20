#include"vec2.h"


Vector2::Vector2(float p_x, float p_y)
	:x(p_x)
	, y(p_y)
{}

Vector2 Vector2::operator + (const Vector2 & other) const
{
	return Vector2(x+ other.x,y+ other.y);
}



void Vector2::operator += (const Vector2& other)
{
	x += other.x;
	y += other.y;
}

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << " " << other.y;
	return stream;
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

float Vector2::dist(const Vector2& v) const
{
	return sqrtf((v.x-x)*(v.x-x)+(v.y-y)*(v.y-y));     
}




