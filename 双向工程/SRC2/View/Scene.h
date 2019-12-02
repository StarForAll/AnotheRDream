#ifndef SCENE_H_HEADER_INCLUDED_A21BCB5D
#define SCENE_H_HEADER_INCLUDED_A21BCB5D
#include "GAMELAYER.h"
#include "Map.h"

class Scene
{
  public:
    T_Scene();

    ~T_Scene();

    Integer getSceneX();

    Integer getSceneY();

    Integer getlastSceneX();

    Integer getlastSceneY();

    Map getBarrier();

    Map getMask();

    Integer GetTotalLayers();

    SCENE_LAYERS getSceneLayers();

    InitScene();

    SetScenePos();

    MoveScene();

    ScrollScene();

    Append();

    Insert();

    Remove();

    RemoveAll();

    SortLayers();

    POINT getRandomFreeCell();

    GetTxtMapValue();

    GetTxtMapValue();

    parseCsvData();

    Boolean LoadTxtMap();

    Draw();

    Scene();

  protected:
    Boolean SortByZorder();

    vector<GAMELAYER> sceneLayers;
    Map pBarrier;
    Map pMask;
    Integer SceneWidth;
    Integer SceneHeight;
    Integer WinWidth;
    Integer WinHeight;
    Integer lastSceneX;
    Integer lastSceneY;
    Integer SceneX;
    Integer SceneY;
    Boolean LayerChanged;
};



#endif /* SCENE_H_HEADER_INCLUDED_A21BCB5D */
