/*

*/
//�⺻ Ŭ���� : Shape -< �߻�

#include <iostream>

template<typename T>
class Shape
{
public:
	virtual void Draw()const = 0;
	virtual T area()const = 0;
};
//circle : shape�� ��ӹ޴� ���ø� Ŭ����
template<typename T>
class Circle : public Shape<T>
{
private:
	T radius;
public:
	Circle(T r) : radius(r) {}
	void Draw()const override 
	{
		std::cout << "���� ������ : " << radius << std::endl;
	};
	T area()const override
	{
		return 3.14 * radius * radius;
	}
};
template <typename T>
	class Rectangle : public Shape<T>
{
private:
	T width;
	T height;
public:
	Rectangle(T w, T h) :width(w), height(h) {}
	void Draw()const override
	{
		std::cout << "���� : " << width << " ���� : " << height << std::endl;
	}
	T area()const override
	{
		return width * height;
	}
};

template<typename T>
void DrawShape(const Shape<T>* shape)
{
	shape->Draw();
	std::cout << "���� : " << shape->area() << std::endl;
}

int main()
{
	Circle<double> circle(3.14);
	Rectangle<int> rectangle(5, 7);
	DrawShape(&circle);
	DrawShape(&rectangle);
}
