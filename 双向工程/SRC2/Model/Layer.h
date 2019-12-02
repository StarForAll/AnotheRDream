#ifndef LAYER_H_HEADER_INCLUDED_A21BFAA9
#define LAYER_H_HEADER_INCLUDED_A21BFAA9

// Í¼²ãModel
class Layer
{
  public:
    T_Layer();

    void ~T_Layer();

    SetWidth();

    Integer GetWidth();

    SetHeight();

    Integer GetHeight();

    SetPosition();

    Integer GetX();

    Integer GetY();

    SetVisible();

    Boolean IsVisible();

    SetLayerTypeID();

    Integer GetLayerTypeID();

    setZorder();

    Integer getZorder();

    Move();

    String ClassName();

    Draw();

    Layer();

  protected:
    Integer Width;
    Integer Height;
    Integer X;
    Integer Y;
    Boolean Visible;
    Integer LayerTypeID;
    // Í¼²ãµÄ»æÖÆË³Ðò
    Integer zorder;
};



#endif /* LAYER_H_HEADER_INCLUDED_A21BFAA9 */
