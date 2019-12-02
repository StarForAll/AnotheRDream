#ifndef AUDIOWAVE_H_HEADER_INCLUDED_A21BBB7A
#define AUDIOWAVE_H_HEADER_INCLUDED_A21BBB7A

// Wave��ʽ�Ķ�ȡ��
class AudioWave
{
  public:
    AudioWave();

    ~AudioWave();

    // �򿪲���ȡWAVE�ļ�
    Boolean Open();

    // ��ȡ����ѯ�Ƿ����data����
    Boolean StartRead();

    // ��ȡָ������
    Boolean Read();

    // �ͷ�ռ�õ���Դ
    Boolean Close();

    // ��ȡwave��ʽ����
    WAVEFORMATEX *GetFormat();

    // ��ȡ�����С
    DWORD CkSize();

  protected:
    // wave��ʽ�ṹ��ָ��
    WAVEFORMATEX *wfex;
    // �ļ����
    HMMIO hmmio;
    // MMCKINFO���󣨲�ѯ���ӿ飩
    MMCKINFO ckIn;
    // MMCKINFO���󣨸��飬���ļ���ȡ��
    MMCKINFO ckInRIFF;
};



#endif /* AUDIOWAVE_H_HEADER_INCLUDED_A21BBB7A */
