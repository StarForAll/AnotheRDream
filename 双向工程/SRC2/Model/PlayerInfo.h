#ifndef PLAYERINFO_H_HEADER_INCLUDED_A21BB403
#define PLAYERINFO_H_HEADER_INCLUDED_A21BB403

// 玩家Model
class PlayerInfo
{
  public:
    // 设置玩家ID
    setID();

    // 设置玩家名称
    setName();

    // 设置玩家签名
    setSign();

    // 设置玩家等级
    setLevel();

    // 设置是否被封禁
    setWhetherBanned();

    // 设置玩家被封禁理由
    setReasonOfBanning();

    // 获取玩家ID
    String getID();

    // 获取玩家名称
    String getName();

    // 获取玩家签名
    String getSign();

    Double getLevel();

    // 获取玩家是否被封禁
    Boolean WhetherBanned();

    // 获取玩家被封禁理由
    String getReasonOfBanning();

    // 玩家默认构造函数
    // 通常玩家只会在构造初被默认赋予初始属性
    // （例如等级为1等）
    // 后续的环节中需要逐渐询问玩家来充实属性值
    // （如询问玩家进行命名操作等）
    Player()();

    ~Player()();

    showConfiguration();

    showUpdateInfo();

    showRequestQueryResult();

    PlayerInfo();

  protected:
    // 玩家ID
    String id;
    // 玩家名称
    String name;
    // 玩家等级
    Integer level;
    // 玩家游戏时长
    Double durationOfGamePlaying;
    // 玩家签名
    String sign;
    // 玩家是否被封禁
    Boolean isBanned;
    // 封禁原因
    String reasonOfBanning;
};



#endif /* PLAYERINFO_H_HEADER_INCLUDED_A21BB403 */
