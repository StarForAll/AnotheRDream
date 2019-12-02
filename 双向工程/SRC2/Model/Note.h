#ifndef NOTE_H_HEADER_INCLUDED_A21BD50F
#define NOTE_H_HEADER_INCLUDED_A21BD50F
#include "Graph.h"
#include "Layer.h"

// ��������������һ��ý�顣
// Noteͨ��Controller���Ƶ�GamingView�ϣ�֮���û�ͨ��Controller��Note���п��ơ�
// Note����2��״̬��
//       Visible��������ʾ��״̬
//       Disappear����Ҳ��ɼ�״̬
// ����ҵ㴥��Note��Note�˶�����ʾ����ʱ��Visible״̬ΪFalse�����������ΪTrue
class Note : public Graph, public Layer
{
  public:
    // �趨NOTE���
    setWidth();

    // �趨NOTE�߶�
    setHeight();

    // �趨NOTE�ĺ�����λ��
    setX();

    // �趨NOTE��������λ��
    setY();

    // �趨NOTE�ٶ�
    setSpeed();

    // ����NOTE���ű���
    setRatio();

    // ���NOTE���
    Integer getWidth();

    // ���NOTE�߶�
    Integer getHeight();

    // ���NOTE�ĺ�����λ��
    Integer getX();

    // ���NOTE��������λ��
    Integer getY();

    // ���NOTE�ٶ�
    Integer getSpeed();

    // ���NOTE���ű���
    Double getRatio();

    // ��Ҫ�в�ͬ�Ĺ��캯������Ӧ��ͬ�Ķ���ʵ�ַ�ʽ
    //       Ĭ���޲εĹ��캯���ʺϺ������ж����������
    //       �����ߡ��ٶ��Լ���ʽ�Ĺ��캯���ʺ���һ��ʼ�㶨��ø����ԵĶ���ĳ�ʼ��
    Note();

    // Note�������������
    ~Note();

    checkScore();

  protected:
    // Note���
    Integer width;
    // Note�߶�
    Integer height;
    // Note������
    Integer x;
    // Note������
    Integer y;
    // Note����
    Integer type;
    // Note�ٶ�
    Integer speed;
    // Note���ű���
    Double ratio;
};



#endif /* NOTE_H_HEADER_INCLUDED_A21BD50F */
