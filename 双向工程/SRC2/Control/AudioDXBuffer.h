#ifndef AUDIODXBUFFER_H_HEADER_INCLUDED_A21B986A
#define AUDIODXBUFFER_H_HEADER_INCLUDED_A21B986A

// 音频Model
class AudioDXBuffer
{
  public:
    ~AudioDXBuffer();

    AudioDXBuffer();

    // 创建辅助缓冲区并设计基本属性
    Boolean CreateBuffer();

    // 创建主缓冲区并将主缓冲区设定为Wave格式
    Boolean CreateMainBuffer();

    // 读入WAVE文件,并将文件数据写入缓冲区
    Boolean LoadWave();

    // 释放所有资源
    HRESULT Release();

    // 恢复缓冲区
    HRESULT Restore();

    // 终止处理(恢复缓冲区并停止声音播放)
    Terminate();

    // 播放声音(参数决定是否循环)
    Boolean Play();

    // 停止声音播放
    Boolean Stop();

    // 判断缓冲区是否处于活跃状态
    Boolean IsAlive();

    // 重载"->"操作符, 表示SndBuf对象
    LPDIRECTSOUNDBUFFER operator ->();

  protected:
    // 音频频率
    DWORD freq;
    // 左右声道相对音量
    Long pan;
    // 缓冲区接口指针
    LPDIRECTSOUNDBUFFER sndBuf;
    // 音量
    Long volume;
};



#endif /* AUDIODXBUFFER_H_HEADER_INCLUDED_A21B986A */
