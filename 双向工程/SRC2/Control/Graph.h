#ifndef GRAPH_H_HEADER_INCLUDED_A21B9655
#define GRAPH_H_HEADER_INCLUDED_A21B9655

// View�㣬��������λͼ
class Graph
{
  public:
    Graph();

    ~Graph();

    // ����Ѽ���ͼ����
    HBITMAP GetBmpHandle();

    // ����Ѽ���ͼ���
    Integer GetImageWidth();

    // ����Ѽ���ͼ���
    Integer GetImageHeight();

    // ����ͼ��
    Boolean LoadImageFile();

    // ����ͼ��
    PaintImage();

    // �ͷ���Դ
    Destroy();

    HBITMAP CreateBlankBitmap();

    Bitmap* HBITMAP_To_Bitmap();

    // ����ԭʼͼ��ľֲ����򣬻���ʱ���Խ������Ų�ָ��͸���Ⱥ�ͼ�����ת��ʽ
    PaintRegion();

    // ����PaintRegion��װ��һ��ר�����ڻ��ƶ���֡ͼ��ĺ���
    PaintFrame();

    PaintBlank();

    PaintText();

  protected:
    // �Ѽ���ͼ����
    HBITMAP bitmap;
    // ͼ���
    Integer ImageWidth;
    // ͼ���
    Integer ImageHeight;
};



#endif /* GRAPH_H_HEADER_INCLUDED_A21B9655 */
