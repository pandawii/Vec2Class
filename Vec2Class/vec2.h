#pragma once //to prevent duplicates



class Vector2
{
public:
	float x = 0;
	float y = 0;

	Vector2() {} // defualt constructer

	Vector2(float p_x, float p_y);   // p is referring to parameter
	

	Vector2 operator + (const Vector2& rightHandSide)const;

	void	operator +=(const Vector2& rightHandSide);

	void add (const Vector2& rightHandSide);

	Vector2& scale(float S);
};


