#ifndef NOTE_H_HEADER_INCLUDED_A21BD50F
#define NOTE_H_HEADER_INCLUDED_A21BD50F
#include "Graph.h"
#include "Layer.h"

// 玩家与机器交互的一个媒介。
// Note通过Controller绘制到GamingView上，之后用户通过Controller对Note进行控制。
// Note存在2种状态：
//       Visible，可以显示的状态
//       Disappear，玩家不可见状态
// 在玩家点触到Note或Note运动出显示区域时，Visible状态为False，其他情况下为True
class Note : public Graph, public Layer
{
  public:
    // 设定NOTE宽度
    setWidth();

    // 设定NOTE高度
    setHeight();

    // 设定NOTE的横坐标位置
    setX();

    // 设定NOTE的纵坐标位置
    setY();

    // 设定NOTE速度
    setSpeed();

    // 设置NOTE缩放比例
    setRatio();

    // 获得NOTE宽度
    Integer getWidth();

    // 获得NOTE高度
    Integer getHeight();

    // 获得NOTE的横坐标位置
    Integer getX();

    // 获得NOTE的纵坐标位置
    Integer getY();

    // 获得NOTE速度
    Integer getSpeed();

    // 获得NOTE缩放比例
    Double getRatio();

    // 需要有不同的构造函数来适应不同的对象实现方式
    //       默认无参的构造函数适合后期自行定义对象属性
    //       传入宽高、速度以及样式的构造函数适合在一开始便定义好各属性的对象的初始化
    Note();

    // Note对象的析构函数
    ~Note();

    checkScore();

  protected:
    // Note宽度
    Integer width;
    // Note高度
    Integer height;
    // Note横坐标
    Integer x;
    // Note纵坐标
    Integer y;
    // Note类型
    Integer type;
    // Note速度
    Integer speed;
    // Note缩放比例
    Double ratio;
};



#endif /* NOTE_H_HEADER_INCLUDED_A21BD50F */
