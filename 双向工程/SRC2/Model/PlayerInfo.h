#ifndef PLAYERINFO_H_HEADER_INCLUDED_A21BB403
#define PLAYERINFO_H_HEADER_INCLUDED_A21BB403

// ���Model
class PlayerInfo
{
  public:
    // �������ID
    setID();

    // �����������
    setName();

    // �������ǩ��
    setSign();

    // ������ҵȼ�
    setLevel();

    // �����Ƿ񱻷��
    setWhetherBanned();

    // ������ұ��������
    setReasonOfBanning();

    // ��ȡ���ID
    String getID();

    // ��ȡ�������
    String getName();

    // ��ȡ���ǩ��
    String getSign();

    Double getLevel();

    // ��ȡ����Ƿ񱻷��
    Boolean WhetherBanned();

    // ��ȡ��ұ��������
    String getReasonOfBanning();

    // ���Ĭ�Ϲ��캯��
    // ͨ�����ֻ���ڹ������Ĭ�ϸ����ʼ����
    // ������ȼ�Ϊ1�ȣ�
    // �����Ļ�������Ҫ��ѯ���������ʵ����ֵ
    // ����ѯ����ҽ������������ȣ�
    Player()();

    ~Player()();

    showConfiguration();

    showUpdateInfo();

    showRequestQueryResult();

    PlayerInfo();

  protected:
    // ���ID
    String id;
    // �������
    String name;
    // ��ҵȼ�
    Integer level;
    // �����Ϸʱ��
    Double durationOfGamePlaying;
    // ���ǩ��
    String sign;
    // ����Ƿ񱻷��
    Boolean isBanned;
    // ���ԭ��
    String reasonOfBanning;
};



#endif /* PLAYERINFO_H_HEADER_INCLUDED_A21BB403 */
