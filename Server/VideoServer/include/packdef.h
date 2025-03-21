#ifndef _PACKDEF_H
#define _PACKDEF_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <ctype.h>
#include <sys/epoll.h>
#include <sys/stat.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include "err_str.h"
#include <malloc.h>

#include<iostream>
#include<map>
#include<list>


//边界值
#define _DEF_SIZE 45
#define _DEF_BUFFERSIZE 1000
#define _DEF_PORT 8002
#define _DEF_SERVERIP "0.0.0.0"  //TODO


#define TRUE true
#define FALSE false


#define _DEF_LISTEN 128
#define _DEF_EPOLLSIZE 4096
#define _DEF_IPSIZE 16
#define _DEF_COUNT 10
#define _DEF_TIMEOUT 10
#define _DEF_SQLIEN 400



#define BOOL bool
#define DEF_PACK_BASE  (10000)


////注册
//#define  DEF_PACK_REGISTER_RQ    (DEF_PACK_BASE + 0)
//#define  DEF_PACK_REGISTER_RS    (DEF_PACK_BASE + 1)
////登录
//#define  DEF_PACK_LOGIN_RQ    (DEF_PACK_BASE + 2)
//#define  DEF_PACK_LOGIN_RS    (DEF_PACK_BASE + 3)
////创建房间
//#define DEF_PACK_CREATEROOM_RQ  (DEF_PACK_BASE + 4)
//#define DEF_PACK_CREATEROOM_RS  (DEF_PACK_BASE + 5)
////加入房间
//#define DEF_PACK_JOINROOM_RQ  (DEF_PACK_BASE + 6)
//#define DEF_PACK_JOINROOM_RS  (DEF_PACK_BASE + 7)
////房间列表请求
//#define DEF_PACK_ROOM_MEMBER    (DEF_PACK_BASE + 8)
////音频数据
//#define DEF_PACK_AUDIO_FRAME    (DEF_PACK_BASE + 9)
////退出房间请求
//#define DEF_PACK_LEAVEROOM_RQ   (DEF_PACK_BASE + 10)
////退出房间回复
//#define DEF_PACK_LEAVEROOM_RS   (DEF_PACK_BASE + 11)

////强制退出
//#define DEF_PACK_FORCE_OFFLINE   ( DEF_PACK_BASE + 20 )

typedef enum Net_PACK
{
    DEF_PACK_REGISTER_RQ = 10000,
    DEF_PACK_REGISTER_RS,

    DEF_PACK_LOGIN_RQ,
    DEF_PACK_LOGIN_RS,

    DEF_PACK_UPLOAD_RQ,
    DEF_PACK_UPLOAD_RS,
    DEF_PACK_FILEBLOCK_RQ,

    DEF_PACK_DOWNLOAD_RQ,
    DEF_PACK_DOWNLOAD_RS,

    DEF_PACK_MYSELF_RQ,
    DEF_PACK_MYSELF_RS,

}Net_PACK;

//注册请求结果
#define userid_is_exist      0
#define register_sucess      1

//登录请求结果
#define userid_no_exist      0
#define password_error       1
#define login_sucess         2
#define user_online          3

//创建房间结果
#define room_is_exist        0
#define create_success       1

//加入房间结果
#define room_no_exist        0
#define join_success         1

//上传请求结果
#define file_is_exist        0
#define file_uploaded        1
#define file_uploadrq_sucess 2
#define file_upload_refuse   3

//上传回复结果
#define fileblock_failed     0
#define fileblock_success    1

//下载请求结果
#define file_downrq_failed   0
#define file_downrq_success  1

//添加好友结果
#define no_this_user    0
#define user_refused    1
#define user_is_offline 2
#define add_success     3

#define _downloadfileblock_fail  0
#define _downloadfileblock_success	1

#define DEF_PACK_COUNT (100)

#define MAX_PATH            (280 )
#define MAX_SIZE            (60  )
#define DEF_HOBBY_COUNT     (8  )
#define MAX_CONTENT_LEN     (4096 )


/////////////////////网络//////////////////////////////////////


#define DEF_MAX_BUF	  1024
#define DEF_BUFF_SIZE	  4096


typedef int PackType;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//登录请求
typedef struct STRU_LOGIN_RQ
{
    STRU_LOGIN_RQ()
    {
        m_nType = DEF_PACK_LOGIN_RQ;
        memset(m_szUser,0,MAX_SIZE);
        memset(m_szPassword,0,MAX_SIZE);
    }

    PackType m_nType;   //包类型
    char     m_szUser[MAX_SIZE] ; //用户ID
    char     m_szPassword[MAX_SIZE];  //密码
} STRU_LOGIN_RQ;


//登录回复
typedef struct STRU_LOGIN_RS
{
    STRU_LOGIN_RS()
    {
        m_nType= DEF_PACK_LOGIN_RS;
        m_UserID = 0;
        m_lResult = 0;
    }
    PackType m_nType;   //包类型
    int  m_UserID;
    int  m_lResult ; //注册结果

} STRU_LOGIN_RS;


//注册请求
typedef struct STRU_REGISTER_RQ
{
    STRU_REGISTER_RQ()
    {
        m_nType = DEF_PACK_REGISTER_RQ;
        memset(m_szUser,0,MAX_SIZE);
        memset(m_szPassword,0,MAX_SIZE);
        dance   = 0;
        edu     = 0;
        ennegy  = 0;
        food    = 0;
        funny   = 0;
        music   = 0;
        outside = 0;
        video   = 0;
    }

    PackType m_nType;   //包类型
    char     m_szUser[MAX_SIZE] ; //用户名
    char     m_szPassword[MAX_SIZE];  //密码
    int dance   ;
    int edu     ;
    int ennegy  ;
    int food    ;
    int funny   ;
    int music   ;
    int outside ;
    int video   ;
} STRU_REGISTER_RQ;

//注册回复
typedef struct STRU_REGISTER_RS
{
    STRU_REGISTER_RS()
    {
        m_nType= DEF_PACK_REGISTER_RS;
        m_lResult = 0;
       // m_id = 0;
    }
    PackType m_nType;   //包类型
    int  m_lResult ; //注册结果
   // int  m_id;
} STRU_REGISTER_RS;

//上传文件请求
typedef struct STRU_UPLOAD_RQ
{
    STRU_UPLOAD_RQ()
    {
        m_nType = DEF_PACK_UPLOAD_RQ;
        m_nFileId = 0;
        m_UserId = 0;
        m_nFileSize = 0;

        memset(m_szFileName , 0 ,MAX_PATH);
        memset(m_szGifName , 0 ,MAX_PATH);
        memset(m_szFileType , 0 ,MAX_SIZE);
        memset( m_szHobby , 0 , DEF_HOBBY_COUNT);
    }
    PackType m_nType; //包类型
    int m_UserId; //用于查数据库, 获取用户名字, 拼接路径
    int m_nFileId; //区分不同文件, 可采用 md5 或 随机数 用户同时只能传一个所以相同概率较低
    int32_t m_nFileSize; //文件大小, 用于文件传输结束
    char m_szHobby[DEF_HOBBY_COUNT];//喜好标签
    char m_szFileName[MAX_PATH]; //文件名, 用于存储文件
    char m_szGifName[MAX_PATH];  //gif文件名 方便数据库写表
    char m_szFileType[MAX_SIZE]; //用于区分视频和图片
}STRU_UPLOAD_RQ;

//上传文件请求回复
typedef struct STRU_UPLOAD_RS
{
    STRU_UPLOAD_RS()
    {
        m_nType = DEF_PACK_UPLOAD_RS;
        m_nResult = 0;
    }
    PackType m_nType; //包类型
    int m_nResult;
}STRU_UPLOAD_RS;

//文件块请求
typedef struct STRU_FILEBLOCK_RQ
{
    STRU_FILEBLOCK_RQ()
    {
        m_nType = DEF_PACK_FILEBLOCK_RQ;
        m_nUserId = 0;
        m_nFileId =0;
        m_nBlockLen =0;
        memset(m_szFileContent, 0 ,MAX_CONTENT_LEN);
    }
    PackType m_nType; //包类型
    int m_nUserId; //用户 ID
    int m_nFileId; //文件 id 用于区分文件
    int m_nBlockLen; //文件写入大小
    char m_szFileContent[MAX_CONTENT_LEN];
}STRU_FILEBLOCK_RQ;

//下载文件请求
typedef struct STRU_DOWNLOAD_RQ
{
    STRU_DOWNLOAD_RQ()
    {
        m_nType = DEF_PACK_DOWNLOAD_RQ;
        m_nUserId = 0;
    }
    PackType   m_nType;   //包类型
    int    m_nUserId; //用户ID

}STRU_DOWNLOAD_RQ;

//下载文件回复
typedef struct STRU_DOWNLOAD_RS
{
    STRU_DOWNLOAD_RS()
    {
        m_nType = DEF_PACK_DOWNLOAD_RS;
        m_nFileId = 0;
        memset(m_szFileName , 0 ,MAX_PATH);
        memset(m_rtmp , 0 ,MAX_PATH);
    }
    PackType m_nType;   //包类型
    int      m_nFileId;
    int64_t  m_nFileSize;
    int      m_nVideoId;
    char     m_szFileName[MAX_PATH];
    char     m_rtmp[MAX_PATH];  // 播放地址 如//1/103.MP3    用户本地需要转化为 rtmp://服务器ip/app名/ + 这个字符串 //本项目  app名为vod

}STRU_DOWNLOAD_RS;

//self请求
typedef struct STRU_MYSELF_RQ
{
    STRU_MYSELF_RQ()
    {
        m_nType = DEF_PACK_MYSELF_RQ;
        m_nUserId = 0;
    }
    PackType   m_nType;   //包类型
    int    m_nUserId; //用户ID

}STRU_MYSELF_RQ;

//self回复
typedef struct STRU_MYSELF_RS
{
    STRU_MYSELF_RS()
    {
        m_nType = DEF_PACK_MYSELF_RS;
        m_nFileId = 0;
        memset(m_szFileName , 0 ,MAX_PATH);
        memset(m_rtmp , 0 ,MAX_PATH);
    }
    PackType m_nType;   //包类型
    int      m_nFileId;
    int64_t  m_nFileSize;
    int      m_nVideoId;
    char     m_szFileName[MAX_PATH];
    char     m_rtmp[MAX_PATH];  // 播放地址 如//1/103.MP3    用户本地需要转化为 rtmp://服务器ip/app名/ + 这个字符串 //本项目  app名为vod

}STRU_MYSELF_RS;

//typedef struct FileInfo
//{
//    //用户id
//    //文件id
//    //videoid 方便控件区分
//    //fileName
//    //filePath
//    //gifName
//    //gifPath
//    //rtmp地址  rtmp://服务器ip:1935/app-vod/  +   //userName/104.mp4
//    //filesize
//    //filePos
//    //hobby

//}FileInfo;

typedef struct STRU_FILEINFO
{
public:
    STRU_FILEINFO():m_nFileID(0),m_VideoID(0),m_nFileSize(0),m_nPos(0),
        m_nUserId(0),pFile(0)
    {
        memset(m_szFilePath, 0 , MAX_PATH);
        memset(m_szFileName, 0 , MAX_PATH);
        memset(m_szGifPath , 0 , MAX_PATH );
        memset(m_szGifName, 0 , MAX_PATH);
        memset(m_szFileType, 0 , MAX_SIZE);
        memset(m_Hobby, 0 , DEF_HOBBY_COUNT);
        memset(m_UserName, 0 , MAX_SIZE);
        memset(m_szRtmp ,0 , MAX_PATH);
    }
    int m_nFileID;//下載的時候是用來做UI控件編號的， 上傳的時候是一個隨機數， 區分文件。
    int m_VideoID;//真是文件ID 與Mysql的一致
    int64_t m_nFileSize;
    int64_t m_nPos;
    int m_nUserId;
    FILE* pFile;
    char m_szFilePath[MAX_PATH];
    char m_szFileName[MAX_PATH];
    char m_szGifPath[MAX_PATH];
    char m_szGifName[MAX_PATH];
    char m_szFileType[MAX_SIZE];
    char m_Hobby[DEF_HOBBY_COUNT];
    char m_UserName[MAX_SIZE];
    char m_szRtmp[MAX_PATH];

}FileInfo;


#endif



