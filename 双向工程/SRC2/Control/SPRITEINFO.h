#ifndef SPRITEINFO_H_HEADER_INCLUDED_A21BD59E
#define SPRITEINFO_H_HEADER_INCLUDED_A21BD59E

class SPRITEINFO
{
  public:
    SPRITEINFO();

    // ��ʼX����
    Integer X;
    // ��ʼY����
    Integer Y;
    // ��ʼ����
    Integer Dir;
    // ��ʼ���ƶ��ٶ�
    Integer Speed;
    // ��ʼ�ĵȼ�
    Integer Level;
    // ��ֵ
    Integer Score;
    // ����Ļ���Ƿ�ɼ�
    Boolean Visible;
    // ״̬
    Boolean Active;
    // �Ƿ�������״̬
    Boolean Dead;
    // ͸����
    Byte Alpha;
    // ����֡ͼƬ�Ŵ����С��
    Double Ratio;
    // ֡ͼƬ�Ƿ���任
    Integer Rotation;
};



#endif /* SPRITEINFO_H_HEADER_INCLUDED_A21BD59E */
