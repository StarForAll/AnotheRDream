#ifndef GAMELAYER_H_HEADER_INCLUDED_A21BE357
#define GAMELAYER_H_HEADER_INCLUDED_A21BE357

class GAMELAYER
{
  public:
    GAMELAYER();

    // ͼ�����(���ԽСͼ�������Խ��)
    Integer zOrder;
    // LAYER_TYPE����ֵ��ͼ�����ͱ�ʶ��
    Integer typeId;
    // ��Ϸͼ��ͼ��
    Layer* layer;
};



#endif /* GAMELAYER_H_HEADER_INCLUDED_A21BE357 */
