
@interface CFPrefsManagedSource : CFPrefsPlistSource {

}
 + (void) withSourceForIdentifier:(^{__CFString=})auser:(^{__CFString=})bperform:(@?)c;

 - (void) alreadylocked_setValue:(^v)a forKey:(^{__CFString=})b ;
 - (BOOL) managed;
 - (long long) sendMessageSettingValue:(^v)a forKey:(^{__CFString=})b ;
 - (id) initWithDomain:(^{__CFString=})a user:(^{__CFString=})b byHost:(BOOL)c ;


@end
