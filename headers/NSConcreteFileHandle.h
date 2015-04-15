
@interface NSConcreteFileHandle : NSFileHandle {

    i _fd;
    S _flags;
    ^{__CFRunLoopSource=} _source;
    ^{__CFRunLoop=} _rl;
    S _activity;
    i _error;
    i _resultSocket;
    @"NSObject<OS_dispatch_source>" _dsrc;
    @"NSObject<OS_dispatch_data>" _resultData;
    @"NSObject<OS_dispatch_queue>" _fhQueue;
    @"NSObject<OS_dispatch_io>" _readChannel;
    @? _readabilityHandler;
    @? _writeabilityHandler;
    @"NSObject<OS_dispatch_source>" _readMonitoringSource;
    @"NSObject<OS_dispatch_source>" _writeMonitoringSource;
    @"NSObject<OS_dispatch_queue>" _monitoringQueue;
}

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
 - (void) _locked_clearHandler:(^@?)aforSource:(^@)b;
 - (void) _cancelDispatchSources;
 - (void) _commonDealloc;
 - (void) performActivity:(q)amodes:(id)b;
 - (void) readInBackgroundAndNotifyForModes:(id)a;
 - (void) readToEndOfFileInBackgroundAndNotifyForModes:(id)a;
 - (void) acceptConnectionInBackgroundAndNotifyForModes:(id)a;
 - (void) waitForDataInBackgroundAndNotifyForModes:(id)a;
 - (id) _monitor:(i)a;
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
 - (i) fileDescriptor;
 - (void) closeFile;
 - (Q) readDataOfLength:(Q)abuffer:(*)b;
 - (void) seekToFileOffset:(Q)a;
 - (void) writeData:(id)a;


@end
