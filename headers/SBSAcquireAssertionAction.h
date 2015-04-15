
@interface SBSAcquireAssertionAction : BSAction {

}
 + (id) assertionWithAssertionName:(id)areason:(id)bwithHandler:(@?)c;

 - (unsigned int) port;
 - (id) reason;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;
 - (id) assertionName;


@end
