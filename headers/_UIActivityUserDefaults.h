
@interface _UIActivityUserDefaults : NSObject {

    @"NSString" _identifier;
    @"NSUserDefaults" _userDefaults;
}
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, retain, readwrite) NSUserDefaults* userDefaults;
 + (id) updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)asomeSortedActivityIdentifiers:(id)b;

 - (id) userDefaults;
 - (void) dealloc;
 - (id) initWithIdentifier:(id)auserDefaults:(id)b;
 - (void) setUserDefaults:(id)a;
 - (id) activitiesSortedByUserOrderForActivities:(id)a;
 - (BOOL) activityIsHidden:(id)a;
 - (BOOL) canHideActivity:(id)a;
 - (void) updateUserOrderWithSomeSortedActivities:(id)a;
 - (void) setActivity:(id)aasHidden:(BOOL)b;
 - (id) applicationExtensionForActivity:(id)a;
 - (void) postActivityUserDefaultsDidChangeNotification;
 - (id) identifierForActivity:(id)a;
 - (id) activityIdentifiersInUserOrder;
 - (id) activitiesSortedByActivityIdentifierOrder:(id)aforActivities:(id)b;
 - (id) mutableActivityIdentifiersArrayForActivitiesArray:(id)a;
 - (void) setActivityIdentifiersInUserOrder:(id)a;
 - (id) defaultsValueForKey:(id)aactivity:(id)b;
 - (void) setDefaultsValue:(id)aforKey:(id)bactivity:(id)c;
 - (id) identifier;
 - (void) setIdentifier:(id)a;


@end
