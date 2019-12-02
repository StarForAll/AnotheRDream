#ifndef LAYERINFO_H_HEADER_INCLUDED_A21BA3BD
#define LAYERINFO_H_HEADER_INCLUDED_A21BA3BD

class LAYERINFO
{
  public:
    LAYERINFO();

    // 图层标识号
    Integer type_id;
    // 地图宽度
    Integer map_cols;
    // 地图高度
    Integer map_rows;
    // 图块宽度
    Integer tile_width;
    // 图块高度
    Integer tile_height;
    // 图块原始图片路径
    String tile_path;
    // 地图数据从0还是1开始
    Integer first_gid;
    // 图层数据
    vector<vector<int>> data;
};



#endif /* LAYERINFO_H_HEADER_INCLUDED_A21BA3BD */
