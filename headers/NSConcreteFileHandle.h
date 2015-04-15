
@interface NSConcreteFileHandle : NSFileHandle {

    int _fd;
    unsigned short _flags;
    ^{__CFRunLoopSource=} _source;
    ^{__CFRunLoop=} _rl;
    unsigned short _activity;
    int _error;
    int _resultSocket;
    NSObject<OS_dispatch_source>* _dsrc;
    NSObject<OS_dispatch_data>* _resultData;
    NSObject<OS_dispatch_queue>* _fhQueue;
    NSObject<OS_dispatch_io>* _readChannel;
    @? _readabilityHandler;
    @? _writeabilityHandler;
    NSObject<OS_dispatch_source>* _readMonitoringSource;
    NSObject<OS_dispatch_source>* _writeMonitoringSource;
    NSObject<OS_dispatch_queue>* _monitoringQueue;
}

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
 - (void) _locked_clearHandler:(^@?)a forSource:(^@)b ;
 - (void) _cancelDispatchSources;
 - (void) _commonDealloc;
 - (void) performActivity:(long long)a modes:(id)b ;
 - (void) readInBackgroundAndNotifyForModes:(id)a ;
 - (void) readToEndOfFileInBackgroundAndNotifyForModes:(id)a ;
 - (void) acceptConnectionInBackgroundAndNotifyForModes:(id)a ;
 - (void) waitForDataInBackgroundAndNotifyForModes:(id)a ;
 - (id) _monitor:(int)a ;
 - (void) setPort:(id)a ;
 - (void) readInBackgroundAndNotify;
 - (void) readToEndOfFileInBackgroundAndNotify;
 - (void) acceptConnectionInBackgroundAndNotify;
 - (void) waitForDataInBackgroundAndNotify;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) port;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (int) fileDescriptor;
 - (void) closeFile;
 - (unsigned long long) readDataOfLength:(unsigned long long)a buffer:(char*)b ;
 - (void) seekToFileOffset:(unsigned long long)a ;
 - (void) writeData:(id)a ;


@end
