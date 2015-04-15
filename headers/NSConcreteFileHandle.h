
@interface NSConcreteFileHandle : NSFileHandle {

    int _fd;
    unsigned short _flags;
    ^{__CFRunLoopSource=} _source;
    ^{__CFRunLoop=} _rl;
    unsigned short _activity;
    int _error;
    int _resultSocket;
    NSObject<OS_dispatch_source> _dsrc;
    NSObject<OS_dispatch_data> _resultData;
    NSObject<OS_dispatch_queue> _fhQueue;
    NSObject<OS_dispatch_io> _readChannel;
    @? _readabilityHandler;
    @? _writeabilityHandler;
    NSObject<OS_dispatch_source> _readMonitoringSource;
    NSObject<OS_dispatch_source> _writeMonitoringSource;
    NSObject<OS_dispatch_queue> _monitoringQueue;
}

 - (id) initWithFileDescriptor:(int)acloseOnDealloc:(BOOL)b;
 - (id) initWithPath:(id)aflags:(long long)bcreateMode:(long long)cerror:(^@)d;
 - (id) initWithPath:(id)aflags:(long long)bcreateMode:(long long)c;
 - (id) initWithURL:(id)aflags:(long long)bcreateMode:(long long)cerror:(^@)d;
 - (id) initWithFileDescriptor:(int)a;
 - (id) availableData;
 - (id) readDataToEndOfFile;
 - (id) readDataOfLength:(unsigned long long)a;
 - (unsigned long long) offsetInFile;
 - (unsigned long long) seekToEndOfFile;
 - (void) truncateFileAtOffset:(unsigned long long)a;
 - (void) synchronizeFile;
 - (@?) writeabilityHandler;
 - (void) setWriteabilityHandler:(@?)a;
 - (@?) readabilityHandler;
 - (void) setReadabilityHandler:(@?)a;
 - (void) _locked_clearHandler:(^@?)aforSource:(^@)b;
 - (void) _cancelDispatchSources;
 - (void) _commonDealloc;
 - (void) performActivity:(long long)amodes:(id)b;
 - (void) readInBackgroundAndNotifyForModes:(id)a;
 - (void) readToEndOfFileInBackgroundAndNotifyForModes:(id)a;
 - (void) acceptConnectionInBackgroundAndNotifyForModes:(id)a;
 - (void) waitForDataInBackgroundAndNotifyForModes:(id)a;
 - (id) _monitor:(int)a;
 - (void) setPort:(id)a;
 - (void) readInBackgroundAndNotify;
 - (void) readToEndOfFileInBackgroundAndNotify;
 - (void) acceptConnectionInBackgroundAndNotify;
 - (void) waitForDataInBackgroundAndNotify;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) finalize;
 - (id) port;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (int) fileDescriptor;
 - (void) closeFile;
 - (unsigned long long) readDataOfLength:(unsigned long long)abuffer:(char*)b;
 - (void) seekToFileOffset:(unsigned long long)a;
 - (void) writeData:(id)a;


@end
