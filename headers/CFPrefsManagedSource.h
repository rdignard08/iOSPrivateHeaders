
@interface CFPrefsManagedSource : CFPrefsPlistSource {

}
 + (void) withSourceForIdentifier:(^{__CFString=})auser:(^{__CFString=})bperform:(@?)c;

 - (void) alreadylocked_setValue:(^v)aforKey:(^{__CFString=})b;
 - (BOOL) managed;
 - (q) sendMessageSettingValue:(^v)aforKey:(^{__CFString=})b;
 - (id) initWithDomain:(^{__CFString=})auser:(^{__CFString=})bbyHost:(BOOL)c;


@end
