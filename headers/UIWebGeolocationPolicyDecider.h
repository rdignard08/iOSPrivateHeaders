
@interface UIWebGeolocationPolicyDecider : NSObject {

    @"NSMutableDictionary" _sites;
    @"NSMutableArray" _challenges;
    @"NSMapTable" _activeChallenges;
}
 + (void) initialize;
 + (id) sharedPolicyDecider;

 - (void) dealloc;
 - (void) clearCache;
 - (void) alertView:(id)aclickedButtonAtIndex:(q)b;
 - (id) _siteFileInContainerDirectory:(id)acreatingIntermediateDirectoriesIfNecessary:(BOOL)b;
 - (id) _siteFile;
 - (BOOL) _isAuthorizationDate:(id)ainclusivelyBetweenDate:(id)bandDate:(id)c;
 - (void) _save;
 - (q) _getChallengeCountFromHistoryForToken:(id)arequestingURL:(id)b;
 - (void) _executeNextChallenge;
 - (void) _decidePolicyForGeolocationRequestFromOrigin:(id)arequestingURL:(id)bwindow:(id)clistener:(id)d;
 - (void) clearAllCaches;
 - (void) clearAuthorizationsAddedBetween:(id)aand:(id)b;
 - (void) decidePolicyForGeolocationRequestFromOrigin:(id)arequestingURL:(id)bwindow:(id)clistener:(id)d;
 - (id) init;
 - (void) _load;
 - (void) webView:(id)adecidePolicyForGeolocationRequestFromOrigin:(id)bframe:(id)clistener:(id)d;


@end
