#ifndef GRAPH_H_HEADER_INCLUDED_A21B9655
#define GRAPH_H_HEADER_INCLUDED_A21B9655

// View层，用来绘制位图
class Graph
{
  public:
    Graph();

    ~Graph();

    // 获得已加载图像句柄
    HBITMAP GetBmpHandle();

    // 获得已加载图像宽
    Integer GetImageWidth();

    // 获得已加载图像高
    Integer GetImageHeight();

    // 加载图像
    Boolean LoadImageFile();

    // 加载图像
    PaintImage();

    // 释放资源
    Destroy();

    HBITMAP CreateBlankBitmap();

    Bitmap* HBITMAP_To_Bitmap();

    // 绘制原始图像的局部区域，绘制时可以进行缩放并指定透明度和图像的旋转方式
    PaintRegion();

    // 根据PaintRegion封装的一个专门用于绘制动画帧图像的函数
    PaintFrame();

    PaintBlank();

    PaintText();

  protected:
    // 已加载图像句柄
    HBITMAP bitmap;
    // 图像宽
    Integer ImageWidth;
    // 图像高
    Integer ImageHeight;
};



#endif /* GRAPH_H_HEADER_INCLUDED_A21B9655 */
