#ifndef ANOTHERDREAM_H_HEADER_INCLUDED_A21BCF81
#define ANOTHERDREAM_H_HEADER_INCLUDED_A21BCF81

// �̳���Engine��
// ����ʵ�ֳ����߼���Model��View�ĵ��ȣ���Controller��
class AnotheRDream : public Engine
{
  public:
    AnotheRDream();

    ~AnotheRDream();

    PlayerInputInfo();

    CheckPlayerInfo();

    CheckSuccess();

    GetPlayerNotesPos();

    ShowResult();

    JudgeEnd();

    GetEndState();

    RequestUpdateInfo();

    ShowRequestUpdateInfo();

    CheckUpdateInfo();

    RequestQuery();

    ShowRequest();

    CheckRequestQuery();

    ChooseMusic();

    Startup();

  private:
    // Note����
    // 
    Note note;
};



#endif /* ANOTHERDREAM_H_HEADER_INCLUDED_A21BCF81 */
