#ifndef UTIL_H_HEADER_INCLUDED_A21BB3C0
#define UTIL_H_HEADER_INCLUDED_A21BB3C0

// 一些通用方法的集合
class Util
{
  public:
    HWND GetHWnd();

    HINSTANCE GetHInst();

    wchar_t *int_to_wstring();

    GetRandomNum();

    GetBevelSpeed();

    RequestReadConfigurationFile();

    WriteToConfiguration();

    Util();

};



#endif /* UTIL_H_HEADER_INCLUDED_A21BB3C0 */
