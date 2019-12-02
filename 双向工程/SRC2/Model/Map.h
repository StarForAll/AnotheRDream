#ifndef MAP_H_HEADER_INCLUDED_A21BA2BD
#define MAP_H_HEADER_INCLUDED_A21BA2BD
#include "Layer.h"

// 谱面Model
class Map : public Layer
{
  public:
    Map();

    ~Map();

    SetUpdate();

    Boolean GetUpdate();

    String ClassName();

    SetTile();

    Integer GetTile();

    Redraw();

    Draw();

  private:
    // 持续时间
    Double duration;
    // 文件路径
    String path;
};



#endif /* MAP_H_HEADER_INCLUDED_A21BA2BD */
