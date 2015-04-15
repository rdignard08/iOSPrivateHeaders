
@protocol NSCopying, NSMutableCopying, NSSecureCoding;
@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

    NSString _identifier;
    NSDictionary _actionsByContext;
}
@property (nonatomic, copy, readwrite) NSString* identifier;
@property (nonatomic, copy, readwrite) NSDictionary* actionsByContext;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) actionsForContext:(unsigned long long)a;
 - (unsigned long long) _maximumActionsForContext:(unsigned long long)a;
 - (id) actionsByContext;
 - (void) setActionsByContext:(id)a;
 - (id) initWithIdentifier:(id)aactionsByContext:(id)b;
 - (id) validatedCategory;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) identifier;
 - (void) setIdentifier:(id)a;
 - (id) actions;


@end
