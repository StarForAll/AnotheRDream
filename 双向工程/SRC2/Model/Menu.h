#ifndef MENU_H_HEADER_INCLUDED_A21BED9A
#define MENU_H_HEADER_INCLUDED_A21BED9A
#include "AudioDXBuffer.h"
#include "Graph.h"
#include "MENUITEM.h"
#include "MENU_INFO.h"

// 菜单Model
class Menu
{
  public:
    T_Menu();

    ~T_Menu();

    // 设置菜单背景图片。透明度及背景颜色
    SetMenuBkg();

    SetBtnBmp();

    SetMenuInfo();

    AddMenuItem();

    DrawMenu();

    // 菜单点击事件处理
    Integer MenuTap();

    // 返回当前的m_index
    Integer GetMenuIndex();

    // 设置当前的m_index
    SetMenuIndex();

    DestroyAll();

    SetCTapSound();

    ClickMenuKey();

    UpdateConfiguration();

    Menu();

  protected:
    // 根据当前鼠标坐标计算菜单项索引号
    Integer GetMenuIndex();

    StringAlignment GetAlignment();

    FontStyle GetFontStyle();

    // 菜单信息
    MENU_INFO menu_info;
    // 当前焦点菜单索引号
    Integer m_index;
    // 当前菜单是否获焦点
    Boolean isItemFocused;
    Integer lastIndex;
    Integer key_index;
    // 最长菜单文字长度
    Integer MaxMenuItemLen;
    // 背景图片透明度
    Integer bkImageAlpha;
    // 背景颜色
    Integer bkColor;
    // 菜单背景
    Graph gm_menuBkg;
    // 菜单图片
    Graph BtnDIB;
    // 菜单项目
    vector<MENUITEM> gm_menuItems;
    // 菜单鼠标移过时的声音
    AudioDXBuffer m_MoveSound;
    // 菜单鼠标点击时的声音
    AudioDXBuffer m_ClickSound;
};



#endif /* MENU_H_HEADER_INCLUDED_A21BED9A */
