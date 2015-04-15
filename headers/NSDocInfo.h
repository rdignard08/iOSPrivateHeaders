
@protocol NSCopying;
@interface NSDocInfo : NSObject <NSCopying> {

    long long time;
    unsigned short mode;
    {?="isDir"b1"isSingleFile"b1"isSoftLink"b1"_pad"b13} flags;
}

 - (id) initWithFileAttributes:(id)a ;
 - (id) initFromInfo:(^{stat=iSSQIIi{timespec=qq}{timespec=qq}{timespec=qq}{timespec=qq}qqiIIi[2q]})a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) copy;


@end
