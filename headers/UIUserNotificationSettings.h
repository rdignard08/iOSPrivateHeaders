
@protocol NSCopying, NSSecureCoding;
@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

    unsigned long long _types;
    NSSet _categories;
}
@property (nonatomic, assign, readonly) NSNumber* types;
@property (nonatomic, copy, readonly) NSSet* categories;
 + (BOOL) supportsSecureCoding;
 + (id) settingsForTypes:(unsigned long long)acategories:(id)b;
 + (id) settingsForUserNotificationTypes:(unsigned long long)auserNotificationActionSettings:(id)b;
 + (id) settingsForRegisteredSettings:(id)arequestedSettings:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (unsigned long long) types;
 - (id) validatedSettings;
 - (id) initWithUserNotificationTypes:(unsigned long long)auserNotificationActionSettings:(id)b;
 - (id) initWithTypes:(unsigned long long)acategories:(id)b;
 - (id) categories;
 - (BOOL) mayPresentUserNotificationOfType:(unsigned long long)a;
 - (unsigned long long) allowedUserNotificationTypes;
 - (id) userNotificationActionSettings;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
