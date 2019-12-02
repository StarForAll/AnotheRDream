#ifndef VIEW_H_HEADER_INCLUDED_A21BD395
#define VIEW_H_HEADER_INCLUDED_A21BD395

// View�㣬�������Ʋ�ͬ���ݵ�ͼ��
class View
{
  public:
    View();

    ~View();

    Scene GetMainScene();

    SetMainScene();

    Scene GetChooseMusic();

    SetChooseMusic();

    Scene GetPlayScene();

    SetPlayScene();

    ShowSigninView();

    SureSignin();

    ShowGameResult();

    ShowReultMessage();

    ReadConfigurationFile();

    RequestShow();

  private:
    Scene mainScene;
    Scene chooseMusic;
    Scene playScene;
};



#endif /* VIEW_H_HEADER_INCLUDED_A21BD395 */
