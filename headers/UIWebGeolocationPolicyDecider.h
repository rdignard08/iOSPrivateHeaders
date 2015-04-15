
@interface UIWebGeolocationPolicyDecider : NSObject {

    NSMutableDictionary* _sites;
    NSMutableArray* _challenges;
    NSMapTable* _activeChallenges;
}
 + (void) initialize;
 + (id) sharedPolicyDecider;

 - (void) dealloc;
 - (void) clearCache;
 - (void) alertView:(id)a clickedButtonAtIndex:(long long)b ;
 - (id) _siteFileInContainerDirectory:(id)a creatingIntermediateDirectoriesIfNecessary:(BOOL)b ;
 - (id) _siteFile;
 - (BOOL) _isAuthorizationDate:(id)a inclusivelyBetweenDate:(id)b andDate:(id)c ;
 - (void) _save;
 - (long long) _getChallengeCountFromHistoryForToken:(id)a requestingURL:(id)b ;
 - (void) _executeNextChallenge;
 - (void) _decidePolicyForGeolocationRequestFromOrigin:(id)a requestingURL:(id)b window:(id)c listener:(id)d ;
 - (void) clearAllCaches;
 - (void) clearAuthorizationsAddedBetween:(id)a and:(id)b ;
 - (void) decidePolicyForGeolocationRequestFromOrigin:(id)a requestingURL:(id)b window:(id)c listener:(id)d ;
 - (id) init;
 - (void) _load;
 - (void) webView:(id)a decidePolicyForGeolocationRequestFromOrigin:(id)b frame:(id)c listener:(id)d ;


@end
