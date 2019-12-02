#ifndef MENU_H_HEADER_INCLUDED_A21BED9A
#define MENU_H_HEADER_INCLUDED_A21BED9A
#include "AudioDXBuffer.h"
#include "Graph.h"
#include "MENUITEM.h"
#include "MENU_INFO.h"

// �˵�Model
class Menu
{
  public:
    T_Menu();

    ~T_Menu();

    // ���ò˵�����ͼƬ��͸���ȼ�������ɫ
    SetMenuBkg();

    SetBtnBmp();

    SetMenuInfo();

    AddMenuItem();

    DrawMenu();

    // �˵�����¼�����
    Integer MenuTap();

    // ���ص�ǰ��m_index
    Integer GetMenuIndex();

    // ���õ�ǰ��m_index
    SetMenuIndex();

    DestroyAll();

    SetCTapSound();

    ClickMenuKey();

    UpdateConfiguration();

    Menu();

  protected:
    // ���ݵ�ǰ����������˵���������
    Integer GetMenuIndex();

    StringAlignment GetAlignment();

    FontStyle GetFontStyle();

    // �˵���Ϣ
    MENU_INFO menu_info;
    // ��ǰ����˵�������
    Integer m_index;
    // ��ǰ�˵��Ƿ�񽹵�
    Boolean isItemFocused;
    Integer lastIndex;
    Integer key_index;
    // ��˵����ֳ���
    Integer MaxMenuItemLen;
    // ����ͼƬ͸����
    Integer bkImageAlpha;
    // ������ɫ
    Integer bkColor;
    // �˵�����
    Graph gm_menuBkg;
    // �˵�ͼƬ
    Graph BtnDIB;
    // �˵���Ŀ
    vector<MENUITEM> gm_menuItems;
    // �˵�����ƹ�ʱ������
    AudioDXBuffer m_MoveSound;
    // �˵������ʱ������
    AudioDXBuffer m_ClickSound;
};



#endif /* MENU_H_HEADER_INCLUDED_A21BED9A */
