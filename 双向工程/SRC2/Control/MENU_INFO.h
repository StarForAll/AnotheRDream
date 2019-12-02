#ifndef MENU_INFO_H_HEADER_INCLUDED_A21BD357
#define MENU_INFO_H_HEADER_INCLUDED_A21BD357

// 菜单项的属性
class MENU_INFO
{
  public:
    MENU_INFO();

    // 菜单宽度
    Integer width;
    // 菜单高度
    Integer height;
    // 菜单项之间间隔距离
    Integer space;
    // 文字对齐方式
    Integer align;
    // 字体名称
    String fontName;
    // 是否粗体
    Boolean isBold;
    // 正常菜单文字颜色
    Color normalTextColor;
    // 焦点菜单文字颜色
    Color focusTextColor;
};



#endif /* MENU_INFO_H_HEADER_INCLUDED_A21BD357 */
