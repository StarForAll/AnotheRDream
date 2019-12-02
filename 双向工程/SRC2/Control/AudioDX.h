#ifndef AUDIODX_H_HEADER_INCLUDED_A21B96C1
#define AUDIODX_H_HEADER_INCLUDED_A21B96C1

// 一些功能的实现
class AudioDX
{
  public:
    ~AudioDX();

    AudioDX();

    // 创建DirectSound对象、设置合作级别并创建主缓冲区
    Boolean CreateDS();

    // 重载"->"操作符, 表示ds对象
    LPDIRECTSOUND operator ->();

    // 释放DirectSound对象及DirectSound缓冲区对象
    ReleaseAll();

    // 失去缓冲区内存时则复原
    HRESULT RestoreAll();

    PlayMusic();

  protected:
    // DirectSound对象
    LPDIRECTSOUND ds;
    // DirectSound缓冲对象
    AudioDXBuffer dsbuf;
};



#endif /* AUDIODX_H_HEADER_INCLUDED_A21B96C1 */
