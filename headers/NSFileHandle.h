
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
 + (id) fileHandleForReadingFromURL:(id)amode:(S)berror:(^@)c;
 + (id) fileHandleForWritingToURL:(id)amode:(S)berror:(^@)c;
 + (id) fileHandleForUpdatingURL:(id)amode:(S)berror:(^@)c;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) fileHandleForReadingFromURL:(id)aerror:(^@)b;
 + (id) fileHandleForReadingAtPath:(id)a;
 + (id) fileHandleForWritingAtPath:(id)a;

 - (void) ml_lock;
 - (void) ml_unlock;
 - (Class) classForCoder;
 - (id) initWithFileDescriptor:(i)acloseOnDealloc:(BOOL)b;
 - (id) initWithPath:(id)aflags:(q)bcreateMode:(q)cerror:(^@)d;
 - (id) initWithPath:(id)aflags:(q)bcreateMode:(q)c;
 - (id) initWithURL:(id)aflags:(q)bcreateMode:(q)cerror:(^@)d;
 - (id) initWithFileDescriptor:(i)a;
 - (id) availableData;
 - (id) readDataToEndOfFile;
 - (id) readDataOfLength:(Q)a;
 - (Q) offsetInFile;
 - (Q) seekToEndOfFile;
 - (void) truncateFileAtOffset:(Q)a;
 - (void) synchronizeFile;
 - (@?) writeabilityHandler;
 - (void) setWriteabilityHandler:(@?)a;
 - (@?) readabilityHandler;
 - (void) setReadabilityHandler:(@?)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (i) fileDescriptor;
 - (void) closeFile;
 - (void) seekToFileOffset:(Q)a;
 - (void) writeData:(id)a;


@end
