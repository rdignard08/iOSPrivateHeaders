
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

    @"NSString" _category;
    @"NSDictionary" _actionsByContext;
}
@property (nonatomic, copy, readwrite) NSString* category;
@property (nonatomic, copy, readwrite) NSDictionary* actionsByContext;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setCategory:(id)a;
 - (id) initWithCategory:(id)aactionsByContext:(id)b;
 - (id) actionsForContext:(Q)a;
 - (Q) _maximumActionsForContext:(Q)a;
 - (id) validatedSettings;
 - (id) actionsByContext;
 - (void) setActionsByContext:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) actions;
 - (id) category;


@end
