
@interface WebDefaultPolicyDelegate : NSObject {

}
 + (id) sharedPolicyDelegate;

 - (void) webView:(id)aunableToImplementPolicyWithError:(id)bframe:(id)c;
 - (void) webView:(id)adecidePolicyForMIMEType:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNavigationAction:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNewWindowAction:(id)brequest:(id)cnewFrameName:(id)ddecisionListener:(id)e;
 - (BOOL) webView:(id)ashouldGoToHistoryItem:(id)b;


@end
