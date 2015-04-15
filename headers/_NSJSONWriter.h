
@interface _NSJSONWriter : NSObject {

    @"NSOutputStream" outputStream;
    i kind;
    * dataBuffer;
    Q dataBufferLen;
    Q dataLen;
    BOOL freeDataBuffer;
    * tempBuffer;
    Q tempBufferLen;
    q totalDataWritten;
}

 - (void) resizeTemporaryBuffer:(Q)a;
 - (id) dataWithRootObject:(id)aoptions:(Q)berror:(^@)c;
 - (q) writeRootObject:(id)atoStream:(id)boptions:(Q)cerror:(^@)d;
 - (q) appendString:(id)arange:({_NSRange=QQ})b;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
