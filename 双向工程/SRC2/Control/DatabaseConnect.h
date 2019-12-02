#ifndef DATABASECONNECT_H_HEADER_INCLUDED_A21B9669
#define DATABASECONNECT_H_HEADER_INCLUDED_A21B9669

// 访问数据库相关
class DatabaseConnect
{
  public:
    Database();

    ~Database();

    Connect();

    Close();

    String Select();

    Boolean Insert();

    Boolean Delete();

    Boolean Alter();

    DatabaseConnect();

  private:
    String name;
    String hostname;
    String port;
    String username;
    String password;
};



#endif /* DATABASECONNECT_H_HEADER_INCLUDED_A21B9669 */
