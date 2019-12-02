#ifndef DISPLAY_H_HEADER_INCLUDED_A21BCB4E
#define DISPLAY_H_HEADER_INCLUDED_A21BCB4E

// 分辨率的获取和修改
class Display
{
  public:
    // 保存当前分辨率
    SaveMode();

    // 恢复已保存的分辨率
    ResetMode();

    // 改变分辨率
    Boolean ChangeMode();

    Display();

  private:
    // 保存的当前分辨率
    DEVMODE devmodeSaved;
    // 分辨率是否改变
    Boolean modeChanged;
};



#endif /* DISPLAY_H_HEADER_INCLUDED_A21BCB4E */
