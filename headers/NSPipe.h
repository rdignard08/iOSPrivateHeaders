
@interface NSPipe : NSObject {

}
@property (atomic, retain, readonly) NSFileHandle* fileHandleForReading;
@property (atomic, retain, readonly) NSFileHandle* fileHandleForWriting;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) pipe;

 - (id) init;
 - (id) fileHandleForReading;
 - (id) fileHandleForWriting;


@end
