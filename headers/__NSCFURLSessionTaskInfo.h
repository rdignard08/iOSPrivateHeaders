
@protocol NSSecureCoding;
@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {

    BOOL _hasStarted;
    BOOL _expectingResumeCallback;
    BOOL _establishedConnection;
    BOOL _disablesRetry;
    BOOL _shouldCancelOnDisconnect;
    BOOL _discretionary;
    unsigned long long _identifier;
    unsigned long long _taskKind;
    double _creationTime;
    long long _state;
    unsigned long long _suspendCount;
    NSString _taskDescription;
    NSURLRequest _originalRequest;
    NSURLRequest _currentRequest;
    NSURLResponse _response;
    NSError _error;
    NSURL _fileURL;
    NSURL _downloadFileURL;
    NSString _bundleID;
    NSString _sessionID;
    unsigned long long _retryCount;
    unsigned long long _lowThroughputTimerRetryCount;
    long long _basePriority;
    NSString _uniqueIdentifier;
    unsigned long long _AVAssetDownloadToken;
    NSURL _URL;
    NSURL _destinationURL;
    NSDictionary _options;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSDictionary __backgroundTaskTimingData;
}
@property (atomic, assign, readwrite) NSNumber* identifier;
@property (atomic, assign, readwrite) NSNumber* taskKind;
@property (atomic, assign, readwrite) NSNumber* creationTime;
@property (atomic, assign, readwrite) NSNumber* state;
@property (atomic, assign, readwrite) NSNumber* suspendCount;
@property (atomic, copy, readwrite) NSString* taskDescription;
@property (atomic, copy, readwrite) NSURLRequest* originalRequest;
@property (atomic, copy, readwrite) NSURLRequest* currentRequest;
@property (atomic, copy, readwrite) NSURLResponse* response;
@property (atomic, copy, readwrite) NSError* error;
@property (atomic, retain, readwrite) NSURL* fileURL;
@property (atomic, retain, readwrite) NSURL* downloadFileURL;
@property (atomic, retain, readwrite) NSString* bundleID;
@property (atomic, retain, readwrite) NSString* sessionID;
@property (atomic, assign, readwrite) NSNumber* hasStarted;
@property (atomic, assign, readwrite) NSNumber* expectingResumeCallback;
@property (atomic, assign, readwrite) NSNumber* establishedConnection;
@property (atomic, assign, readwrite) NSNumber* retryCount;
@property (atomic, assign, readwrite) NSNumber* lowThroughputTimerRetryCount;
@property (atomic, assign, readwrite) NSNumber* disablesRetry;
@property (atomic, assign, readwrite) NSNumber* shouldCancelOnDisconnect;
@property (atomic, assign, readwrite) NSNumber* basePriority;
@property (atomic, assign, readwrite, getter=isDiscretionary) NSNumber* discretionary;
@property (atomic, retain, readwrite) NSString* uniqueIdentifier;
@property (atomic, assign, readwrite) NSNumber* AVAssetDownloadToken;
@property (atomic, copy, readwrite) NSURL* URL;
@property (atomic, copy, readwrite) NSURL* destinationURL;
@property (atomic, retain, readwrite) NSDictionary* options;
@property (atomic, assign, readwrite) NSNumber* countOfBytesReceived;
@property (atomic, assign, readwrite) NSNumber* countOfBytesSent;
@property (atomic, assign, readwrite) NSNumber* countOfBytesExpectedToSend;
@property (atomic, assign, readwrite) NSNumber* countOfBytesExpectedToReceive;
@property (atomic, copy, readwrite) NSDictionary* _backgroundTaskTimingData;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (long long) state;
 - (id) currentRequest;
 - (id) URL;
 - (id) response;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setSuspendCount:(unsigned long long)a;
 - (void) setState:(long long)a;
 - (id) error;
 - (void) setError:(id)a;
 - (void) setResponse:(id)a;
 - (void) setCountOfBytesExpectedToReceive:(long long)a;
 - (long long) countOfBytesReceived;
 - (void) setCountOfBytesReceived:(long long)a;
 - (void) setCountOfBytesSent:(long long)a;
 - (void) setCountOfBytesExpectedToSend:(long long)a;
 - (unsigned long long) suspendCount;
 - (void) setOriginalRequest:(id)a;
 - (long long) countOfBytesExpectedToReceive;
 - (id) originalRequest;
 - (id) fileURL;
 - (unsigned long long) AVAssetDownloadToken;
 - (id) destinationURL;
 - (unsigned long long) taskKind;
 - (long long) countOfBytesSent;
 - (long long) countOfBytesExpectedToSend;
 - (void) set_backgroundTaskTimingData:(id)a;
 - (void) setAVAssetDownloadToken:(unsigned long long)a;
 - (id) taskDescription;
 - (void) setTaskDescription:(id)a;
 - (id) _backgroundTaskTimingData;
 - (void) setURL:(id)a;
 - (void) setDestinationURL:(id)a;
 - (void) setCurrentRequest:(id)a;
 - (void) setBundleID:(id)a;
 - (void) setSessionID:(id)a;
 - (void) setHasStarted:(BOOL)a;
 - (void) setUniqueIdentifier:(id)a;
 - (void) setRetryCount:(unsigned long long)a;
 - (id) initWithTask:(id)abundleID:(id)bsessionID:(id)c;
 - (void) setTaskKind:(unsigned long long)a;
 - (void) setFileURL:(id)a;
 - (void) setDownloadFileURL:(id)a;
 - (void) setOptions:(id)a;
 - (double) creationTime;
 - (id) downloadFileURL;
 - (id) bundleID;
 - (id) sessionID;
 - (BOOL) hasStarted;
 - (BOOL) shouldCancelOnDisconnect;
 - (long long) basePriority;
 - (BOOL) isDiscretionary;
 - (id) uniqueIdentifier;
 - (id) options;
 - (void) setCreationTime:(double)a;
 - (void) setShouldCancelOnDisconnect:(BOOL)a;
 - (void) setBasePriority:(long long)a;
 - (void) setDiscretionary:(BOOL)a;
 - (id) initWithDataTask:(id)abundleID:(id)bsessionID:(id)c;
 - (id) initWithUploadTask:(id)abundleID:(id)bsessionID:(id)c;
 - (id) initWithDownloadTask:(id)abundleID:(id)bsessionID:(id)c;
 - (id) initWithAVAssetDownloadURL:(id)adestinationURL:(id)boptions:(id)ctaskIdentifier:(unsigned long long)dbundleID:(id)esessionID:(id)f;
 - (BOOL) expectingResumeCallback;
 - (void) setExpectingResumeCallback:(BOOL)a;
 - (BOOL) establishedConnection;
 - (void) setEstablishedConnection:(BOOL)a;
 - (unsigned long long) retryCount;
 - (unsigned long long) lowThroughputTimerRetryCount;
 - (void) setLowThroughputTimerRetryCount:(unsigned long long)a;
 - (BOOL) disablesRetry;
 - (void) setDisablesRetry:(BOOL)a;
 - (unsigned long long) identifier;
 - (void) setIdentifier:(unsigned long long)a;


@end
