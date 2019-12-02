#ifndef AUDIODXBUFFER_H_HEADER_INCLUDED_A21B986A
#define AUDIODXBUFFER_H_HEADER_INCLUDED_A21B986A

// ��ƵModel
class AudioDXBuffer
{
  public:
    ~AudioDXBuffer();

    AudioDXBuffer();

    // ������������������ƻ�������
    Boolean CreateBuffer();

    // �������������������������趨ΪWave��ʽ
    Boolean CreateMainBuffer();

    // ����WAVE�ļ�,�����ļ�����д�뻺����
    Boolean LoadWave();

    // �ͷ�������Դ
    HRESULT Release();

    // �ָ�������
    HRESULT Restore();

    // ��ֹ����(�ָ���������ֹͣ��������)
    Terminate();

    // ��������(���������Ƿ�ѭ��)
    Boolean Play();

    // ֹͣ��������
    Boolean Stop();

    // �жϻ������Ƿ��ڻ�Ծ״̬
    Boolean IsAlive();

    // ����"->"������, ��ʾSndBuf����
    LPDIRECTSOUNDBUFFER operator ->();

  protected:
    // ��ƵƵ��
    DWORD freq;
    // ���������������
    Long pan;
    // �������ӿ�ָ��
    LPDIRECTSOUNDBUFFER sndBuf;
    // ����
    Long volume;
};



#endif /* AUDIODXBUFFER_H_HEADER_INCLUDED_A21B986A */
