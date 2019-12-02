#ifndef AUDIOWAVE_H_HEADER_INCLUDED_A21BBB7A
#define AUDIOWAVE_H_HEADER_INCLUDED_A21BBB7A

// Wave格式的读取类
class AudioWave
{
  public:
    AudioWave();

    ~AudioWave();

    // 打开并读取WAVE文件
    Boolean Open();

    // 读取并查询是否存在data区块
    Boolean StartRead();

    // 读取指定数据
    Boolean Read();

    // 释放占用的资源
    Boolean Close();

    // 获取wave格式属性
    WAVEFORMATEX *GetFormat();

    // 获取区块大小
    DWORD CkSize();

  protected:
    // wave格式结构体指针
    WAVEFORMATEX *wfex;
    // 文件句柄
    HMMIO hmmio;
    // MMCKINFO对象（查询用子块）
    MMCKINFO ckIn;
    // MMCKINFO对象（父块，从文件获取）
    MMCKINFO ckInRIFF;
};



#endif /* AUDIOWAVE_H_HEADER_INCLUDED_A21BBB7A */
