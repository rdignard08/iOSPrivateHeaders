
@interface _UIActivityUserDefaults : NSObject {

    NSString* _identifier;
    NSUserDefaults* _userDefaults;
}
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, retain, readwrite) NSUserDefaults* userDefaults;
 + (id) updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)asomeSortedActivityIdentifiers:(id)b;

 - (id) userDefaults;
 - (void) dealloc;
 - (id) initWithIdentifier:(id)a userDefaults:(id)b ;
 - (void) setUserDefaults:(id)a ;
 - (id) activitiesSortedByUserOrderForActivities:(id)a ;
 - (BOOL) activityIsHidden:(id)a ;
 - (BOOL) canHideActivity:(id)a ;
 - (void) updateUserOrderWithSomeSortedActivities:(id)a ;
 - (void) setActivity:(id)a asHidden:(BOOL)b ;
 - (id) applicationExtensionForActivity:(id)a ;
 - (void) postActivityUserDefaultsDidChangeNotification;
 - (id) identifierForActivity:(id)a ;
 - (id) activityIdentifiersInUserOrder;
 - (id) activitiesSortedByActivityIdentifierOrder:(id)a forActivities:(id)b ;
 - (id) mutableActivityIdentifiersArrayForActivitiesArray:(id)a ;
 - (void) setActivityIdentifiersInUserOrder:(id)a ;
 - (id) defaultsValueForKey:(id)a activity:(id)b ;
 - (void) setDefaultsValue:(id)a forKey:(id)b activity:(id)c ;
 - (id) identifier;
 - (void) setIdentifier:(id)a ;


@end
