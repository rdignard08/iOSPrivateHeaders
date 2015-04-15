
@protocol NSCopying, NSSecureCoding;
@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

    Q _types;
    @"NSSet" _categories;
}
@property (nonatomic, assign, readonly) NSNumber* types;
@property (nonatomic, copy, readonly) NSSet* categories;
 + (BOOL) supportsSecureCoding;
 + (id) settingsForTypes:(Q)acategories:(id)b;
 + (id) settingsForUserNotificationTypes:(Q)auserNotificationActionSettings:(id)b;
 + (id) settingsForRegisteredSettings:(id)arequestedSettings:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (Q) types;
 - (id) validatedSettings;
 - (id) initWithUserNotificationTypes:(Q)auserNotificationActionSettings:(id)b;
 - (id) initWithTypes:(Q)acategories:(id)b;
 - (id) categories;
 - (BOOL) mayPresentUserNotificationOfType:(Q)a;
 - (Q) allowedUserNotificationTypes;
 - (id) userNotificationActionSettings;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
