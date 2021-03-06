
@interface __NSCFLocalDownloadFile : NSObject {

    {stat="st_dev"i"st_mode"S"st_nlink"S"st_ino"Q"st_uid"I"st_gid"I"st_rdev"i"st_atimespec"{timespec="tv_sec"q"tv_nsec"q}"st_mtimespec"{timespec="tv_sec"q"tv_nsec"q}"st_ctimespec"{timespec="tv_sec"q"tv_nsec"q}"st_birthtimespec"{timespec="tv_sec"q"tv_nsec"q}"st_size"q"st_blocks"q"st_blksize"i"st_flags"I"st_gen"I"st_lspare"i"st_qspare"[2q]} _stat;
    BOOL _finished;
    BOOL _skipUnlink;
    BOOL _truncateFile;
    int _error;
    NSObject<OS_dispatch_io>* _writeIO;
    NSObject<OS_dispatch_queue>* _workQueue;
    NSString* _path;
    <__NSCFLocalDownloadFileOpener>* _fileProvider;
    @? _finishCompletion;
}
@property (atomic, assign, readwrite) NSNumber* writeIO;
@property (atomic, assign, readwrite) NSNumber* workQueue;
@property (atomic, assign, readwrite) NSNumber* finished;
@property (atomic, retain, readwrite) NSString* path;
@property (atomic, assign, readwrite) NSNumber* skipUnlink;
@property (atomic, assign, readwrite) NSNumber* truncateFile;
@property (atomic, assign, readwrite) NSNumber* error;
@property (atomic, assign, readwrite) NSNumber* fileProvider;
@property (atomic, copy, readwrite) NSNumber* finishCompletion;

 - (id) .cxx_construct;
 - (void) dealloc;
 - (id) workQueue;
 - (int) error;
 - (void) setError:(int)a ;
 - (id) initWithExistingUnopenableFile:(id)a fileProvider:(id)b ;
 - (void) truncate;
 - (id) initTempFileWithDirectory:(id)a ;
 - (void) setSkipUnlink:(BOOL)a ;
 - (id) initWithExistingFile:(id)a expectedSize:(long long)b ;
 - (void) writeBytes:(id)a completionQueue:(id)b completion:(@?)c ;
 - (void) captureFile:(^@)a outStat:(^{stat=iSSQIIi{timespec=qq}{timespec=qq}{timespec=qq}{timespec=qq}qqiIIi[2q]})b ;
 - (id) fileURL;
 - (void) finishOnQueue:(id)a completion:(@?)b ;
 - (BOOL) finished;
 - (void) setFinished:(BOOL)a ;
 - (void) setWorkQueue:(id)a ;
 - (id) initQueues;
 - (void) setPath:(id)a ;
 - (void) setFileProvider:(id)a ;
 - (id) writeIO;
 - (BOOL) truncateFile;
 - (void) setTruncateFile:(BOOL)a ;
 - (id) fileProvider;
 - (@?) finishCompletion;
 - (void) setFinishCompletion:(@?)a ;
 - (void) setWriteIO:(id)a ;
 - (BOOL) skipUnlink;
 - (id) ioChannel;
 - (id) path;


@end
