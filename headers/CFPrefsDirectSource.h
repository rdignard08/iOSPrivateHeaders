
@interface CFPrefsDirectSource : CFPrefsPlistSource {

    @"CFPDSource" _underlyingSource;
    Q _inode;
    BOOL _managed;
}

 - (void) dealloc;
 - (C) alreadylocked_requestNewData;
 - (id) createRequestNewContentMessageForDaemon:(BOOL)a;
 - (BOOL) managed;
 - (void) sendFullyPreparedMessage:(id)asettingValue:(^v)bforKey:(^{__CFString=})cretryCount:(i)d;
 - (void) setManaged:(BOOL)a;
 - (^v) copyReplyForDirectMessage:(id)aerror:(^B)b;
 - (BOOL) sendMessage:(id)a;


@end
