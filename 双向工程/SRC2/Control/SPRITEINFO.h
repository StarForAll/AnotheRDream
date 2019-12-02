#ifndef SPRITEINFO_H_HEADER_INCLUDED_A21BD59E
#define SPRITEINFO_H_HEADER_INCLUDED_A21BD59E

class SPRITEINFO
{
  public:
    SPRITEINFO();

    // 初始X坐标
    Integer X;
    // 初始Y坐标
    Integer Y;
    // 初始方向
    Integer Dir;
    // 初始的移动速度
    Integer Speed;
    // 初始的等级
    Integer Level;
    // 分值
    Integer Score;
    // 在屏幕上是否可见
    Boolean Visible;
    // 状态
    Boolean Active;
    // 是否是死亡状态
    Boolean Dead;
    // 透明度
    Byte Alpha;
    // 动画帧图片放大或缩小比
    Double Ratio;
    // 帧图片是否镜像变换
    Integer Rotation;
};



#endif /* SPRITEINFO_H_HEADER_INCLUDED_A21BD59E */
