#ifndef AUDIODX_H_HEADER_INCLUDED_A21B96C1
#define AUDIODX_H_HEADER_INCLUDED_A21B96C1

// һЩ���ܵ�ʵ��
class AudioDX
{
  public:
    ~AudioDX();

    AudioDX();

    // ����DirectSound�������ú������𲢴�����������
    Boolean CreateDS();

    // ����"->"������, ��ʾds����
    LPDIRECTSOUND operator ->();

    // �ͷ�DirectSound����DirectSound����������
    ReleaseAll();

    // ʧȥ�������ڴ�ʱ��ԭ
    HRESULT RestoreAll();

    PlayMusic();

  protected:
    // DirectSound����
    LPDIRECTSOUND ds;
    // DirectSound�������
    AudioDXBuffer dsbuf;
};



#endif /* AUDIODX_H_HEADER_INCLUDED_A21B96C1 */
