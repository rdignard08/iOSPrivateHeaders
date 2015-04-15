
@interface CFPrefsDirectSource : CFPrefsPlistSource {

    CFPDSource* _underlyingSource;
    unsigned long long _inode;
    BOOL _managed;
}

 - (void) dealloc;
 - (unsigned char) alreadylocked_requestNewData;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a ;
 - (BOOL) managed;
 - (void) sendFullyPreparedMessage:(id)a settingValue:(^v)b forKey:(^{__CFString=})c retryCount:(int)d ;
 - (void) setManaged:(BOOL)a ;
 - (^v) copyReplyForDirectMessage:(id)a error:(^B)b ;
 - (BOOL) sendMessage:(id)a ;


@end
