#ifndef DISPLAY_H_HEADER_INCLUDED_A21BCB4E
#define DISPLAY_H_HEADER_INCLUDED_A21BCB4E

// �ֱ��ʵĻ�ȡ���޸�
class Display
{
  public:
    // ���浱ǰ�ֱ���
    SaveMode();

    // �ָ��ѱ���ķֱ���
    ResetMode();

    // �ı�ֱ���
    Boolean ChangeMode();

    Display();

  private:
    // ����ĵ�ǰ�ֱ���
    DEVMODE devmodeSaved;
    // �ֱ����Ƿ�ı�
    Boolean modeChanged;
};



#endif /* DISPLAY_H_HEADER_INCLUDED_A21BCB4E */
