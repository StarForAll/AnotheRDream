#ifndef LAYERINFO_H_HEADER_INCLUDED_A21BA3BD
#define LAYERINFO_H_HEADER_INCLUDED_A21BA3BD

class LAYERINFO
{
  public:
    LAYERINFO();

    // ͼ���ʶ��
    Integer type_id;
    // ��ͼ���
    Integer map_cols;
    // ��ͼ�߶�
    Integer map_rows;
    // ͼ����
    Integer tile_width;
    // ͼ��߶�
    Integer tile_height;
    // ͼ��ԭʼͼƬ·��
    String tile_path;
    // ��ͼ���ݴ�0����1��ʼ
    Integer first_gid;
    // ͼ������
    vector<vector<int>> data;
};



#endif /* LAYERINFO_H_HEADER_INCLUDED_A21BA3BD */
