#ifndef ENGINE_H_HEADER_INCLUDED_A21BE42F
#define ENGINE_H_HEADER_INCLUDED_A21BE42F

// 引擎，是Controller的基类
// 所有的游戏Controller都需要通过继承该Engine来实现
class Engine
{
  public:
    Engine();

    ~Engine();

    // 获取游戏帧刷新间隔时间
    Integer GetInterval();

    // 设置游戏帧刷新间隔时间
    SetFrame();

    // 获取窗口是否为焦点状态
    Boolean GetSleep();

    // 设置窗口是否为焦点状态
    SetSleep();

    // 设置窗口是否全屏幕显示
    SetFullScreen();

    // 获取当前的按键状态
    Boolean CheckKey();

    // 附加按键行为处理
    SubKeyAction();

    SetBackColor();

    // 被系统自动调用的回调函数
    static LRESULT CALLBACK WndProc();

    // 初始化
    Boolean GameWinInit();

    // 消息处理函数，将被回调函数调用
    LRESULT GameEvent();

    // 引擎启动函数
    StartEngine();

    // 游戏初始化
    virtual void GameInit();

    // 游戏逻辑处理
    virtual void GameLogic();

    // 游戏结束处理
    virtual void GameEnd();

    // 根据GAME_STATE值显示游戏界面
    virtual void GamePaint();

    // 根据KM_ACTION值处理按键行为
    virtual void GameKeyAction();

    // 根据KM_ACTION值处理鼠标行为
    virtual void GameMouseAction();

    Signin();

    // 窗口句柄
    HWND m_hWnd;
    // 实例句柄
    HINSTANCE m_hInstance;
    // 本类静态指针(必须指向本类继承类)
    T_Engine* pEngine;
  protected:
    // 对GDI+的引用
    ULONG_PTR ptrGdiplusToken;
    // 窗口类名称
    LPCTSTR wndClass;
    // 窗口标题
    LPCTSTR wndTitle;
    // 窗口宽
    Integer wndWidth;
    // 窗口高
    Integer wndHeight;
    // 屏幕分辨率的宽
    Integer scrnWidth;
    // 屏幕分辨率的高
    Integer scrnHeight;
    // 程序大图标
    WORD wIcon;
    // 程序小图标
    WORD wSmIcon;
    // 是否全屏显示标志
    Boolean m_bFullScreen;
    // 当前窗口尺寸
    RECT m_rcOld;
    // 窗口基本风格
    Long style;
    // 窗口扩展风格
    Long ex_style;
    // 定义显示类指针
    T_Display* p_disp;
    // 游戏帧刷新间隔时间
    Integer IntervalTime;
    // 窗口是否处于非焦点状态
    Boolean isAsleep;
    // 内存缓冲位图
    HBITMAP bufferBitmap;
    // 内存缓冲设备
    HDC bufferDC;
    // 记录键盘状态的数组
    Boolean keys[];
    // 游戏状态(为GAME_STATE常量值)
    Integer GameState;
};



#endif /* ENGINE_H_HEADER_INCLUDED_A21BE42F */
