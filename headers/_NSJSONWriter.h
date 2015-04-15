
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

 - (void) resizeTemporaryBuffer:(unsigned long long)a;
 - (id) dataWithRootObject:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (long long) writeRootObject:(id)atoStream:(id)boptions:(unsigned long long)cerror:(^@)d;
 - (long long) appendString:(id)arange:({_NSRange=QQ})b;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
