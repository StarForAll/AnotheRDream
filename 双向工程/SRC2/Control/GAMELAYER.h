#ifndef GAMELAYER_H_HEADER_INCLUDED_A21BE357
#define GAMELAYER_H_HEADER_INCLUDED_A21BE357

class GAMELAYER
{
  public:
    GAMELAYER();

    // 图层序号(序号越小图层离观众越近)
    Integer zOrder;
    // LAYER_TYPE常量值的图层类型标识号
    Integer typeId;
    // 游戏图层图像
    Layer* layer;
};



#endif /* GAMELAYER_H_HEADER_INCLUDED_A21BE357 */
