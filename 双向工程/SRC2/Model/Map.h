#ifndef MAP_H_HEADER_INCLUDED_A21BA2BD
#define MAP_H_HEADER_INCLUDED_A21BA2BD
#include "Layer.h"

// ����Model
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
    // ����ʱ��
    Double duration;
    // �ļ�·��
    String path;
};



#endif /* MAP_H_HEADER_INCLUDED_A21BA2BD */
