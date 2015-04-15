
@interface WebDefaultPolicyDelegate : NSObject {

}
 + (id) sharedPolicyDelegate;

 - (void) webView:(id)a unableToImplementPolicyWithError:(id)b frame:(id)c ;
 - (void) webView:(id)a decidePolicyForMIMEType:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a decidePolicyForNavigationAction:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a decidePolicyForNewWindowAction:(id)b request:(id)c newFrameName:(id)d decisionListener:(id)e ;
 - (BOOL) webView:(id)a shouldGoToHistoryItem:(id)b ;


@end
