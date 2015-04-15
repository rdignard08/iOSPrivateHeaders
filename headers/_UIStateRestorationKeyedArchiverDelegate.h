
@protocol NSKeyedArchiverDelegate;
@interface _UIStateRestorationKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {

}
 + (id) sharedDelegate;

 - (id) archiver:(id)awillEncodeObject:(id)b;


@end
