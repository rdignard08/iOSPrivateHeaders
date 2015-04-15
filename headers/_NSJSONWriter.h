
@interface _NSJSONWriter : NSObject {

    NSOutputStream* outputStream;
    int kind;
    char* dataBuffer;
    unsigned long long dataBufferLen;
    unsigned long long dataLen;
    BOOL freeDataBuffer;
    char* tempBuffer;
    unsigned long long tempBufferLen;
    long long totalDataWritten;
}

 - (void) resizeTemporaryBuffer:(unsigned long long)a ;
 - (id) dataWithRootObject:(id)a options:(unsigned long long)b error:(^@)c ;
 - (long long) writeRootObject:(id)a toStream:(id)b options:(unsigned long long)c error:(^@)d ;
 - (long long) appendString:(id)a range:({_NSRange=QQ})b ;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
