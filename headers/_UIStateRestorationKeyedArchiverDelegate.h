
@protocol NSKeyedArchiverDelegate;
@interface _UIStateRestorationKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {

}
 + (id) sharedDelegate;

 - (id) archiver:(id)a willEncodeObject:(id)b ;


@end
