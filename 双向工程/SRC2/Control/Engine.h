#ifndef ENGINE_H_HEADER_INCLUDED_A21BE42F
#define ENGINE_H_HEADER_INCLUDED_A21BE42F

// ���棬��Controller�Ļ���
// ���е���ϷController����Ҫͨ���̳и�Engine��ʵ��
class Engine
{
  public:
    Engine();

    ~Engine();

    // ��ȡ��Ϸ֡ˢ�¼��ʱ��
    Integer GetInterval();

    // ������Ϸ֡ˢ�¼��ʱ��
    SetFrame();

    // ��ȡ�����Ƿ�Ϊ����״̬
    Boolean GetSleep();

    // ���ô����Ƿ�Ϊ����״̬
    SetSleep();

    // ���ô����Ƿ�ȫ��Ļ��ʾ
    SetFullScreen();

    // ��ȡ��ǰ�İ���״̬
    Boolean CheckKey();

    // ���Ӱ�����Ϊ����
    SubKeyAction();

    SetBackColor();

    // ��ϵͳ�Զ����õĻص�����
    static LRESULT CALLBACK WndProc();

    // ��ʼ��
    Boolean GameWinInit();

    // ��Ϣ�������������ص���������
    LRESULT GameEvent();

    // ������������
    StartEngine();

    // ��Ϸ��ʼ��
    virtual void GameInit();

    // ��Ϸ�߼�����
    virtual void GameLogic();

    // ��Ϸ��������
    virtual void GameEnd();

    // ����GAME_STATEֵ��ʾ��Ϸ����
    virtual void GamePaint();

    // ����KM_ACTIONֵ��������Ϊ
    virtual void GameKeyAction();

    // ����KM_ACTIONֵ���������Ϊ
    virtual void GameMouseAction();

    Signin();

    // ���ھ��
    HWND m_hWnd;
    // ʵ�����
    HINSTANCE m_hInstance;
    // ���ྲָ̬��(����ָ����̳���)
    T_Engine* pEngine;
  protected:
    // ��GDI+������
    ULONG_PTR ptrGdiplusToken;
    // ����������
    LPCTSTR wndClass;
    // ���ڱ���
    LPCTSTR wndTitle;
    // ���ڿ�
    Integer wndWidth;
    // ���ڸ�
    Integer wndHeight;
    // ��Ļ�ֱ��ʵĿ�
    Integer scrnWidth;
    // ��Ļ�ֱ��ʵĸ�
    Integer scrnHeight;
    // �����ͼ��
    WORD wIcon;
    // ����Сͼ��
    WORD wSmIcon;
    // �Ƿ�ȫ����ʾ��־
    Boolean m_bFullScreen;
    // ��ǰ���ڳߴ�
    RECT m_rcOld;
    // ���ڻ������
    Long style;
    // ������չ���
    Long ex_style;
    // ������ʾ��ָ��
    T_Display* p_disp;
    // ��Ϸ֡ˢ�¼��ʱ��
    Integer IntervalTime;
    // �����Ƿ��ڷǽ���״̬
    Boolean isAsleep;
    // �ڴ滺��λͼ
    HBITMAP bufferBitmap;
    // �ڴ滺���豸
    HDC bufferDC;
    // ��¼����״̬������
    Boolean keys[];
    // ��Ϸ״̬(ΪGAME_STATE����ֵ)
    Integer GameState;
};



#endif /* ENGINE_H_HEADER_INCLUDED_A21BE42F */
