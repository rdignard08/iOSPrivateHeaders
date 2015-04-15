
@interface NSConcretePipe : NSPipe {

    NSFileHandle* _readHandle;
    NSFileHandle* _writeHandle;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) init;
 - (id) fileHandleForReading;
 - (id) fileHandleForWriting;


@end
