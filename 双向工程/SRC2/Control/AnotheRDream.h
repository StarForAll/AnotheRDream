#ifndef ANOTHERDREAM_H_HEADER_INCLUDED_A21BCF81
#define ANOTHERDREAM_H_HEADER_INCLUDED_A21BCF81

// 继承自Engine类
// 用来实现程序逻辑与Model到View的调度，即Controller层
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
    // Note对象
    // 
    Note note;
};



#endif /* ANOTHERDREAM_H_HEADER_INCLUDED_A21BCF81 */
