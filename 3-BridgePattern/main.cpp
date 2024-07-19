/*
绘制不同形状(Circle 、Rectangle)不同颜色(Red、Green、Blue)的图形(Shape)
Abstraction（抽象类） ：ShSape
RefinedAbstraction（扩充抽象类）：Circle 、Rectangle
Implementor（实现类接口）： Color
ConcreteImplementor（具体实现类）：Red、Green、Blue
*/

#include "BridgePattern.h"

int main() {

    Shape* shape;
    //绘制 红色 圆形
    std::cout << "=====绘制 红色 圆形=====" << std::endl;
    shape = new Circle();
    shape->chooseColor(new Red());
    shape->showShape();
    delete shape;

    //绘制 绿色 圆形
    std::cout << "=====绘制 绿色 圆形=====" << std::endl;
    shape = new Circle();
    shape->chooseColor(new Green());
    shape->showShape();
    delete shape;

    //绘制 蓝色 矩形
    std::cout << "=====绘制 蓝色 矩形=====" << std::endl;
    shape = new Rectangle();
    shape->chooseColor(new Blue());
    shape->showShape();
    delete shape;

    system("pause");
    return 0;
}