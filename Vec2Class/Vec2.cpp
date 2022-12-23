#include"vec2.h"


Vector2::Vector2(float p_x, float p_y)
	:x(p_x)
	, y(p_y)
{
	magnitude = sqrtf((x * x) + (y * y));
}

Vector2 Vector2::operator + (const Vector2 & other) const
{
	return Vector2(x+ other.x,y+ other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const
{
	return Vector2(x - other.x, y - other.y);
}



void Vector2::operator += (const Vector2& other)
{
	x += other.x;
	y += other.y;
}

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << " , " << other.y;
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

void Vector2::normalize()
{
	x = x / magnitude;
	y = y / magnitude;
}

Vector2& Vector2::normalized()
{
	x = x / magnitude;
	y = y / magnitude;
	return *this;
}




Vector2 Vector2::Dir(Vector2& v1, Vector2& v2)
{
	return v2-v1;
}

float Vector2::Distance(Vector2& v1, Vector2& v2)
{	
	return (v2-v1).magnitude;
}

float Vector2::angle(Vector2& v2)
{
	auto v3 = v2 - *this;
	return atan2f(v3.y, v3.x)*radians;
	return 0.0f;
}

float Vector2::angle(Vector2& v1, Vector2& v2)
{
	auto v3 = v2 - v1;
	return atan2f(v3.y,v3.x)*radians;
}





