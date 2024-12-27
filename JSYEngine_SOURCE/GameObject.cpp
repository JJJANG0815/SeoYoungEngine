#include "GameObject.h"
#include "CommonInclude.h"

namespace SY
{
	GameObject::GameObject()

		:mX(0.0f)
		, mY(0.0f)
		, mWidth(0.0f)
		, mHeight(0.0f)
		, mColor(RGB(0, 0, 0))
		, mSpeed(0.0f)
	{
	}

	GameObject::~GameObject()
	{

	}

	void GameObject::Update()
	{

	}

	void GameObject::LateUpdate()
	{

	}

	void GameObject::Render(HDC hdc)
	{

	}
	void GameObject::SetPosition(float x, float y)
	{
		mX = x;
		mY = y;
	}
	void GameObject::SetSize(float width, float height)
	{
		mWidth = width;
		mHeight = height;
	}
	void GameObject::SetSpeed(float speed)
	{
		mSpeed = speed;

	}
	void GameObject::SetColor(COLORREF color)
	{
		mColor = color;
	}

}