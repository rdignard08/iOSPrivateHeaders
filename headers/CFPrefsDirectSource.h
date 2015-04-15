
@interface CFPrefsDirectSource : CFPrefsPlistSource {

    CFPDSource* _underlyingSource;
    unsigned long long _inode;
    BOOL _managed;
}

 - (void) dealloc;
 - (unsigned char) alreadylocked_requestNewData;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a;
 - (BOOL) managed;
 - (void) sendFullyPreparedMessage:(id)asettingValue:(^v)bforKey:(^{__CFString=})cretryCount:(int)d;
 - (void) setManaged:(BOOL)a;
 - (^v) copyReplyForDirectMessage:(id)aerror:(^B)b;
 - (BOOL) sendMessage:(id)a;


@end
