
@protocol NSSecureCoding;
@interface NSFileHandle : NSObject <NSSecureCoding> {

}
@property (atomic, copy, readonly) NSData* availableData;
@property (atomic, assign, readonly) NSNumber* offsetInFile;
 + (BOOL) supportsSecureCoding;
 + (id) fileHandleWithNullDevice;
 + (id) fileHandleWithStandardInput;
 + (id) fileHandleWithStandardOutput;
 + (id) fileHandleWithStandardError;
 + (id) fileHandleForUpdatingAtPath:(id)a;
 + (id) fileHandleForWritingToURL:(id)aerror:(^@)b;
 + (id) fileHandleForUpdatingURL:(id)aerror:(^@)b;
 + (id) fileHandleForReadingFromURL:(id)amode:(unsigned short)berror:(^@)c;
 + (id) fileHandleForWritingToURL:(id)amode:(unsigned short)berror:(^@)c;
 + (id) fileHandleForUpdatingURL:(id)amode:(unsigned short)berror:(^@)c;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) fileHandleForReadingFromURL:(id)aerror:(^@)b;
 + (id) fileHandleForReadingAtPath:(id)a;
 + (id) fileHandleForWritingAtPath:(id)a;

 - (void) ml_lock;
 - (void) ml_unlock;
 - (Class) classForCoder;
 - (id) initWithFileDescriptor:(int)a closeOnDealloc:(BOOL)b ;
 - (id) initWithPath:(id)a flags:(long long)b createMode:(long long)c error:(^@)d ;
 - (id) initWithPath:(id)a flags:(long long)b createMode:(long long)c ;
 - (id) initWithURL:(id)a flags:(long long)b createMode:(long long)c error:(^@)d ;
 - (id) initWithFileDescriptor:(int)a ;
 - (id) availableData;
 - (id) readDataToEndOfFile;
 - (id) readDataOfLength:(unsigned long long)a ;
 - (unsigned long long) offsetInFile;
 - (unsigned long long) seekToEndOfFile;
 - (void) truncateFileAtOffset:(unsigned long long)a ;
 - (void) synchronizeFile;
 - (@?) writeabilityHandler;
 - (void) setWriteabilityHandler:(@?)a ;
 - (@?) readabilityHandler;
 - (void) setReadabilityHandler:(@?)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (int) fileDescriptor;
 - (void) closeFile;
 - (void) seekToFileOffset:(unsigned long long)a ;
 - (void) writeData:(id)a ;


@end
