
@protocol NSSecureCoding;
@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {

    BOOL _hasStarted;
    BOOL _expectingResumeCallback;
    BOOL _establishedConnection;
    BOOL _disablesRetry;
    BOOL _shouldCancelOnDisconnect;
    BOOL _discretionary;
    Q _identifier;
    Q _taskKind;
    d _creationTime;
    q _state;
    Q _suspendCount;
    @"NSString" _taskDescription;
    @"NSURLRequest" _originalRequest;
    @"NSURLRequest" _currentRequest;
    @"NSURLResponse" _response;
    @"NSError" _error;
    @"NSURL" _fileURL;
    @"NSURL" _downloadFileURL;
    @"NSString" _bundleID;
    @"NSString" _sessionID;
    Q _retryCount;
    Q _lowThroughputTimerRetryCount;
    q _basePriority;
    @"NSString" _uniqueIdentifier;
    Q _AVAssetDownloadToken;
    @"NSURL" _URL;
    @"NSURL" _destinationURL;
    @"NSDictionary" _options;
    q _countOfBytesReceived;
    q _countOfBytesSent;
    q _countOfBytesExpectedToSend;
    q _countOfBytesExpectedToReceive;
    @"NSDictionary" __backgroundTaskTimingData;
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
@property (atomic, assign, readwrite, isDiscretionary) NSNumber* discretionary;
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
 - (q) state;
 - (id) currentRequest;
 - (id) URL;
 - (id) response;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setSuspendCount:(Q)a;
 - (void) setState:(q)a;
 - (id) error;
 - (void) setError:(id)a;
 - (void) setResponse:(id)a;
 - (void) setCountOfBytesExpectedToReceive:(q)a;
 - (q) countOfBytesReceived;
 - (void) setCountOfBytesReceived:(q)a;
 - (void) setCountOfBytesSent:(q)a;
 - (void) setCountOfBytesExpectedToSend:(q)a;
 - (Q) suspendCount;
 - (void) setOriginalRequest:(id)a;
 - (q) countOfBytesExpectedToReceive;
 - (id) originalRequest;
 - (id) fileURL;
 - (Q) AVAssetDownloadToken;
 - (id) destinationURL;
 - (Q) taskKind;
 - (q) countOfBytesSent;
 - (q) countOfBytesExpectedToSend;
 - (void) set_backgroundTaskTimingData:(id)a;
 - (void) setAVAssetDownloadToken:(Q)a;
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
 - (void) setRetryCount:(Q)a;
 - (id) initWithTask:(id)abundleID:(id)bsessionID:(id)c;
 - (void) setTaskKind:(Q)a;
 - (void) setFileURL:(id)a;
 - (void) setDownloadFileURL:(id)a;
 - (void) setOptions:(id)a;
 - (d) creationTime;
 - (id) downloadFileURL;
 - (id) bundleID;
 - (id) sessionID;
 - (BOOL) hasStarted;
 - (BOOL) shouldCancelOnDisconnect;
 - (q) basePriority;
 - (BOOL) isDiscretionary;
 - (id) uniqueIdentifier;
 - (id) options;
 - (void) setCreationTime:(d)a;
 - (void) setShouldCancelOnDisconnect:(BOOL)a;
 - (void) setBasePriority:(q)a;
 - (void) setDiscretionary:(BOOL)a;
 - (id) initWithDataTask:(id)abundleID:(id)bsessionID:(id)c;
 - (id) initWithUploadTask:(id)abundleID:(id)bsessionID:(id)c;
 - (id) initWithDownloadTask:(id)abundleID:(id)bsessionID:(id)c;
 - (id) initWithAVAssetDownloadURL:(id)adestinationURL:(id)boptions:(id)ctaskIdentifier:(Q)dbundleID:(id)esessionID:(id)f;
 - (BOOL) expectingResumeCallback;
 - (void) setExpectingResumeCallback:(BOOL)a;
 - (BOOL) establishedConnection;
 - (void) setEstablishedConnection:(BOOL)a;
 - (Q) retryCount;
 - (Q) lowThroughputTimerRetryCount;
 - (void) setLowThroughputTimerRetryCount:(Q)a;
 - (BOOL) disablesRetry;
 - (void) setDisablesRetry:(BOOL)a;
 - (Q) identifier;
 - (void) setIdentifier:(Q)a;


@end
